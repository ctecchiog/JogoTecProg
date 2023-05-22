#pragma once
#include "stdafx.h"
#include "Gerenciador_Grafico.h"
#include "SFML/Graphics.hpp"

namespace Jogar
{
	class Ente 
	{
	protected:
		int id;
		static Gerenciadores::Gerenciador_Grafico* pGG;
		//Figura* pFig;
	public:
		Ente();
		~Ente();
		void desenhar();
		virtual void executar() = 0;
	};
}