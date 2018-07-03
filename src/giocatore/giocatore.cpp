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
    fermo = true;
    if(fermo)
        incTurni();
    return fermo;
}

