#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Evento.h"
#include "SFML/Graphics.hpp"

namespace Jogar {
	namespace Gerenciadores {
		class Gerenciador_Colisoes {
		private:
			Lista::ListaEntidade* listaPersonagem;
			Lista::ListaEntidade* listaObstaculo;
		public:
			Gerenciador_Colisoes(Lista::ListaEntidade* listaPersonagem, Lista::ListaEntidade* listaObstaculo);
			~Gerenciador_Colisoes();
			const sf::Vector2f calculaColisao(Entidade::Entidade* ent1, Entidade::Entidade* ent2);
			void executar();
		};
	}
}