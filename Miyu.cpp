#include "Miyu.h"

namespace Jogar
{
	namespace Entidades
	{
		Miyu::Miyu(): Jogador(pos, tam)
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
			atualizaPosicao();
		}
	}
}