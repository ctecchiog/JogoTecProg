#include "Entidade.h"

namespace Jogar
{
	namespace Entidades
	{
		Entidade::Entidade()
		{
		}
		Entidade::Entidade(const sf::Vector2f pos, const sf::Vector2f tam) :
			corpo(sf::RectangleShape(tam)), pos(pos), tam(tam)
		{
			cout << "chamou" << endl;
		}

		Entidade::~Entidade()
		{
		}

		const sf::RectangleShape Entidade::getCorpo()
		{
			return corpo;
		}

		sf::Vector2f Entidade::getPos()
		{
			return pos;
		}

		const sf::Vector2f Entidade::getTam()
		{
			return corpo.getSize();
		}

		void Entidade::colisao(Entidade* outraEntidade)
		{
		}
		void Entidade::executar()
		{
		}
	}
}