#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Gerenciador_Grafico.h"
#include "Gerenciador_Evento.h"
#include "Gerenciador_Colisoes.h"
#include "ListaEntidade.h"
#include <SFML\Graphics.hpp>

namespace Jogar
{
	class Jogo
	{
	private:
		Gerenciadores::Gerenciador_Evento* pEvento;
		static Gerenciadores::Gerenciador_Grafico* pGrafico;
		Gerenciadores::Gerenciador_Colisoes* pColisoes;
		Lista::ListaEntidade listaEntidade;
	public:
		Jogo();
		~Jogo();
		void executar();
		void instanciaEntidades();
	};
}