#pragma once
#include "stdafx.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	class Jogo
	{
	private:
		Gerenciadores::Gerenciador_Evento* pEvento;
		Gerenciadores::Gerenciador_Grafico* pGrafico;
		Gerenciadores::Gerenciador_Colisoes* pColisoes;
		Lista::ListaEntidade listaEntidade;
	public:
		Jogo();
		~Jogo();
		void executar();
		void instanciaEntidades();
	};
}