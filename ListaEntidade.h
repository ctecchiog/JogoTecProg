#pragma once
#include "stdafx.h"
#include "Lista.h"
#include "Entidade.h"
#include <SFML/Graphics.hpp>

namespace Jogar 
{
    namespace Lista 
    {
        class ListaEntidade 
        {
        private:
            Lista<Entidades::Entidade> objListaEntidade;
        public:
            ListaEntidade();
            ~ListaEntidade();
            void addEntidade(Entidades::Entidade* entidade);
            void removerEntidade(Entidades::Entidade* entidade);
            void removerEntidade(int pos);
            int getTam();
            Entidades::Entidade* operator[](int pos);
            void limparLista();
            void executar(sf::RenderWindow* window);
            //void desenharEntidades();
        };

    }

}