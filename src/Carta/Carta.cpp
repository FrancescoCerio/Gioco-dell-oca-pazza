/*
 * Card.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "Carta.hpp"
#include "game.hpp"
#include <cstring>
#include <iostream>
#include "DomandaCarta.h"


Carta::Carta() {
    int n = (rand()%4)+1;
    switch (n) {
        case 1:
            this->tipo = rilanciaDado;
            break;
            
        case 2:
            this->tipo = tornaInizio;
            break;
            
        case 3:
            this->tipo = fermoUnTurno;
            break;
        
        case 4:
            this->tipo = domanda;
            break;
    }
}

tipoCarta Carta::getTipo(){
    return this->tipo;
}

Carta::Carta(char const * mess){
	strcpy(this->__messaggio , mess);
}

void Carta::setMessaggio(char const * mess){
	strcpy(this->__messaggio , mess);
}

void Carta::getMessaggio(){
	cout << this->__messaggio << endl;
};


void Carta::effetto_carta(giocatore* g/*, tipoCarta tipo*/){
//    switch (tipo) {
//        case tornaInizio:
//            g->setPos(0);
//            break;
//
//        case fermoUnTurno:
//            g->incTurni();
//            break;
//
//        case rilanciaDado:
//            Dado* tmp_d = new Dado();
//            tmp_d->mostraRisultato();
//            delete tmp_d;
//            break;
//
//        case domanda:
//            DomandaCarta* tmp_dom = new DomandaCarta();
//            tmp_dom->effetto_carta(g);
//            delete tmp_dom;
//    }
}


Carta::~Carta() {
	// TODO Auto-generated destructor stub
}

