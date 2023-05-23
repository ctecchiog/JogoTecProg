#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Evento.h"
#include "ListaEntidade.h"
#include "SFML/Graphics.hpp"

namespace Jogar {
	namespace Gerenciadores {
		class Gerenciador_Colisoes {
		private:
			Lista::ListaEntidade* listaEntidade;
		public:
			Gerenciador_Colisoes(Lista::ListaEntidade* listaEntidade);
			~Gerenciador_Colisoes();
			const sf::Vector2f calculaColisao(Entidade* ent1, Entidade* ent2);
			void executar();
		};
	}
}