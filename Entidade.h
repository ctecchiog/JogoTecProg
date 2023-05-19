#pragma once
#include "stdafx.h"
#include "SFML\Graphics.hpp"

namespace Jogar
{
	namespace Entidades
	{
		class Entidade
		{
		protected:
			sf::RectangleShape corpo;
		public:
			Entidade(const sf::Vector2f pos, const sf::Vector2f tam);
			~Entidade();
			const sf::RectangleShape getCorpo();
			virtual void atualizar() = 0;
		};
	}
}