#pragma once
#include "stdafx.h"
#include "Entidade.h"
#include <SFML/Graphics.hpp>
namespace Jogar
{
	namespace Entidades 
	{
		class Obstaculo : public Entidade
		{
		private:

		public:
			Obstaculo();
			Obstaculo(const sf::Vector2f pos, const sf::Vector2f tam);
			~Obstaculo();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
	}
}