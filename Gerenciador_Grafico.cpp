#include "Gerenciador_Grafico.h"

Jogar::Gerenciadores::Gerenciador_Grafico::Gerenciador_Grafico():
	window(new sf::RenderWindow(sf::VideoMode(800, 600), "Jogo"))
{
	if (window == nullptr)
	{
		std::cout << "ERRO! NÃO FOI POSSÍVEL CRIAR UMA JANELA" << std::endl;
		exit(1);
	}
}

Jogar::Gerenciadores::Gerenciador_Grafico::~Gerenciador_Grafico()
{
	if (window)
	{
		delete (window);
		window = nullptr;
	}
}

sf::RenderWindow* Jogar::Gerenciadores::Gerenciador_Grafico::getWindow()
{
	return window;
}

void Jogar::Gerenciadores::Gerenciador_Grafico::limpaJanela()
{
	window->clear();
}

void Jogar::Gerenciadores::Gerenciador_Grafico::desenhaElemento(sf::RectangleShape corpo)
{
	window->draw(corpo);
}

void Jogar::Gerenciadores::Gerenciador_Grafico::mostraElementos()
{
	window->display();
}

void Jogar::Gerenciadores::Gerenciador_Grafico::fechaJanela()
{
	window->close();
}


