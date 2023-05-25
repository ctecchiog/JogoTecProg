#include "Jogador.h"
 
namespace Jogar
{
	namespace Entidades {
		Jogador::Jogador()
		{
		}
		Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam)//: 
			//ds()
		{
			
		}

		Jogador::~Jogador()
		{

		}

		/*void Jogador::atualizar(const bool podeAndar)
		{
			dt = relogio.getElapsedTime().asSeconds();
			if (podeAndar)
			{
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A)))
				{
					ds = vel.x * dt;
					corpo.move(ds, 0.0f);
					corpo.move(vel.x, 0.0f);
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::S)))
				{
					ds = -vel.x * dt;
					corpo.move(ds, 0.0f);
					corpo.move(-vel.x, 0.0f);
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::W)))
				{
					ds = vel.y * dt;
					corpo.move(0.0f, ds);
					corpo.move(0.0f, vel.y);
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)))
				{
					ds = -vel.y * dt;
					corpo.move(0.0f, ds);
					corpo.move(0.0f, -vel.y);
				}
			}
			//this->relogio.restart();
			
		}*/

		void Jogador::colisao(Entidade* outraEntidade)
		{
		}
		void Jogador::executar()
		{
		}
	}
}

