#include "Ente.h"

namespace Jogar
{
	Gerenciadores::Gerenciador_Grafico* Ente::pGrafico = Gerenciadores::Gerenciador_Grafico::getGerenciadorGrafico();
	Ente::Ente() : id()
	{
	}

	Ente::~Ente()
	{
	}

	int Ente::getID()
	{
		return id;
	}
}