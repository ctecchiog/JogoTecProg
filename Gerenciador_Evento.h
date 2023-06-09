#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include <SFML/Graphics.hpp>

namespace Jogar {
	namespace Gerenciadores {
		class Gerenciador_Evento {
		private:
			static Gerenciador_Grafico* pGrafico;
			Jogador* pJogador;
			//singleton
			static Gerenciador_Evento* pEvento;
			Gerenciador_Evento();
		public:
			~Gerenciador_Evento();
			static Gerenciador_Evento* getGerEvento();
			void setJogador(Jogador* pJogador);
			void verificaTeclaPressionada(sf::Keyboard::Key tecla);
			void verificaTeclaSolta(sf::Keyboard::Key tecla);
			void executar();
		};
	}
}