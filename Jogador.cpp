#include "Jogador.h"
#include "SFML\Graphics.hpp"

Entidades::Jogador::Jogador(const sf::RectangleShape corpo): corpo(corpo)
{
	inicializa();
}
Entidades::Jogador::Jogador(): corpo()
{
	inicializa();
}
void Entidades::Jogador::inicializa()
{
	vel = sf::Vector2f(0.1f, 0.1f);
}
Entidades::Jogador::~Jogador()
{ 

}
const sf::RectangleShape Entidades::Jogador::getCorpo()
{
	return corpo;
}
void Entidades::Jogador::move()
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


