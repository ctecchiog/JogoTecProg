#pragma once
#include "stdafx.h"
#include "Entidade.h"
#include "SFML\Graphics.hpp"
namespace Jogar
{
	namespace Entidades 
	{
		class Personagem: public Entidade
		{
		protected:
			sf::Vector2f vel;
			bool podeAndar;
			bool paraEsquerda;
			sf::Clock relogio;
			float dt;
		public:
			Personagem(const sf::Vector2f pos, const sf::Vector2f tam, const float vel);
			~Personagem();
			void andar(const bool paraEsquerda);
			void parar();
			virtual void atualizar() = 0;
			void atualizarPosicao();
			void move();
		};
	}
}