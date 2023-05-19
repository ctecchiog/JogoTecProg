#pragma once
#include "stdafx.h"
#include "Lista.h"
#include "Entidade.h"
#include "SFML\Graphics.hpp"

namespace Jogar 
{
    namespace Lista 
    {
        class ListaEntidade 
        {
        private:
            Lista<Entidade::Entidade> objListaEntidade;
        public:
            ListaEntidade();
            ~ListaEntidade();
            void addEntidade(Entidade::Entidade* entidade);
            void removerEntidade(Entidade::Entidade* entidade);
            void removerEntidade(int pos);
            int getTam();
            Entidade::Entidade* operator[](int pos);
            void limparLista();
            void executar();
            void desenharEntidades();
        };

    }

}