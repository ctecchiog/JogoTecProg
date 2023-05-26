#pragma once
#include "Jogador.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	namespace Entidades
	{
		class Eleventh : public Jogador
		{
		private:

		public:
			Eleventh();
			Eleventh(const sf::Vector2f pos, const sf::Vector2f tam);
			~Eleventh();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
	}
}