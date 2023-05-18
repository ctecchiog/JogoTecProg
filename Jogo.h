#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include <SFML\Graphics.hpp>
using namespace Entidades;
namespace Jogar{
	class Jogo {
	private:
		sf::RenderWindow window;
		Entidades::Jogador jogador;
	public:
		Jogo();
		~Jogo();
		void executar();
	};
}