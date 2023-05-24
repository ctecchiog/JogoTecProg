#include "Obstaculo.h"

namespace Jogar 
{
	namespace Entidades 
	{
		Obstaculo::Obstaculo(const sf::Vector2f pos, const sf::Vector2f tam)
		{
			this->corpo.setFillColor(sf::Color::Magenta);
			this->corpo.setPosition(pos);
			this->corpo.setSize(tam);
			this->id = 3;
		}

		Obstaculo::~Obstaculo()
		{
		}

		void Obstaculo::atualizar()
		{
		}

		void Obstaculo::colisao(Entidade* outraEntidade)
		{
		}

		void Obstaculo::executar()
		{
		}
	}
}