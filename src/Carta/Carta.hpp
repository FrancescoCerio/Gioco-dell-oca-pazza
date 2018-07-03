/*
 * Card.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef CARD_H_
#define CARD_H_

#define TIPI_CARTE 6
#include "giocatore.hpp"

enum tipoCarta{
    tornaInizio,
    fermoUnTurno,
    rilanciaDado,
    domanda
};


class Carta {
  private:
    tipoCarta tipo;
    char __messaggio[100]; //messaggio visualizzato sulla carta

public:
    
    Carta();
    Carta(char const * messaggio);
    virtual void setMessaggio(char const * messaggio); //metodo per definire il messaggio
    virtual void getMessaggio();// metodo per mostrare il messaggio
    virtual void effetto_carta(giocatore* g/*, tipoCarta tipo*/);
    void effetto_rilancia();
    virtual ~Carta();
    tipoCarta getTipo();
    string getNomeTipoCarta();
};

#endif /* CARD_H_ */
