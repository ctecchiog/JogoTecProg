#include "Asahi.h"

namespace Jogar
{
	namespace Entidades
	{
		Asahi::Asahi(): Jogador(pos, tam)
		{
		}
		Asahi::Asahi(const sf::Vector2f pos, const sf::Vector2f tam): Asahi()
		{
			corpo.setFillColor(sf::Color::Yellow);
			corpo.setPosition(pos);
			corpo.setSize(tam);
			id = 1;
		}
		Asahi::~Asahi()
		{
		}
		void Asahi::colisao(Entidade* outraEntidade)
		{
			if (outraEntidade->getID() == 2)
			{
				this->operator-();
				corpo.setFillColor(sf::Color::White);
			}
		}
		void Asahi::executar()
		{
			atualizaPosicao();
		}
	}
}