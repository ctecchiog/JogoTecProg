#pragma once
#include "stdafx.h"
#include "Ente.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	namespace Entidades
	{
		class Entidade : public Ente
		{
		protected:
			sf::RectangleShape corpo;
			sf::Vector2f pos;
			sf::Vector2f tam;
		public:
			Entidade();
			Entidade(const sf::Vector2f pos, const sf::Vector2f tam);
			~Entidade();
			const sf::RectangleShape getCorpo();
			sf::Vector2f getPos();
			const sf::Vector2f getTam();
			virtual void colisao(Entidade* outraEntidade);
			virtual void executar() = 0;
		};
	}
}