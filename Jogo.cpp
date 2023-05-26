#include "Jogo.h"
#include <SFML\Graphics.hpp>

namespace Jogar 
{
	Jogo::Jogo() 
		: pGrafico(pGrafico->getGerenciadorGrafico()), pColisoes(new Gerenciadores::Gerenciador_Colisoes(&listaEntidade)),
		pJogador1(pJogador1), pJogador2(pJogador2)
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
			sf::Event evento;
			while (pGrafico->getWindow()->pollEvent(evento))
			{
				if (evento.type == sf::Event::KeyPressed)
					//verificaTeclaPressionada(evento.key.code);
				{
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
					{
						pJogador1->executar();
					}
					else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z))
					{
						pJogador2->executar();
					}
					else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
						pGrafico->fechaJanela();
				}
				else if (evento.type == sf::Event::KeyReleased)
					//verificaTeclaSolta(evento.key.code);
				{
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || 
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || 
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
					{
						pJogador1->parar();
					}
					else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) ||
						sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z))
					{
						pJogador2->parar();
					}
				}
				else if (evento.type == sf::Event::Closed)
					pGrafico->fechaJanela();
			}
			pGrafico->limpaJanela();
			listaEntidade.executar(pGrafico->getWindow());
			pGrafico->mostraElementos();
		}
	}

	void Jogo::setJogador(Entidades::Jogador* pJogador)
	{
		this->pJogador1 = pJogador;
		if (pJogador1 != pJogador2)
			this->pJogador2 = pJogador;
	}

	void Jogo::instanciaEntidades()
	{
		Entidades::Miyu* miyu = new Entidades::Miyu(sf::Vector2f(200.0f, 200.0f), sf::Vector2f(50.0f, 50.0f));
		Entidades::Asahi* asahi = new Entidades::Asahi(sf::Vector2f(450.0f, 450.0f), sf::Vector2f(50.0f, 50.0f));
		Entidades::Inimigo* inimigo1 = new Entidades::Inimigo(sf::Vector2f(600.0f, 100.0f), sf::Vector2f(30.0f, 30.0f), pJogador1, pJogador2);
		Entidades::Inimigo* inimigo2 = new Entidades::Inimigo(sf::Vector2f(200.0f, 400.0f), sf::Vector2f(30.0f, 30.0f), pJogador1, pJogador2);
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
		if (pJogador1 != pJogador2)
			setJogador(asahi);
	}
	/*void Jogo::verificaTeclaPressionada(sf::Keyboard::Key tecla)
	{
		if (tecla == sf::Keyboard::Left || tecla == sf::Keyboard::Right ||
			tecla == sf::Keyboard::Up ||tecla == sf::Keyboard::Down)
		{
			pJogador1->executar();
		}
		else if (tecla == sf::Keyboard::A ||	tecla == sf::Keyboard::S || tecla == sf::Keyboard::W ||
				tecla == sf::Keyboard::Up || tecla == sf::Keyboard::Z)
			{
				pJogador2->executar();
			}
		else if (tecla == sf::Keyboard::Escape)
			pGrafico->fechaJanela();
	}

	void Jogo::verificaTeclaSolta(sf::Keyboard::Key tecla)
	{
		if (tecla == sf::Keyboard::Left || tecla == sf::Keyboard::Right ||
			tecla == sf::Keyboard::Up || tecla == sf::Keyboard::Down)
		{
			pJogador1->parar();
		}
		else if (tecla == sf::Keyboard::A || tecla == sf::Keyboard::S || tecla == sf::Keyboard::W ||
			tecla == sf::Keyboard::Up || tecla == sf::Keyboard::Z)
		{
			pJogador2->parar();
		}
	}*/
}