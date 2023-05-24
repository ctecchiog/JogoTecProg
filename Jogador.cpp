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

		void Jogador::atualizar(const bool podeAndar, sf::Keyboard::Key tecla)
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
				else if (tecla == sf::Keyboard::Right || tecla == sf::Keyboard::S)
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
			this->relogio.restart();
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

