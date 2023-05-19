#include "Jogo.h"
#include <SFML\Graphics.hpp>

Jogar::Jogo::Jogo() : window(sf::VideoMode(800, 600), "Jogo"), personagens()
{
	Personagem::Jogador::Jogador* jogador = new Personagem::Jogador::Jogador(sf::Vector2f(100.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
	Personagem::Inimigo::Inimigo* inimigo = new Personagem::Inimigo::Inimigo(sf::Vector2f(100.0f, 200.0f), sf::Vector2f(50.0f, 50.0f), jogador);

	Personagem::Personagem* p1 = static_cast<Personagem::Personagem*>(jogador);
	Personagem::Personagem* p2 = static_cast<Personagem::Personagem*>(inimigo);

	personagens.push_back(p1);
	personagens.push_back(p2);

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
		for (i = 0; i < personagens.size(); i++)
		{
			personagens.at(i)->move();
			window.draw(personagens.at(i)->getCorpo());
		}
		window.display();
	}
}