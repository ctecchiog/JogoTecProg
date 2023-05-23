#include "Gerenciador_Colisoes.h"

Jogar::Gerenciadores::Gerenciador_Colisoes::Gerenciador_Colisoes(Lista::ListaEntidade* listaEntidade):
	listaEntidade(listaEntidade)
{

}

Jogar::Gerenciadores::Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
	if (listaEntidade)
		delete (listaEntidade);
}

const sf::Vector2f Jogar::Gerenciadores::Gerenciador_Colisoes::calculaColisao(Entidade* ent1, Entidade* ent2)
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
    for (int i = 0; i < listaEntidade->getTam() - 1; i++) {
        Entidade* ent1 = listaEntidade->operator[](i);
        for (int j = i + 1; j < listaEntidade->getTam(); j++) {
            Entidade* ent2 = listaEntidade->operator[](j);
            sf::Vector2f ds = calculaColisao(ent1, ent2);
            if (ds.x < 0.0f && ds.y < 0.0f) {
                ent1->colisao(ent2);
            }
        }
    }
}

