/*
 * ScambiaPosizione.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef SCAMBIAPOSIZIONE_H_
#define SCAMBIAPOSIZIONE_H_

#include "Game.hpp"
#include "Carta.hpp"

class Scambia_Posizione : public Carta {

public:
//    tipoCarta scambiaPos = scambiaPos;
	Scambia_Posizione();
    void scambia(giocatore* g1, giocatore* g2/*, tipoCarta scambiaPos*/);
    void effetto_carta(giocatore *g/*, tipoCarta scambiaPos*/);
    virtual ~Scambia_Posizione();
};

#endif /* SCAMBIAPOSIZIONE_H_ */
