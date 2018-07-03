//
//  Domande.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Domande_hpp
#define Domande_hpp

#define NUM_RISPOSTE 4
#include <stdio.h>
#include <cstdlib>
#include <iostream>

struct domanda{
    char dom[150];
    char risposta[NUM_RISPOSTE][100];
    char giusta;
};

struct domanda segliDomanda();

bool ask();

#endif /* Domande_hpp */
