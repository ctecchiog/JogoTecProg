#pragma once
#include "stdafx.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Colisoes.h"
#include "Fase.h"
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
		Lista::ListaEntidade* listaEntidade;
		Fases::Fase* pFase;
	public:
		Jogo();
		~Jogo();
		void executar();		
	};
}