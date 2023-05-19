#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Gerenciador_Grafico"
#include "SFML/Graphics.hpp"

namespace Jogar {
	namespace Gerenciadores {
		class Gerenciador_Evento {
		private:
			Gerenciador_Grafico::Gerenciador_Grafico* pGrafico;
			Entidades::Personagem::Jogador::Jogador* pJogador;
			//singleton
			static Gerenciador_Evento* pEvento;
			Gerenciador_Evento();
		public:
			~Gerenciador_Evento();
			static Gerenciador_Evento* getGerEvento();
			void setJogador(Entidades::Personagem::Jogador::Jogador* pJogador);
			void verificaTeclaPressionada(sf::Keyboard::Key tecla);
			void verificaTeclaSolta(sf::Keyboard::Key tecla);
			void executar();
		};
	}
}