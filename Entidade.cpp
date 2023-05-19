#include "Entidade.h"

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

void Jogar::Entidades::Entidade::atualizar()
{
}
