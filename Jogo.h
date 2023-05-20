#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Gerenciador_Grafico"
#include "Gerenciador_Evento"
#include "ListaEntidade.h"
#include <SFML\Graphics.hpp>

namespace Jogar
{
	class Jogo
	{
	private:
		Gerenciadores::Gerenciador_Evento* pEvento;
		Gerenciadores::Gerenciador_Grafico* pGrafico;
		Lista::ListaEntidade listaEntidade;
	public:
		Jogo();
		~Jogo();
		void executar();
		void instanciaEntidades();
	};
}