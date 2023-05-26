#include "Entidade.h"

namespace Jogar
{
	namespace Entidades
	{
		// Doglas acha que a segunda construtora nao ta sendo chamada, ver isso
		Entidade::Entidade(): pos(sf::Vector2f(10.0f, 10.0f)), tam(sf::Vector2f(10.0f, 10.0f)),
			corpo(tam)
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

		void Entidade::colisao(Entidade* outraEntidade)
		{
		}
		void Entidade::executar()
		{
		}
	}
}