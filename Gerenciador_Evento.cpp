#include "Gerenciador_Evento.h"

namespace Jogar
{
    namespace Gerenciadores
    { /*
        Gerenciador_Evento* Gerenciador_Evento::pEvento = nullptr;
        Gerenciador_Grafico* Gerenciador_Evento::pGrafico = Gerenciador_Grafico::getGerenciadorGrafico();


        Gerenciador_Evento::Gerenciador_Evento() :
            pJogador(nullptr)
        {
        }

        Gerenciador_Evento::~Gerenciador_Evento()
        {
        }

        Gerenciador_Evento* Gerenciador_Evento::getGerEvento()
        {
            if (pEvento == nullptr)
                pEvento = new Gerenciador_Evento();
            return pEvento;
        }

        void Gerenciador_Evento::setJogador(Entidades::Jogador* pJogador)
        {
            this->pJogador = pJogador;
        }

        void Gerenciador_Evento::verificaTeclaPressionada(sf::Keyboard::Key tecla)
        {
            if (tecla == sf::Keyboard::A || tecla == sf::Keyboard::Left ||
                tecla == sf::Keyboard::S || tecla == sf::Keyboard::Right ||
                tecla == sf::Keyboard::W || tecla == sf::Keyboard::Up ||
                tecla == sf::Keyboard::Z || tecla == sf::Keyboard::Down)
                pJogador->atualizar(true);
            else if (tecla == sf::Keyboard::Escape)
                pGrafico->fechaJanela();
        }

        void Gerenciador_Evento::verificaTeclaSolta(sf::Keyboard::Key tecla)
        {
            if (tecla == sf::Keyboard::A || tecla == sf::Keyboard::Left ||
                tecla == sf::Keyboard::S || tecla == sf::Keyboard::Right ||
                tecla == sf::Keyboard::W || tecla == sf::Keyboard::Up || 
                tecla == sf::Keyboard::Z || tecla == sf::Keyboard::Down)
            {
                pJogador->parar();
            }
        }

        void Gerenciador_Evento::executar()
        {
            sf::Event evento;
            while (pGrafico->getWindow()->pollEvent(evento))
            {
                if (evento.type == sf::Event::KeyPressed)
                    verificaTeclaPressionada(evento.key.code);
                else if (evento.type == sf::Event::KeyReleased)
                    verificaTeclaSolta(evento.key.code);
                else if (evento.type == sf::Event::Closed)
                    pGrafico->fechaJanela();
            }
        } */
    }
}