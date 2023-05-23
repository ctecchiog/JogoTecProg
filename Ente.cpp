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

	void Ente::desenhar()
	{
	}

	int Ente::getID()
	{
		return id;
	}

	void Ente::executar()
	{
	}
}