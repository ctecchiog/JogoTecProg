#pragma once
#include "Jogador.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	namespace Entidades
	{
		class Asahi : public Jogador
		{
		private:

		public:
			Asahi();
			Asahi(const sf::Vector2f pos, const sf::Vector2f tam);
			~Asahi();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
	}
}