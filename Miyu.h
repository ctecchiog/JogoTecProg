#pragma once
#include "Jogador.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	namespace Entidades
	{
		class Miyu : public Jogador
		{ // ela/dela
		private:

		public:
			Miyu();
			Miyu(const sf::Vector2f pos, const sf::Vector2f tam);
			~Miyu();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
	}
}