#include "Personagem.h"

namespace Jogar
{
		Personagem::Personagem() :
			vel(sf::Vector2f(0.1f, 0.1f)), podeAndar(false), relogio(), dt(0.0f), num_vidas(10)
		{
		}
		
		Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam)
		{
		}
		
		Personagem::~Personagem()
		{
		}

		void Personagem::parar()
		{
			podeAndar = false;
		}
		
		void Personagem::atualizar()
		{
		}
		
		void Personagem::colisao(Entidade* outraEntidade)
		{
		}
		
		void Personagem::executar()
		{
		}
		
		void Personagem::atualizarPosicao(const bool podeAndar, sf::Keyboard::Key tecla)
		{
			dt = relogio.getElapsedTime().asSeconds();
			float ds;
			if (podeAndar)
			{
				if (tecla == sf::Keyboard::A || tecla == sf::Keyboard::Left)
				{
					ds = vel.x * dt;
					corpo.move(ds, 0.0f);
				}
				else if ( tecla == sf::Keyboard::Right || tecla == sf::Keyboard::S)
				{
					ds = -vel.x * dt;
					corpo.move(ds, 0.0f);
				}
				else if (tecla == sf::Keyboard::Up || tecla == sf::Keyboard::W)
				{
					ds = vel.y * dt;
					corpo.move(0.0f, ds);
				}
				else if (tecla == sf::Keyboard::Down || tecla == sf::Keyboard::Z)
				{
					ds = -vel.y * dt;
					corpo.move(0.0f, ds);
				}
			}
		}

		int Personagem::getNumVidas()
		{
			return num_vidas;
		}
		
		int Personagem::operator-()
		{
			return num_vidas--;
		}
}