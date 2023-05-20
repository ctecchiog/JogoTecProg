#include "Entidade.h"

Jogar::Entidades::Entidade::Entidade()
{
}

Jogar::Entidades::Entidade::Entidade(const sf::Vector2f pos, const sf::Vector2f tam):
	corpo(sf::RectangleShape(tam))
{
	corpo.setPosition(pos);
}

Jogar::Entidades::Entidade::~Entidade()
{
}

const sf::RectangleShape Jogar::Entidades::Entidade::getCorpo()
{
	return corpo;
}

sf::Vector2f Jogar::Entidades::Entidade::getPos()
{
	return corpo.getPosition();
}

const sf::Vector2f Jogar::Entidades::Entidade::getTam()
{
	return corpo.getSize();
}

void Jogar::Entidades::Entidade::atualizar()
{
}

void Jogar::Entidades::Entidade::colisao()
{
}
