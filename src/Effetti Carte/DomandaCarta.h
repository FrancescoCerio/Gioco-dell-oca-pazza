/*
 * DomandaCarta.h
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_

#include "giocatore.hpp"
#include "Carta.hpp"

using namespace std;

class DomandaCarta : public Carta {
public:
//    tipoCarta domanda = domanda;
	DomandaCarta();
	void effetto_carta(giocatore* g);
	virtual ~DomandaCarta();
};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_ */
