#include "Obstaculo.h"

namespace Jogar 
{
	namespace Entidades 
	{
		Obstaculo::Obstaculo()
		{
		}
		Obstaculo::Obstaculo(const sf::Vector2f pos, const sf::Vector2f tam): Obstaculo()
		{
			corpo.setFillColor(sf::Color::Magenta);
			corpo.setPosition(pos);
			corpo.setSize(tam);
			id = 3;
		}

		Obstaculo::~Obstaculo()
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