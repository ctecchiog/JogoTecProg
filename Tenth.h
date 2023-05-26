#pragma once
#include "Jogador.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	namespace Entidades
	{
		class Tenth : public Jogador
		{
		private:

		public:
			Tenth();
			Tenth(const sf::Vector2f pos, const sf::Vector2f tam);
			~Tenth();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
	}
}