#include "Entidade.h"

namespace Jogar {
	Entidade::Entidade()
	{
	}
	Entidade::Entidade(const sf::Vector2f pos, const sf::Vector2f tam) :
		corpo(sf::RectangleShape(tam)), pos(pos), tam(tam)
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

	void Entidade::setPos(sf::Vector2f pos)
	{
		corpo.setPosition(pos);
		this->pos = pos;
	}

	sf::Vector2f Entidade::getPos()
	{
		return pos;
	}

	const sf::Vector2f Entidade::getTam()
	{
		return corpo.getSize();
	}

	void Entidade::desenhar()
	{
		pGrafico->desenhaElemento(corpo);
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