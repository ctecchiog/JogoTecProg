#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Evento.h"
#include"ListaEntidade.h"
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
			const sf::Vector2f calculaColisao(Entidades::Entidade* ent1, Entidades::Entidade* ent2);
			void executar();
		};
	}
}