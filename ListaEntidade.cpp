#include "ListaEntidade.h"

namespace Jogar
{
    namespace Lista 
    {
        ListaEntidade::ListaEntidade():
            objListaEntidade()
        {
        }
        ListaEntidade::~ListaEntidade(){

        }
        void ListaEntidade::addEntidade(Entidades::Entidade* entidade){
            objListaEntidade.addElemento(entidade);
        }
        void ListaEntidade::removerEntidade(Entidades::Entidade* entidade){
            objListaEntidade.removerElemento(entidade);
        }
        void ListaEntidade::removerEntidade(int pos){
            objListaEntidade.removerElemento(pos);
        }
        int ListaEntidade::getTam(){
            return objListaEntidade.getTam();
        }
        Entidades::Entidade* ListaEntidade::operator[](int pos){
            return objListaEntidade.operator[](pos);
        }
        void ListaEntidade::limparLista(){
            objListaEntidade.limparLista();
        }
        void ListaEntidade::executar(sf::RenderWindow* window)
        {
            //atualiza e desenha as entidades
            int tam = objListaEntidade.getTam();
            Entidades::Entidade* aux = nullptr;
            for(int i = 0; i < tam; i++)
            {
                aux = objListaEntidade.operator[](i);
                aux->atualizar();
                window->draw(aux->getCorpo());
            }
        }
        /*void ListaEntidade::desenharEntidades()
        {
            //apenas desenha as Entidades
            int tam = objListaEntidade.getTam();
            Entidades::Entidade* aux = nullptr;
            for(int i = 0; i < tam; i++)
            {
                aux = objListaEntidade.operator[](i);
                aux->desenhar();
            }
        }*/
    }
}