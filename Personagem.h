#pragma once
#include "stdafx.h"
#include "Entidade.h"
#include <SFML/Graphics.hpp>
namespace Jogar
{
	namespace Entidades
	{
		class Personagem : public Entidade
		{
		protected:
			sf::Vector2f vel;
			sf::Clock relogio;
			bool podeAndar;
			float dt;
			int num_vidas;
		public:
			Personagem();
			Personagem(const sf::Vector2f pos, const sf::Vector2f tam);
			~Personagem();
			void parar();
			virtual void atualizar() = 0;
			virtual void colisao(Entidade* outraEntidade);
			virtual void executar() = 0;
			int getNumVidas();
			int operator-();
		};
	}
}