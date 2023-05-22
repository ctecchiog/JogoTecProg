#pragma once
#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Entidade.h"

namespace Jogar
{
	namespace Entidades 
	{
		class Obstaculo : public Entidade 
		{
		private:
			bool danoso;
		public:
			Obstaculo();
			~Obstaculo();
			void executar();
		};
	}
}