#include "Personagem.h"
#include "SFML\Graphics.hpp"

namespace Jogar
{
	namespace Entidades 
	{
		Personagem::Personagem()
		{
		}
		Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam, const float vel) :
			vel(sf::Vector2f(0.1f, 0.1f))
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
		void Personagem::atualizarPosicao()
		{
			dt = relogio.getElapsedTime().asSeconds();
			float ds = vel.x * dt;
			if (paraEsquerda)
				ds *= -1;
			corpo.move(ds, 0.0f);
		}
		void Personagem::move()
		{

		}
	}
}