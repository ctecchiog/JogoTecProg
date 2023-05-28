#include "Jogo.h"
#include <SFML\Graphics.hpp>

namespace Jogar 
{
	Jogo::Jogo(): 
		pGrafico(pGrafico->getGerenciadorGrafico()), pColisoes(pColisoes),
		pJogador1(pJogador1), pJogador2(pJogador2), listaEntidade(listaEntidade), pFase(pFase)
	{
		
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
			listaEntidade->executar(pGrafico->getWindow());
			pFase->executar();
			pGrafico->mostraElementos();
		}
	}
}