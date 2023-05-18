#pragma once
#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Personagem.h"
#include "Jogador.h"
namespace Entidades {
	class : public Personagem {
	private:
		Jogador* jogador;
		sf::RectangleShape corpo;
		sf::Vector2f vel;
	public:
		Jogador(const sf::RectangleShape corpo);
		Jogador();
		~Jogador();
		void move();
	};
};