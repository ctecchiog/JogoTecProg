#include "Personagem.h"
#include "SFML\Graphics.hpp"

namespace Jogar
{
		Personagem::Personagem() :
			vel(sf::Vector2f(0.1f, 0.1f)), podeAndar(false), paraEsquerda(false), relogio(), dt(0.0f), num_vidas(10)
		{
		}
		
		Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam)
		{
		}
		
		Personagem::~Personagem()
		{
		}

		void Personagem::andar(const bool paraEsquerda)
		{
			podeAndar = true;
			this->paraEsquerda = paraEsquerda;
		}
		
		void Personagem::parar()
		{
			podeAndar = false;
		}
		
		void Personagem::atualizar()
		{
		}
		
		void Personagem::colisao(Entidade* outraEntidade)
		{
		}
		
		void Personagem::executar()
		{
		}
		
		void Personagem::atualizarPosicao()
		{
			dt = relogio.getElapsedTime().asSeconds();
			float ds = vel.x * dt;
			if (paraEsquerda)
				ds *= -1;
			corpo.move(ds, 0.0f);
		}

		int Personagem::getNumVidas()
		{
			return num_vidas;
		}
		
		int Personagem::operator-()
		{
			return num_vidas--;
		}
}