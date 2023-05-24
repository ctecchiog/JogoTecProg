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
		Entidades::Jogador* jogador = new Entidades::Jogador(sf::Vector2f(200.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
		Entidades::Inimigo* inimigo1 = new Entidades::Inimigo(sf::Vector2f(600.0f, 100.0f), sf::Vector2f(30.0f, 30.0f), jogador);
		Entidades::Inimigo* inimigo2 = new Entidades::Inimigo(sf::Vector2f(200.0f, 400.0f), sf::Vector2f(30.0f, 30.0f), jogador);
		Entidades::Obstaculo* obstaculo1 = new Entidades::Obstaculo(sf::Vector2f(200.0f, 300.0f), sf::Vector2f(20.0f, 20.0f));
		Entidades::Obstaculo* obstaculo2 = new Entidades::Obstaculo(sf::Vector2f(550.0f, 550.0f), sf::Vector2f(20.0f, 20.0f));
		Entidades::Obstaculo* obstaculo3 = new Entidades::Obstaculo(sf::Vector2f(50.0f, 50.0f), sf::Vector2f(20.0f, 20.0f));

		Entidades::Entidade* p1 = static_cast<Entidades::Entidade*>(jogador);
		Entidades::Entidade* p2 = static_cast<Entidades::Entidade*>(inimigo1);
		Entidades::Entidade* p3 = static_cast<Entidades::Entidade*>(inimigo2);
		Entidades::Entidade* p4 = static_cast<Entidades::Entidade*>(obstaculo1);
		Entidades::Entidade* p5 = static_cast<Entidades::Entidade*>(obstaculo2);
		Entidades::Entidade* p6 = static_cast<Entidades::Entidade*>(obstaculo3);

		listaEntidade.addEntidade(p1);
		listaEntidade.addEntidade(p2);
		listaEntidade.addEntidade(p3);
		listaEntidade.addEntidade(p4);
		listaEntidade.addEntidade(p5);
		listaEntidade.addEntidade(p6);
		pEvento->setJogador(jogador);
	}
}