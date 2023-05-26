#pragma once
#include "stdafx.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	class Jogo
	{
	private:
		Entidades::Jogador* pJogador1;
		Entidades::Jogador* pJogador2;
		Gerenciadores::Gerenciador_Grafico* pGrafico;
		Gerenciadores::Gerenciador_Colisoes* pColisoes;
		Lista::ListaEntidade listaEntidade;
	public:
		Jogo();
		~Jogo();
		void executar();
		void setJogador(Entidades::Jogador* pJogador);
		void instanciaEntidades();
		//void verificaTeclaPressionada(sf::Keyboard::Key tecla);
		//void verificaTeclaSolta(sf::Keyboard::Key tecla);
	};
}