#include "Jogador.h"
#include "SFML\Graphics.hpp"
 
namespace Jogar
{
	Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam)
	{
		inicializa();
		this->id = 1;
	}

	Jogador::~Jogador()
	{

	}

	void Jogador::inicializa()
	{
		this->corpo.setFillColor(sf::Color::Green);
	}

	void Jogador::atualizar()
	{
		if (podeAndar)
			atualizarPosicao();
		relogio.restart();
	}

	void Jogador::colisao(Entidade* outraEntidade)
	{
		if (outraEntidade->getID() == 2)
			this->operator-();
	}
	void Jogador::executar()
	{
	}
}

