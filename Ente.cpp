#include "Ente.h"
#include "Entidade.h"

	//Jogar::Gerenciadores::Gerenciador_Grafico* Ente::pGrafico = Jogar::Gerenciadores::Gerenciador_Grafico::getGerenciadorGrafico();
	Ente::Ente() : id()
	{
	}

	Ente::~Ente()
	{
	}

	void Ente::desenhar()
	{
		//pGrafico->desenhaElemento(Jogar::Entidade::getCorpo());
	}

	int Ente::getID()
	{
		return id;
	}

	void Ente::executar()
	{
	}
