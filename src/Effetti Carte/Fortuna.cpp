/*
 * Fortuna.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "../Effetti Carte/Fortuna.hpp"
#include <cstring>
#include <iostream>
#include "../Dado/Dado.hpp"
#include <unistd.h>

Fortuna::Fortuna() : Carta(" Carta Fortuna! "){
}

void Fortuna::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT)
{
		cout <<"Sto lanciando la moneta!"<<endl<<endl;
        usleep(500000);
    
		int lancio = rand() % 2;
		if (lancio == 1){
			cout <<"Testa, avanzi di 2 caselle!"<<endl;
			if(g[giocatoreCorrente]->getPos() + 2 <= dimT)
				g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos() + 2);
			else
				g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+(g[giocatoreCorrente]->getPos()+ 2 - dimT) - 1);
		}
		else{
			cout<<"Croce,torni indietro di 2 caselle!"<<endl;
			if(g[giocatoreCorrente]->getPos() - 2 >= 0)
				g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos() - 2);
			else
				g[giocatoreCorrente]->setPos(0);
		}

}

Fortuna::~Fortuna(){;}

