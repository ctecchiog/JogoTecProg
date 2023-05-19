#include "Gerenciador_Grafico.h"

Jogar::Gerenciadores::Gerenciador_Grafico* Jogar::Gerenciadores::Gerenciador_Grafico::pGrafico = NULL;

Jogar::Gerenciadores::Gerenciador_Grafico::Gerenciador_Grafico():
	window(new sf::RenderWindow(sf::VideoMode(800.0f, 600.0f), "Jogo"))
{
	if (window == NULL)
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
		window = NULL;
	}
}

Jogar::Gerenciadores::Gerenciador_Grafico* Jogar::Gerenciadores::Gerenciador_Grafico::getGerGrafico()
{
	return pGrafico;
}

sf::RenderWindow* Jogar::Gerenciadores::Gerenciador_Grafico::getWindow()
{
	return window;
}

void Jogar::Gerenciadores::Gerenciador_Grafico::limpa_janela()
{
}

void Jogar::Gerenciadores::Gerenciador_Grafico::desenhaElemento(sf::RectangleShape corpo)
{
}

void Jogar::Gerenciadores::Gerenciador_Grafico::mostraElementos()
{
}

void Jogar::Gerenciadores::Gerenciador_Grafico::fechaJanela()
{
}

void Jogar::Gerenciadores::Gerenciador_Grafico::verificaJanelaAberta()
{
}
