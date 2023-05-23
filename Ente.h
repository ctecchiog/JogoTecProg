#pragma once
#include "stdafx.h"
//#include "Gerenciador_Grafico.h"
#include "SFML/Graphics.hpp"

	class Ente
	{
	protected:
		int id;
		//static Jogar::Gerenciadores::Gerenciador_Grafico* pGrafico;
	public:
		Ente();
		~Ente();
		void desenhar();
		int getID();
		virtual void executar() = 0;
	};
