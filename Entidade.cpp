#include "Entidade.h"

namespace Jogar
{
	namespace Entidades
	{
		Entidade::Entidade(): Ente(), 
			pos(sf::Vector2f(10.0f, 10.0f)), tam(sf::Vector2f(10.0f, 10.0f)), 
			corpo(sf::RectangleShape(tam))
		{
		}
		Entidade::Entidade(const sf::Vector2f pos, const sf::Vector2f tam): Entidade()
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
	}
}