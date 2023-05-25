#pragma once
#include "stdafx.h"
//#include "Gerenciador_Evento.h"
#include "ListaEntidade.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Obstaculo.h"
#include <SFML/Graphics.hpp>

namespace Jogar 
{
	namespace Gerenciadores 
	{
		class Gerenciador_Colisoes 
		{
		private:
			Lista::ListaEntidade* listaEntidade;
		public:
			Gerenciador_Colisoes(Lista::ListaEntidade* listaEntidade);
			~Gerenciador_Colisoes();
			const sf::Vector2f calculaColisao(Entidades::Entidade* ent1, Entidades::Entidade* ent2);
			void executar();
		};
	}
}