/*
 * RilanciaDado.hpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef RILANCIADADO_H_
#define RILANCIADADO_H_
#include "Game.hpp"
#include "Carta.hpp"


class Rilancia_Dado : public Carta { //sottoclasse di carta

public:
//    tipoCarta rilanciaDado = rilanciaDado;
	Rilancia_Dado();
    void effetto_rilancia();
    virtual ~Rilancia_Dado(){};
};

#endif /* RILANCIADADO_H_ */
