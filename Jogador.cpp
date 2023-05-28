#include "Jogador.h"
 
namespace Jogar
{
	namespace Entidades {
		Jogador::Jogador(): Personagem(pos, tam), ds()
		{
		}
		Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam): Jogador()
		{
			
		}

		Jogador::~Jogador()
		{

		}

		void Jogador::atualizaPosicao()
		{
			dt = relogio.getElapsedTime().asSeconds();
			//vai resetar o relógio no caso de jogo pausado;
			if (dt > 0.3) 
			{
				dt = 0.0f;
			}
			relogio.restart();
			sf::Vector2f ds(0.0f, 0.0f);

			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::A)) || 
				(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)))
			{
				ds.x = vel.x * dt;
				corpo.move(ds.x, 0.0f);
			}
			else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::S)) ||
				(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)))
			{
				ds.x = vel.x * dt;
				corpo.move(ds.x, 0.0f);
			}
			else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::W)) ||
				(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)))
			{
				ds.y = vel.y * dt;
				corpo.move(0.0f, ds.y);
			}
			else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) ||
				(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)))
			{
				ds.y = -vel.y * dt;
				corpo.move(0.0f, ds.y);
			}

			//atualiza posição
			corpo.setPosition(sf::Vector2f(pos.x + ds.x, pos.y + ds.y));

			//desenha na janela
			pGrafico->desenhaElemento(corpo);
		}

		void Jogador::colisao(Entidade* outraEntidade)
		{
		}
		void Jogador::executar()
		{
		}
	}
}

