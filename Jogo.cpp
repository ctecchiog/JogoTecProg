#include "Jogo.h"
#include <SFML\Graphics.hpp>

Jogar::Jogo::Jogo() : window(sf::VideoMode(800, 600), "Jogo"), jogador(sf::Vector2f(100.0, 200.0), sf::Vector2f(50.0, 50.0))
{
	executar();
}

Jogar::Jogo::~Jogo()
{

}

void Jogar::Jogo::executar()
{
	while (window.isOpen())
	{
		sf::Event event;
		if (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		window.clear();
		jogador.move();
		window.draw(jogador.getCorpo());
		window.display();
	}
}