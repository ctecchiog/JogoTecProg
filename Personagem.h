#pragma once
#include "stdafx.h"
#include "SFML\Graphics.hpp"
namespace Entidades {
	class Personagem {
	protected:
		sf::RectangleShape corpo;
		sf::Vector2f vel;
	public:
		Personagem(const sf::Vector2f pos, const sf::Vector2f tam);
		~Personagem();
		const sf::RectangleShape getCorpo();
		virtual void move() = 0;
	};
}
