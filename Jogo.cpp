#include "Jogo.h"
#include <SFML\Graphics.hpp>

namespace Jogar 
{
	Jogo::Jogo() 
		: pEvento(pEvento->getGerEvento()), pGrafico(pGrafico->getGerenciadorGrafico()), pColisoes(new Gerenciadores::Gerenciador_Colisoes(&listaEntidade))
	{
		instanciaEntidades();
		executar();
	}

	Jogo::~Jogo()
	{

	}

	void Jogo::executar()
	{
		while (pGrafico->getWindow()->isOpen())
		{
			pEvento->executar();
			pGrafico->limpaJanela();
			listaEntidade.executar(pGrafico->getWindow());
			pGrafico->mostraElementos();
		}
	}

	void Jogo::instanciaEntidades()
	{
		Jogador* jogador = new Jogador(sf::Vector2f(100.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
		Inimigo* inimigo1 = new Inimigo(sf::Vector2f(100.0f, 100.0f), sf::Vector2f(30.0f, 30.0f), jogador);
		Inimigo* inimigo2 = new Inimigo(sf::Vector2f(100.0f, 400.0f), sf::Vector2f(30.0f, 30.0f), jogador);

		Personagem* p1 = static_cast<Personagem*>(jogador);
		Personagem* p2 = static_cast<Personagem*>(inimigo1);
		Personagem* p3 = static_cast<Personagem*>(inimigo2);

		listaEntidade.addEntidade(p1);
		listaEntidade.addEntidade(p2);
		listaEntidade.addEntidade(p3);

		pEvento->setJogador(jogador);
	}
}