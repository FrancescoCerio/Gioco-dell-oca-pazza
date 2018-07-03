/*
 * ScambiaPosizione.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "ScambiaPosizione.hpp"
#include <cstring>
#include <iostream>
#include "Carta.hpp"

Scambia_Posizione::Scambia_Posizione() : Carta("Scambia la posizione con il giocatore a te successivo") {
    
}

/*
void Scambia_Posizione::effetto_carta(giocatore *g, tipoCarta scambiaPos){
    
}
*/

void Scambia_Posizione::scambia(giocatore* g1, giocatore* g2/*, tipoCarta scambiaPos*/){
    int tmp_pos = g1->getPos();
    g1->setPos(g2->getPos());
    g2->setPos(tmp_pos);
}



Scambia_Posizione::~Scambia_Posizione() {
	// TODO Auto-generated destructor stub
}

