#pragma once
#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Inimigo.h"

namespace Jogar 
{
	namespace Entidades
	{
		class Inim_Facil : public Inimigo 
		{
		private:

		public:
			Inim_Facil();
			~Inim_Facil();
		};
	}
}