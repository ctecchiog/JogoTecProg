#include "Personagem.h"
#include "SFML\Graphics.hpp"

Entidades::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam) : corpo(sf::RectangleShape(tam)), vel(sf::Vector2f(0.1f, 0.1f))
{
	corpo.setPosition(pos);
}
Entidades::Personagem::~Personagem()
{

}
const sf::RectangleShape Entidades::Personagem::getCorpo()
{
	return corpo;
}
void Entidades::Personagem::move()
{
}