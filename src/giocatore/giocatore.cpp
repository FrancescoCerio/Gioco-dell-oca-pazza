//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"
#include "Colors.hpp"

giocatore::giocatore(char n[MAX_CHAR_NAME], int numColore){
    strcpy(this->nome, n);
    setPos(0);
    setNumTurni(0);
    this->colore=setColor(numColore);
}


//Creo le funzioni per il giocatore

string giocatore::getNome(){
    return (this->colore + this->nome + "\x1b[0m");
}

string giocatore::getColore(){
    return this->colore;
}

void giocatore::setPos(int p){
    this->posizione = p;
}

int giocatore::getPos(){
    return this->posizione;
}

void giocatore::setNumTurni(int n){
    this->numTurni = n;
}

int giocatore::getnumTurni(){
    return this->numTurni;
}

void giocatore::incTurni(){
    this->numTurni++;
}

bool giocatore::saltaTurno(){
    fermo = this->numTurni != 0;
    if(fermo)
        incTurni();
    return fermo;
}

void giocatore::setRilancia(bool rilancia){
    this->rilancia = rilancia;
}

bool giocatore::getRilancia(){
    return this->rilancia;
} 

/*
 + setColorPlayer() inserisce il colore all'interno della stringa dividendola in 3 parti:
   1 - codice ANSI per il colore ( scelto casualmente da setColor() )
   2 - il nome del giocatore
   3 - codice ANSI che resetta il colore di deafult tramite setDefault()
*/

void giocatore::setNumColore(int numColore){
    this -> colore = static_cast<Color>(numColore);
}

const char* giocatore::setColorPlayer(char n[40]){
    char* colorName = (char*)malloc(MAX_CHAR_NAME);
    strcpy(colorName, setColor(this -> colore));
    strcat(colorName, n);
    strcat(colorName, setDefault());
    return colorName;
}
