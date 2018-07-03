/*
 * Fermounturno.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "Fermounturno.h"


Fermo_un_turno::Fermo_un_turno() : Carta("Fermo per un turno") {
    
}

void Fermo_un_turno::effetto_carta(giocatore* g){
    g->saltaTurno();
}

Fermo_un_turno::~Fermo_un_turno() {
	// TODO Auto-generated destructor stub
}

