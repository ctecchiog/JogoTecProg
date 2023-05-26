#include "Inimigo.h"

namespace Jogar
{
	namespace Entidades {
		Inimigo::Inimigo():
			jogador1(jogador1), jogador2(jogador2), moveAleatorio()
		{
		}
		Inimigo::Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* jogador1, Jogador* jogador2): Inimigo()
		{
			this->corpo.setPosition(pos);
			this->corpo.setSize(tam);
			vel = sf::Vector2f(VEL_INIMX, VEL_INIMY);
			this->corpo.setFillColor(sf::Color::Red);
			this->id = 2;
			srand(time(NULL));
			moveAleatorio = rand() % 4;
		}

		Inimigo::~Inimigo()
		{

		}

		void Inimigo::persegueJogador(sf::Vector2f posJogador, sf::Vector2f posInimigo)
		{
			if (posJogador.x - posInimigo.x > 0.0f)
				this->corpo.move(vel.x, 0.0f);
			else
				this->corpo.move(-vel.x, 0.0f);

			if (posJogador.y - posInimigo.y > 0.0f)
				this->corpo.move(0.0f, vel.y);
			else
				this->corpo.move(0.0f, -vel.y);

			float dt = relogio.getElapsedTime().asSeconds();
			if (dt >= 1.0f)
			{
				moveAleatorio = rand() % 4;
				this->relogio.restart();
			}
		}

		void Inimigo::movimentoAleatorio()
		{
			if (moveAleatorio == 0)
				this->corpo.move(vel.x, 0.0f);
			else if (moveAleatorio == 1)
				this->corpo.move(-vel.x, 0.0f);
			else if (moveAleatorio == 2)
				this->corpo.move(0.0f, vel.y);
			else
				this->corpo.move(0.0f, -vel.y);
		}

		void Inimigo::colisao(Entidade* outraEntidade)
		{
			if (outraEntidade->getID() == 1)
				this->operator-();
			this->corpo.setFillColor(sf::Color::Blue);
		}

		void Inimigo::executar()
		{
			sf::Vector2f posJogador = *jogador1->getPos();
			sf::Vector2f posInimigo = this->pos;

			if (fabs(posJogador.x - posInimigo.x) <= RAIO_PERSEGUIRX && fabs(posJogador.y - posInimigo.y) <= RAIO_PERSEGUIRY)
				persegueJogador(posJogador, posInimigo);
			else
				movimentoAleatorio();

			if (jogador1 != jogador2)
			{
				sf::Vector2f posJogador2 = *jogador2->getPos();
				sf::Vector2f posInimigo = this->pos;
				
				if (fabs(posJogador2.x - posInimigo.x) <= RAIO_PERSEGUIRX && fabs(posJogador2.y - posInimigo.y) <= RAIO_PERSEGUIRY)
					persegueJogador(posJogador2, posInimigo);
				else
					movimentoAleatorio();
			}
		}
	}
}

