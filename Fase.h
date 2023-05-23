#pragma once
#include "stdafx.h"
#include "Ente.h"
#include "Gerenciador_Colisoes.h"
#include <SFML\Graphics.hpp>

namespace Jogar
{
	class Fase : public Ente
	{
	protected:
		Lista::ListaEntidade listaEntidade;
		Gerenciadores::Gerenciador_Colisoes* pColisao;
		void atualizarEntidades();
	public:
		Fase();
		~Fase();
		void executar();
		void desenhar();
	};
}