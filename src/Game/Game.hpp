//
//  game.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 06/06/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>

#include "../giocatore/giocatore.hpp"
#include "../Tabellone/tabellone.hpp"
#include "../dado/Dado.hpp"
#include "../Mazzo/Mazzo.hpp"

#define MAX_GIOCATORI 4

class Game{

    int giocatoreCorrente = 0;
    int n_giocatori = 0;
    giocatore* giocatori[MAX_GIOCATORI];
    bool isFinished = false;
    
    void gameLoop();
    
    tabellone* tabel;
    Mazzo* m;
    Dado* dado = new Dado();
    
public:
    
    Game();
    void messaggioIniziale();
    void initGiocatore();
    int giocatoreSuccessivo();
    
    void initTabellone();
    
    void mostraTurno();
    
    void finish(giocatore *g);
    
    void end();
};




#endif /* game_hpp */
