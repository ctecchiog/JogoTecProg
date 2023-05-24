#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include "Personagem.h"

namespace Jogar 
{
		class Jogador: public Personagem 
		{
		private:
			void inicializa();
		public:
			Jogador(const sf::Vector2f pos, const sf::Vector2f tam);
			~Jogador();
			void move();
			void atualizar();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
}