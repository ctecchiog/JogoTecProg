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
            Lista<Entidade> objListaEntidade;
        public:
            ListaEntidade();
            ~ListaEntidade();
            void addEntidade(Entidade* entidade);
            void removerEntidade(Entidade* entidade);
            void removerEntidade(int pos);
            int getTam();
            Entidade* operator[](int pos);
            void limparLista();
            void executar(sf::RenderWindow* window);
            //void desenharEntidades();
        };

    }

}