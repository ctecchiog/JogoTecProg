#include "Personagem.h"
#include "SFML\Graphics.hpp"

Entidades::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam) : corpo(sf::RectangleShape(tam))
{
	corpo.setPosition(pos);
	corpo.setFillColor(sf::Color::Green);
	inicializa();
}
Entidades::Personagem::~Personagem()
{

}
const sf::RectangleShape Entidades::Jogador::getCorpo()
{
	return corpo;
}
void Entidades::Personagem::move()
{
}