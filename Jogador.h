#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include "Personagem.h"

namespace Jogar
{
	namespace Entidades 
	{
		class Jogador : public Personagem
		{
		protected:
			//float ds;
		public:
			Jogador();
			Jogador(const sf::Vector2f pos, const sf::Vector2f tam);
			~Jogador();
			virtual void colisao(Entidade* outraEntidade) = 0;
			virtual void executar() = 0;
		};
	}
}