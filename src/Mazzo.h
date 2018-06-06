/*
 * Mazzo.h
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_MAZZO_MAZZO_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_MAZZO_MAZZO_H_

#include <src/Carta/Carta.hpp>

#define DEFAULT_NUM_CARTE 40

struct elemento_mazzo{
	Carta* carta_corrente;
	elemento_mazzo* next;
};

class Mazzo {

	private:
		elemento_mazzo* inizio;
		elemento_mazzo* fine;

		elemento_mazzo* crea_elemento();

	public:
		Mazzo();
		Mazzo(int num_carte);

		Carta* pesca();
		virtual ~Mazzo();


};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_MAZZO_MAZZO_H_ */
