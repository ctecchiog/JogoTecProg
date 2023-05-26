#include "Miyu.h"

namespace Jogar
{
	namespace Entidades
	{
		Miyu::Miyu()
		{
		}
		Miyu::Miyu(const sf::Vector2f pos, const sf::Vector2f tam): Miyu()
		{
			corpo.setFillColor(sf::Color::Green);
			corpo.setPosition(pos);
			corpo.setSize(tam);
			id = 1;
		}
		Miyu::~Miyu()
		{
		}
		void Miyu::colisao(Entidade* outraEntidade)
		{
			if (outraEntidade->getID() == 2)
			{
				this->operator-();
				corpo.setFillColor(sf::Color::White);
			}
		}
		void Miyu::executar()
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) 
			{
				corpo.move(vel.x, 0.0f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				corpo.move(-vel.x, 0.0f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				corpo.move(0.0f, vel.y);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				corpo.move(0.0f, -vel.y);
			}
		}
	}
}