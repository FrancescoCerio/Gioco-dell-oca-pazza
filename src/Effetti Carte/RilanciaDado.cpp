/*
 * RilanciaDado.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "RilanciaDado.hpp"
#include "Dado.hpp"
#include <cstring>
#include <iostream>

Rilancia_Dado::Rilancia_Dado() : Carta("Rilancia il dado"){
}

void Rilancia_Dado::effetto_rilancia(){
    Dado* d = new Dado();
    d->mostraRisultato();
}
/*
Rilancia_Dado::~Rilancia_Dado() {
	// TODO Auto-generated destructor stub
}
*/
