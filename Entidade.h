#pragma once
#include "stdafx.h"
#include "Ente.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
		class Entidade: public Ente
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
			void setPos(sf::Vector2f pos);
			void setTam(sf::Vector2f tam);
			sf::Vector2f getPos();
			const sf::Vector2f getTam();
			void desenhar();
			virtual void atualizar() = 0;
			virtual void colisao(Entidade* outraEntidade);
			virtual void executar() = 0;
		};

}