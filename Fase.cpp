/*#include "Fase.h"

namespace Jogar
{
	namespace Fases
	{
		void Fase::atualizarEntidades()
		{

		}

		Fase::Fase() : listaEntidade(), pColisao(new Gerenciadores::Gerenciador_Colisoes(&listaEntidade))
		{
			if (pColisao == nullptr)
			{
				cout << "Erro na cria��o de Gerenciador de Colis�o" << endl;
				exit(1);
			}
		}

		Fase::~Fase()
		{
			if (pColisao) {
				delete(pColisao);
				pColisao = nullptr;
			}
			listaEntidade.limparLista();
		}

		void Fase::executar()
		{
			listaEntidade.executar(pGrafico->getWindow());
		}
	}
}*/