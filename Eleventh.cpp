#include "Eleventh.h"

namespace Jogar
{
	namespace Entidades
	{
		Eleventh::Eleventh()
		{
		}
		Eleventh::Eleventh(const sf::Vector2f pos, const sf::Vector2f tam): Eleventh()
		{
			this->corpo.setFillColor(sf::Color::Yellow);
			this->corpo.setPosition(pos);
			this->corpo.setSize(tam);
			this->id = 1;
		}
		Eleventh::~Eleventh()
		{
		}
		void Eleventh::colisao(Entidade* outraEntidade)
		{
			if (outraEntidade->getID() == 2)
			{
				this->operator-();
				this->corpo.setFillColor(sf::Color::White);
			}
		}
		void Eleventh::executar()
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			{
				this->corpo.move(vel.x, 0.0f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{
				this->corpo.move(-vel.x, 0.0f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			{
				this->corpo.move(0.0f, vel.y);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
			{
				this->corpo.move(0.0f, -vel.y);
			}
		}
	}
}