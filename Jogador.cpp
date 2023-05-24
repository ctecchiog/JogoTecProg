#include "Jogador.h"
 
namespace Jogar
{
	namespace Entidades {
		Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam)
		{
			inicializa();
			this->corpo.setPosition(pos);
			this->corpo.setSize(tam);
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
		}

		void Jogador::atualizar(const bool podeAndar)
		{
			//dt = relogio.getElapsedTime().asSeconds();
			//float ds;
			if (podeAndar)
			{
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A)))
				{
					//ds = vel.x * dt;
					//corpo.move(ds, 0.0f);
					corpo.move(vel.x, 0.0f);
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::S)))
				{
					//ds = -vel.x * dt;
					//corpo.move(ds, 0.0f);
					corpo.move(-vel.x, 0.0f);
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::W)))
				{
					//ds = vel.y * dt;
					//corpo.move(0.0f, ds);
					corpo.move(0.0f, vel.y);
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)))
				{
					//ds = -vel.y * dt;
					//corpo.move(0.0f, ds);
					corpo.move(0.0f, -vel.y);
				}
			}
			//this->relogio.restart();
		}

		void Jogador::colisao(Entidade* outraEntidade)
		{
			if (outraEntidade->getID() == 2)
			{
				this->operator-();
				this->corpo.setFillColor(sf::Color::White);
			}

		}
		void Jogador::executar()
		{
		}
	}
}

