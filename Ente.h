#pragma once
#include "stdafx.h"
#include "SFML/Graphics.hpp"

	class Ente
	{
	protected:
		int id;
	public:
		Ente();
		~Ente();
		void desenhar();
		int getID();
		virtual void executar() = 0;
	};
