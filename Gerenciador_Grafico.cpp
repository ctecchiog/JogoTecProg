#include "Gerenciador_Grafico.h"

namespace Jogar 
{
	namespace Gerenciadores 
	{
		Gerenciador_Grafico* Gerenciador_Grafico::pGrafico = nullptr;

		Gerenciador_Grafico::Gerenciador_Grafico():
		window(new sf::RenderWindow(sf::VideoMode(800, 600), "Jogo"))
		{
			if (window == nullptr)
			{
				cout << "Erro na criação de janela" << endl;
				exit(1);
			}
		}

		Gerenciador_Grafico::~Gerenciador_Grafico()
		{
			if (window)
			{
				delete (window);
				window = nullptr;
			}
		}
		Gerenciador_Grafico* Gerenciador_Grafico::getGerenciadorGrafico() 
		{
			if (pGrafico == nullptr) 
			{
				pGrafico = new Gerenciador_Grafico();
			}
			return pGrafico;
		}

		sf::RenderWindow* Gerenciador_Grafico::getWindow()
		{
			if (window)
				return window;
		}

		void Gerenciador_Grafico::limpaJanela()
		{
			if (window)
				window->clear();
		}

		void Gerenciador_Grafico::desenhaElemento(sf::RectangleShape corpo)
		{
			if (window)
			window->draw(corpo);
		}

		void Gerenciador_Grafico::mostraElementos()
		{
			if (window)
				window->display();
		}

		void Gerenciador_Grafico::fechaJanela()
		{
			if (window)
				window->close();
		}
	}
}
