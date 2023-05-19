#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include <SFML\Graphics.hpp>

namespace Jogar{
	class Jogo {
	private:
		sf::RenderWindow window;
		std::vector <Entidades::Personagem::Personagem*> personagens;
	public:
		Jogo();
		~Jogo();
		void executar();
	};
}