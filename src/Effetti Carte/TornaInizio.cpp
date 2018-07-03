/*
 * TornaInizio.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "TornaInizio.h"

TornaInizio::TornaInizio():Carta ("Torna alla partenza ") {
}
void TornaInizio::effetto_carta(giocatore* g){
    g->setPos(0);
}
/*
TornaInizio::~TornaInizio() {
	// TODO Auto-generated destructor stub
}
*/
