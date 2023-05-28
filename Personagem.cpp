#include "Personagem.h"

namespace Jogar
{
	namespace Entidades {
		Personagem::Personagem(): Entidade(pos, tam),
			vel(sf::Vector2f(0.1f, 0.1f)), relogio(), dt(0.0f), num_vidas(5)
		{
		}
			
		Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f tam): Personagem()
		{
		}
		
		Personagem::~Personagem()
		{
		}

		void Personagem::parar()
		{
			corpo.move(0.0f, 0.0f);
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