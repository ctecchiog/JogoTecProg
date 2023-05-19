#include "Inimigo.h"
#include "SFML\Graphics.hpp"

Entidades::Inimigo::Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador::Jogador* jogador): 
	Personagem(pos, tam), relogio(), jogador(jogador)
{
	corpo.setFillColor(sf::Color::Red);
	inicializa();
	srand(time(NULL));
	moveAleatorio = rand()%4;
}
Entidades::Inimigo::Inimigo::~Inimigo()
{

}
void Entidades::Inimigo::Inimigo::inicializa()
{
	vel = sf::Vector2f(VEL_INIMX, VEL_INIMY);
}
void Entidades::Inimigo::persegueJogador(sf::Vector2f posJogador, sf::Vector2f posInimigo)
{
	if (posJogador.x - posInimigo.x > 0.0f)
		corpo.move(vel.x, 0.0f);
	else
		corpo.move(-vel.x, 0.0f);

	if (posJogador.y - posInimigo.y > 0.0f)
		corpo.move(0.0f, vel.y);
	else
		corpo.move(0.0f, -vel.y);

	float dt = relogio.getElapsedTime().asSeconds();
	if (dt >= 1.0f)
	{
		moveAleatorio = rand() % 4;
		relogio.restart();
	}
}
void Entidades::Inimigo::movimentoAleatorio()
{
	if (moveAleatorio == 0)
		corpo.move(vel.x, 0.0f);
	else if (moveAleatorio == 1)
		corpo.move(-vel.x, 0.0f);
	else if (moveAleatorio == 2)
		corpo.move(0.0f, vel.y);
	else 
		corpo.move(0.0f, -vel.y);
}
void Entidades::Inimigo::Inimigo::move()
{
	sf::Vector2f posJogador = jogador->getCorpo().getPosition();
	sf::Vector2f posInimigo = corpo.getPosition();

	if (fabs(posJogador.x - posInimigo.x) <= RAIO_PERSEGUIRX && fabs(posJogador.y - posInimigo.y) <= RAIO_PERSEGUIRY)
		persegueJogador(posJogador, posInimigo);
	else
		movimentoAleatorio();
}


