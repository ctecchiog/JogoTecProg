#pragma once
#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Personagem.h"
namespace Entidades {
	class Jogador: public Personagem {
	private:
		
	public:
		Jogador(const sf::Vector2f pos, const sf::Vector2f tam);
		Jogador();
		~Jogador();
		void move();
	};
}
