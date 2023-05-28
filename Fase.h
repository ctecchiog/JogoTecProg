#pragma once
#include "stdafx.h"
#include "Ente.h"
#include "Gerenciador_Colisoes.h"
#include <SFML/Graphics.hpp>


namespace Jogar
{
	namespace Fases
	{
		class Fase : public Ente
		{
		protected:
			Lista::ListaEntidade listaEntidade;
			Gerenciadores::Gerenciador_Colisoes* pColisoes;
			Entidades::Jogador* jogador1;
			Entidades::Jogador* jogador2;
			void atualizarEntidades();
		public:
			Fase();
			~Fase();
			void setJogador(Entidades::Jogador* pJogador);
			virtual void criarFundo() = 0;
			virtual void desenhar() = 0;
			void executar();
		};
	}
}