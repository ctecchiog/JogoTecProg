#include "Gerenciador_Evento.h"

Jogar::Gerenciadores::Gerenciador_Evento* Jogar::Gerenciadores::Gerenciador_Evento::pEvento = NULL;

Jogar::Gerenciadores::Gerenciador_Evento::Gerenciador_Evento():
    pJogador(NULL), pGrafico(NULL)
{
}

Jogar::Gerenciadores::Gerenciador_Evento::~Gerenciador_Evento()
{
}

Jogar::Gerenciadores::Gerenciador_Evento* Jogar::Gerenciadores::Gerenciador_Evento::getGerEvento()
{
    if (pEvento == NULL)
        pEvento = new Gerenciador_Evento();
    return pEvento;
}

void Jogar::Gerenciadores::Gerenciador_Evento::setJogador(Jogador* pJogador)
{
    this->pJogador = pJogador;
}

void Jogar::Gerenciadores::Gerenciador_Evento::verificaTeclaPressionada(sf::Keyboard::Key tecla)
{
    if (tecla == sf::Keyboard::A || tecla == sf::Keyboard::Left)
        pJogador->andar(true);
    else if (tecla == sf::Keyboard::S|| tecla == sf::Keyboard::Right)
        pJogador->andar(false);
    else if (tecla == sf::Keyboard::Escape)
        pGrafico->fechaJanela();
}

void Jogar::Gerenciadores::Gerenciador_Evento::verificaTeclaSolta(sf::Keyboard::Key tecla)
{
    if (tecla == sf::Keyboard::A || tecla == sf::Keyboard::Left || tecla == sf::Keyboard::S || tecla == sf::Keyboard::Right)
        pJogador->parar();
}

void Jogar::Gerenciadores::Gerenciador_Evento::executar()
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
}

