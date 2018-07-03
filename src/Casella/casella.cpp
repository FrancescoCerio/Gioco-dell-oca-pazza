//  casella.cpp

#include "casella.hpp"
#include <cstdlib>
#include <iostream>

#define spostamento 5

casella::casella(){
    int n=(rand() % 8) + 1;
    switch (n) {
            
        case (4):
            this->tipo=Avanti;
            break;
            
        case (5):
            this->tipo=Indietro;
            break;
            
        case (6):
            this->tipo=Pesca;
            break;
            
        case (7):
            this->tipo=Fermo;
            break;
            
        case (8):
            this->tipo=Domanda;
            break;
            
            
        default:
            this->tipo=Vuota;
            break;
    }
    
}

void casella::setInizio(){
    this->tipo=Inizio;
}

void casella::setArrivo(){
    this->tipo=Arrivo;
}


tipo casella::getTipo(){
    return this->tipo;
}


string casella::getNomeTipo(){
    switch (this->tipo) {
        case Inizio:
            return "\x1b[32mInizio\x1b[0m";
            break;
            
        case Vuota:
            return "Vuota   ";
            break;
            
        case Avanti:
            return "\x1b[33mAvanti\x1b[0m  ";
            break;
            
        case Indietro:
            return "\x1b[34mIndietro\x1b[0m";
            break;
            
        case Pesca:
            return "\x1b[35mPesca\x1b[0m   ";
            break;
            
        case Fermo:
            return "\x1b[31mFermo\x1b[0m   ";
            break;
            
        case Domanda:
            return "\x1b[36mDomanda\x1b[0m ";
            break;
            
        case Arrivo:
            return "\x1b[32mArrivo\x1b[0m";
            break;
    }
}

