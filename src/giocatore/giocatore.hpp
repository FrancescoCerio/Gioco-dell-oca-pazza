//
//  Giocatore.hpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef giocatore_hpp
#define giocatore_hpp

#define MAX_CHAR_NAME 40
#include <string>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "Colors.hpp"


using namespace std;


class giocatore{
    
    int n_giocatori;

    static int giocatoriTotali;
    
private:
    
    char nome[MAX_CHAR_NAME];
    int numTurni;
    int posizione;
    string colore;
    
    typedef giocatore *lista_giocatori;
    
public:
    
    giocatore(char n[MAX_CHAR_NAME], int pos);
    
    void setPos(int p);
    
    int getPos();
    
    const char* setColorPlayer(char n[]);
    
    bool fermo;
    
    void setNumTurni(int n);
    
    int getnumTurni();
    
    bool saltaTurno();
    
    void decTurni();
    
    string getNome();
    
    string getColore();
    
};



#endif
