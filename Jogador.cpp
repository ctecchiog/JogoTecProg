#include "Jogador.h"
#include "SFML\Graphics.hpp"

Entidades::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f tam):
	Personagem(pos, tam)
{
	corpo.setFillColor(sf::Color::Green);
}

Entidades::Jogador::~Jogador()
{ 

}
void Entidades::Jogador::inicializa()
{

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


