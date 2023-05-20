#include "Jogador.h"
#include "SFML\Graphics.hpp"

Jogar::Entidades::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam, const float vel)
{
	inicializa();
}

Jogar::Entidades::Jogador::~Jogador()
{ 

}

void Jogar::Entidades::Jogador::inicializa()
{
	this->corpo.setFillColor(sf::Color::Green);
}

void Jogar::Entidades::Jogador::atualizar()
{
	if (podeAndar)
		atualizarPosicao();
	relogio.restart();
}

void Jogar::Entidades::Jogador::colisao(Entidade* outraEntidade, sf::Vector2f ds)
{
}


