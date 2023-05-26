#pragma once
#include "stdafx.h"
#include "Gerenciador_Grafico.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	class Ente
	{
	protected:
		int id;
		static Gerenciadores::Gerenciador_Grafico* pGrafico;
	public:
		Ente();
		~Ente();
		//virtual void desenhar();
		int getID();
		virtual void executar() = 0;
	};
}