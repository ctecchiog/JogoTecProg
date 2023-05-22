#include "Entidade.h"

namespace Jogar {
	Entidade::Entidade()
	{
	}
	Entidade::Entidade(const sf::Vector2f pos, const sf::Vector2f tam) :
		corpo(sf::RectangleShape(tam))
	{
		corpo.setPosition(pos);
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
		return corpo.getPosition();
	}

	const sf::Vector2f Entidade::getTam()
	{
		return corpo.getSize();
	}

	void Entidade::atualizar()
	{
	}
	void Entidade::colisao(Entidade* outraEntidade)
	{
	}
	void Entidade::executar()
	{
	}
}