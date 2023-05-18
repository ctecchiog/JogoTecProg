#include "Inimigo.h"
#include "SFML\Graphics.hpp"

Entidades::Personagem::Inimigo::Inimigo(const sf::RectangleShape corpo) : corpo(corpo)
{
	inicializa();
}
Entidades::Personagem::Inimigo::Inimigo() : corpo()
{
	inicializa();
}
void Entidades::Personagem::Inimigo::inicializa()
{
	vel = sf::Vector2f(0.1f, 0.1f);
}
Entidades::Personagem::Inimigo::~Inimigo()
{

}
void Entidades::Personagem::Inimigo::move()
{
	if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::A)))
	{
		corpo.move(-vel.x, 0.0);
	}
	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::S)))
	{
		corpo.move(vel.x, 0.0);
	}
	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::W)))
	{
		corpo.move(0.0, -vel.y);
	}
	else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)))
	{
		corpo.move(0.0, vel.y);
	}
}


