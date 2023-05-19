#pragma once
#include "stdafx.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "SFML/Graphics.hpp"

namespace Jogar 
{
	namespace Gerenciadores 
	{
		class Gerenciador_Grafico
		{
		private:
			sf::RenderWindow* window;
			static Gerenciador_Grafico* pGrafico;
			Gerenciador_Grafico(); ///singleton
		public:
			~Gerenciador_Grafico();
			static Gerenciador_Grafico* getGerGrafico();
			sf::RenderWindow* getWindow();
			void limpa_janela();
			void desenhaElemento(sf::RectangleShape corpo);
			void mostraElementos();
			void fechaJanela();
			void verificaJanelaAberta();
		};
	}
}