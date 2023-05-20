#include "Gerenciador_Colisoes.h"

Jogar::Gerenciadores::Gerenciador_Colisoes::Gerenciador_Colisoes(Lista::ListaEntidade* listaPersonagem, Lista::ListaEntidade* listaObstaculo):
	listaPersonagem(listaPersonagem), listaObstaculo(listaObstaculo)
{

}

Jogar::Gerenciadores::Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
	if (listaPersonagem)
		delete (listaPersonagem);
	if (listaObstaculo)
		delete (listaObstaculo);
}

const sf::Vector2f Jogar::Gerenciadores::Gerenciador_Colisoes::calculaColisao(Entidades::Entidade* ent1, Entidades::Entidade* ent2)
{
	sf::Vector2f pos1 = ent1->getPos();
	sf::Vector2f pos2 = ent2->getPos();

	sf::Vector2f tam1 = ent1->getTam();
	sf::Vector2f tam2 = ent2->getTam();

	sf::Vector2f distanciaEntreCentros(
	fabs((pos1.x + tam1.x/2.0f) - (pos2.x + tam2.x/2.0f)),
	fabs((pos1.y + tam1.y/2.0f) - (pos2.y + tam2.y/2.0f)));

	sf::Vector2f somaMetadeRetangulo(tam1.x/2.0f + tam2.x/2.0f, tam1.y/2.0f + tam2.y/2.0f);

	return sf::Vector2f (distanciaEntreCentros.x - somaMetadeRetangulo.x, distanciaEntreCentros.y - somaMetadeRetangulo.y);
}

void Jogar::Gerenciadores::Gerenciador_Colisoes::executar()
{
    for (int i = 0; i < listaPersonagem->getTam() - 1; i++) {
        Entidades::Entidade* ent1 = listaPersonagem->operator[](i);
        for (int j = i + 1; j < listaPersonagem->getTam(); j++) {
            Entidades::Entidade* ent2 = listaPersonagem->operator[](j);
            sf::Vector2f ds = calculaColisao(ent1, ent2);
            if (ds.x < 0.0f && ds.y < 0.0f) {
                ent1->colisao(ent2);
            }
        }
    }

    for (int i = 0; i < listaPersonagem->getTam(); i++) {
        Entidades::Entidade* ent1 = listaPersonagem->operator[](i);
        for (int j = 0; j < listaObstaculo->getTam(); j++) {
            Entidades::Entidade* ent2 = listaObstaculo->operator[](j);
            sf::Vector2f ds = calculaColisao(ent1, ent2);
            if (ds.x < 0.0f && ds.y < 0.0f) {
                if (ent2->getID() == IDs::IDs::plataforma || ent2->getID() == IDs::IDs::caixa) {
                    ent2->colisao(ent1, ds);
                }
                else {
                    // outro obstáculo 
                }
            }
        }
    }
}

