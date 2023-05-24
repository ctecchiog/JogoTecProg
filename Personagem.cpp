#include "Personagem.h"

namespace Jogar
{
	namespace Entidades {
		Personagem::Personagem() :
			vel(sf::Vector2f(0.1f, 0.1f)), relogio(), podeAndar(false), dt(0.0f), num_vidas(5)
		{
		}

		Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam)
		{
		}

		Personagem::~Personagem()
		{
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

		int Personagem::getNumVidas()
		{
			return num_vidas;
		}

		int Personagem::operator-()
		{
			return num_vidas--;
		}

	}
}