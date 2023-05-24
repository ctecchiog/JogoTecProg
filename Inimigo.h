#pragma once
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include "Personagem.h"
#include "Jogador.h"

#define VEL_INIMX 0.025f
#define VEL_INIMY 0.025f

#define RAIO_PERSEGUIRX 200.0f
#define RAIO_PERSEGUIRY 200.0f

namespace Jogar
{
	namespace Entidades 
	{
		class Inimigo : public Personagem
		{
		private:
			Jogador* jogador;
			short moveAleatorio;
			void inicializa();
		public:
			Inimigo(const sf::Vector2f pos, const sf::Vector2f tam, Jogador* jogador);
			~Inimigo();
			void persegueJogador(sf::Vector2f posJogador, sf::Vector2f posInimigo);
			void movimentoAleatorio();
			void atualizar();
			void colisao(Entidade* outraEntidade);
			void executar();
		};
	}
}