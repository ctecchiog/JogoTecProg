#include "Jogo.h"
#include <SFML\Graphics.hpp>

Jogar::Jogo::Jogo() : pEvento(pEvento->getGerEvento()), pGrafico(pGrafico->getGerGrafico())
{
	instaciaEntidades();
	executar();
}

Jogar::Jogo::~Jogo()
{

}

void Jogar::Jogo::executar()
{
	while (pGrafico->verificaJanelaAberta())
	{
		pEvento->executar();
		pGrafico->limpaJanela();
		listaEntidade->executar(pGrafico->getWindow());
		pGrafico->mostraElementos();
	}
}

void Jogar::Jogo::instaciaEntidades()
{
	Entidades::Personagem::Jogador::Jogador* jogador = new Entidades::Personagem::Jogador::Jogador(sf::Vector2f(100.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
	Entidades::Personagem::Inimigo::Inimigo* inimigo1 = new Entidades::Personagem::Inimigo::Inimigo(sf::Vector2f(100.0f, 100.0f), sf::Vector2f(30.0f, 30.0f), jogador);
	Entidades::Personagem::Inimigo::Inimigo* inimigo2 = new Entidades::Personagem::Inimigo::Inimigo(sf::Vector2f(100.0f, 500.0f), sf::Vector2f(30.0f, 30.0f), jogador);

	Entidades::Personagem::Personagem* p1 = static_cast<Personagem::Personagem*>(jogador);
	Entidades::Personagem::Personagem* p2 = static_cast<Personagem::Personagem*>(inimigo1);
	Entidades::Personagem::Personagem* p3 = static_cast<Personagem::Personagem*>(inimigo2);

	listaEntidade.addEntidade(p1);
	listaEntidade.addEntidade(p2);
	listaEntidade.addEntidade(p3);

	pEvento->setJogador(jogador);
}
