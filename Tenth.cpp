#include "Tenth.h"

namespace Jogar
{
	namespace Entidades
	{
		Tenth::Tenth()
		{
		}
		Tenth::Tenth(const sf::Vector2f pos, const sf::Vector2f tam): Tenth()
		{
			this->corpo.setFillColor(sf::Color::Green);
			this->corpo.setPosition(pos);
			this->corpo.setSize(tam);
			this->id = 1;
		}
		Tenth::~Tenth()
		{
		}
		void Tenth::colisao(Entidade* outraEntidade)
		{
			if (outraEntidade->getID() == 2)
			{
				this->operator-();
				this->corpo.setFillColor(sf::Color::White);
			}
		}
		void Tenth::executar()
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) 
			{
				this->corpo.move(vel.x, 0.0f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				this->corpo.move(-vel.x, 0.0f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{
				this->corpo.move(0.0f, vel.y);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{
				this->corpo.move(0.0f, -vel.y);
			}
		}
	}
}