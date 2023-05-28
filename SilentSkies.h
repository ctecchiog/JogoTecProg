#pragma once
#include "Fase.h"
#include <SFML/Graphics.hpp>

namespace Jogar
{
	namespace Fases
	{
		class SilentSkies : public Fase
		{
		private:
		
		public:
			SilentSkies();
			~SilentSkies();
			void criarFundo();
			void desenhar();
		};
	}
}