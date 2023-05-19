#include "Jogador.h"
#include "SFML\Graphics.hpp"

void Jogar::Entidades::Jogador::inicializa()
{
}

Jogar::Entidades::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam):
	Personagem(pos, tam)
{
	corpo.setFillColor(sf::Color::Green);
}

Jogar::Entidades::Jogador::~Jogador()
{ 

}
void Jogar::Entidades::Jogador::atualizar()
{
	if (podeAndar)
		atualizarPosicao();
	relogio.restart();
}


