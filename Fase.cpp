#include "Fase.h"

namespace Jogar
{
	namespace Fases
	{
		void Fase::atualizarEntidades()
		{
			Entidades::Miyu* miyu = new Entidades::Miyu(sf::Vector2f(200.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
			Entidades::Asahi* asahi = new Entidades::Asahi(sf::Vector2f(450.0f, 450.0f), sf::Vector2f(50.0f, 50.0f));
			Entidades::Inimigo* inimigo1 = new Entidades::Inimigo(sf::Vector2f(600.0f, 100.0f), sf::Vector2f(30.0f, 30.0f), jogador1, jogador2);
			Entidades::Inimigo* inimigo2 = new Entidades::Inimigo(sf::Vector2f(200.0f, 400.0f), sf::Vector2f(30.0f, 30.0f), jogador1, jogador2);
			Entidades::Obstaculo* obstaculo1 = new Entidades::Obstaculo(sf::Vector2f(200.0f, 300.0f), sf::Vector2f(20.0f, 20.0f));
			Entidades::Obstaculo* obstaculo2 = new Entidades::Obstaculo(sf::Vector2f(550.0f, 550.0f), sf::Vector2f(20.0f, 20.0f));
			Entidades::Obstaculo* obstaculo3 = new Entidades::Obstaculo(sf::Vector2f(50.0f, 50.0f), sf::Vector2f(20.0f, 20.0f));

			Entidades::Entidade* p1 = static_cast<Entidades::Entidade*>(miyu);
			Entidades::Entidade* p2 = static_cast<Entidades::Entidade*>(asahi);
			Entidades::Entidade* p3 = static_cast<Entidades::Entidade*>(inimigo1);
			Entidades::Entidade* p4 = static_cast<Entidades::Entidade*>(inimigo2);
			Entidades::Entidade* p5 = static_cast<Entidades::Entidade*>(obstaculo1);
			Entidades::Entidade* p6 = static_cast<Entidades::Entidade*>(obstaculo2);
			Entidades::Entidade* p7 = static_cast<Entidades::Entidade*>(obstaculo3);

			listaEntidade.addEntidade(p1);
			listaEntidade.addEntidade(p2);
			listaEntidade.addEntidade(p3);
			listaEntidade.addEntidade(p4);
			listaEntidade.addEntidade(p5);
			listaEntidade.addEntidade(p6);
			listaEntidade.addEntidade(p7);
			
			setJogador(miyu);
			if (jogador1 != jogador2)
				setJogador(asahi);
			executar();
		}

		Fase::Fase() : listaEntidade(listaEntidade), 
			jogador1(jogador1), jogador2(jogador2),
			pColisoes(new Gerenciadores::Gerenciador_Colisoes(&listaEntidade))
		{
			if (pColisoes == nullptr)
			{
				cout << "Erro na criação de Gerenciador de Colisão" << endl;
				exit(1);
			}

			atualizarEntidades();
		}

		Fase::~Fase()
		{
			if (pColisoes) {
				delete(pColisoes);
				pColisoes = nullptr;
			}
			listaEntidade.limparLista();
		}

		void Fase::setJogador(Entidades::Jogador* pJogador)
		{
			jogador1 = pJogador;
			if (jogador1 != jogador2)
				jogador2 = pJogador;
		}

		void Fase::desenhar()
		{
		}

		void Fase::executar()
		{
			listaEntidade.executar(pGrafico->getWindow());
		}
	}
}