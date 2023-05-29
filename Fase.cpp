#include "Fase.h"

namespace Jogar
{
	namespace Fases
	{
		Fase::Fase()
		{
			atualizarEntidades();
			pColisoes = new Gerenciadores::Gerenciador_Colisoes(&listaEntidade);
		}

		void Fase::atualizarEntidades()
		{
			//Entidades::Miyu* miyu = new Entidades::Miyu(sf::Vector2f(200.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
			//Entidades::Asahi* asahi = new Entidades::Asahi(sf::Vector2f(450.0f, 450.0f), sf::Vector2f(50.0f, 50.0f));
			Entidades::Inimigo* inimigo1 = new Entidades::Inimigo(sf::Vector2f(600.0f, 100.0f), sf::Vector2f(30.0f, 30.0f));
			Entidades::Inimigo* inimigo2 = new Entidades::Inimigo(sf::Vector2f(200.0f, 400.0f), sf::Vector2f(30.0f, 30.0f));
			Entidades::Obstaculo* obstaculo1 = new Entidades::Obstaculo(sf::Vector2f(200.0f, 300.0f), sf::Vector2f(20.0f, 20.0f));
			Entidades::Obstaculo* obstaculo2 = new Entidades::Obstaculo(sf::Vector2f(550.0f, 550.0f), sf::Vector2f(20.0f, 20.0f));
			Entidades::Obstaculo* obstaculo3 = new Entidades::Obstaculo(sf::Vector2f(50.0f, 50.0f), sf::Vector2f(20.0f, 20.0f));

			//Entidades::Entidade* p1 = static_cast<Entidades::Entidade*>(miyu);
			//Entidades::Entidade* p2 = static_cast<Entidades::Entidade*>(asahi);
			Entidades::Entidade* p3 = static_cast<Entidades::Entidade*>(inimigo1);
			Entidades::Entidade* p4 = static_cast<Entidades::Entidade*>(inimigo2);
			Entidades::Entidade* p5 = static_cast<Entidades::Entidade*>(obstaculo1);
			Entidades::Entidade* p6 = static_cast<Entidades::Entidade*>(obstaculo2);
			Entidades::Entidade* p7 = static_cast<Entidades::Entidade*>(obstaculo3);

			//listaEntidade.addEntidade(p1);
			//listaEntidade.addEntidade(p2);
			listaEntidade.addEntidade(p3);
			listaEntidade.addEntidade(p4);
			listaEntidade.addEntidade(p5);
			listaEntidade.addEntidade(p6);
			listaEntidade.addEntidade(p7);
			
			//executar();
		}

		

		Fase::~Fase()
		{
			if (pColisoes) {
				delete(pColisoes);
				pColisoes = nullptr;
			}
			listaEntidade.limparLista();
		}

		void Fase::addJogLista(Entidades::Jogador* p1, Entidades::Jogador* p2)
		{
			if (p1 != nullptr && p2 != nullptr)
			{
				listaEntidade.addEntidade(p1);
				listaEntidade.addEntidade(p2);
			}
			else
			{
				std::cout << "erro" << std::endl;
			}

		}

		void Fase::setJogador(Entidades::Jogador* pJogador)
		{
			
		}

		void Fase::executar()
		{
			//atualizarEntidades();
			listaEntidade.executar(pGrafico->getWindow());
		}
	}
}