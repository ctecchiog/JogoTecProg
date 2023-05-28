#pragma once
#include "Fase.h"
#include <SFML/Graphics.hpp>

namespace Jogar {
	namespace Fases
	{
		class TheCalling : public Fase
		{
		private:

		public:
			TheCalling();
			~TheCalling();
			void criarFundo();
			void desenhar();
		};
	}

}