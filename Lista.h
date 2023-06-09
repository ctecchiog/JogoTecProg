#pragma once
#include "stdafx.h"
#include "Elemento.h"

namespace Jogar
{
	namespace Lista
	{
        template<class TL>
        class Lista 
        {
            private:
                Elemento<TL>* pInicio;
                Elemento<TL>* pUltimo;
                unsigned int tam;
            public:
                Lista();
                ~Lista();
                void addElemento(TL* elemento);
                void removerElemento(TL* elemento);
                void removerElemento(int pos);
                int getTam();
                void limparLista();
                TL* operator[](int pos);
        };

        template<class TL>
        Lista<TL>::Lista() :
            pInicio(nullptr), pUltimo(nullptr), tam(0)
        {

        }

        template<class TL>
        Lista<TL>::~Lista() {
            limparLista();
        }

        template<class TL>
        void Lista<TL>::addElemento(TL* elemento) {
            if (elemento == nullptr) {
                std::cout << "ERROR::Lista elemento eh nullptr" << std::endl;
                exit(1);
            }
            Elemento<TL>* novoElemento = new Elemento<TL>();
            if (novoElemento == nullptr) {
                std::cout << "ERROR::Lista aux eh nullptr" << std::endl;
                exit(1);
            }
            novoElemento->setElemento(elemento);
            if (pInicio == nullptr) {
                pInicio = novoElemento;
                pUltimo = novoElemento;
            }
            else {
                pUltimo->setProx(novoElemento);
                pUltimo = novoElemento;
            }
            tam++;
        }

        template<class TL>
        void Lista<TL>::removerElemento(TL* elemento) {
            if (elemento == nullptr) {
                std::cout << "ERROR::Lista elemento eh nullptr" << std::endl;
                exit(1);
            }
            Elemento<TL>* aux = pInicio;
            Elemento<TL>* aux2 = nullptr;
            while (aux != nullptr && aux->getElemento() != elemento) {
                aux2 = aux;
                aux = aux->getProx();
            }
            if (aux->getElemento() == elemento) {
                if (aux == pInicio) {
                    pInicio = aux->getProx();
                }
                else if (aux == pUltimo) {
                    pUltimo = aux2;
                }
                else {
                    aux2->setProx(aux->getProx());
                }
                tam--;
                delete(aux);
                aux = nullptr;
                aux2 = nullptr;
            }

        }

        template<class TL>
        void Lista<TL>::removerElemento(int pos) {
            TL* elemento = operator[](pos);
            return removerElemento(elemento);
        }

        template<class TL>
        int Lista<TL>::getTam() {
            return (int)tam;
        }

        template<class TL>
        TL* Lista<TL>::operator[](int pos) {
            if (pos >= (int)tam || pos < 0) {
                std::cout << "ERROR::Lista pos eh maior que o tamanho da lista" << std::endl;
                exit(1);
            }
            Elemento<TL>* aux = pInicio;
            for (int i = 0; i < pos; i++) {
                aux = aux->getProx();
            }
            return aux->getElemento();
        }
        template<class TL>
        void Lista<TL>::limparLista() {
            if (pInicio) {
                Elemento<TL>* aux = pInicio;
                Elemento<TL>* aux2 = nullptr;
                while (aux != nullptr) {
                    aux2 = aux->getProx();
                    delete(aux->getElemento());
                    aux = nullptr;
                    aux = aux2;
                }
            }
            pInicio = nullptr;
            pUltimo = nullptr;
        }

    }
}