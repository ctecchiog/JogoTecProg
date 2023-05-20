#pragma once
#include "stdafx.h"
#include "Ente.h"
#include "SFML\Graphics.hpp"

namespace Jogar
{
	namespace Entidades
	{
		class Entidade: public Ente
		{
		protected:
			sf::RectangleShape corpo;
		public:
			Entidade();
			Entidade(const sf::Vector2f pos, const sf::Vector2f tam);
			~Entidade();
			const sf::RectangleShape getCorpo();
			sf::Vector2f getPos();
			const sf::Vector2f getTam();
			virtual void atualizar() = 0;
			virtual void colisao() = 0;
		};
	}
}