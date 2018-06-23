#ifndef tabellone_hpp
#define tabellone_hpp

#include <stdio.h>
#include "casella.hpp"
#include "../Giocatore/giocatore.hpp"

#define MAX_DIM 100
using namespace std;

class tabellone {
private:
    
    // Vettore che contiene tutte le caselle del tabellone
    casella caselle[MAX_DIM];
    // Dimensione del vettore;
    int dim;
    string posGiocatori(giocatore g[], int numG, int pos);
    
public:
    
    // Costruttore di default del 
    tabellone();
    
    // Stampa a schermo tutte le caselle del tabellone
    void stampaTabellone(giocatore g[], int numG);
    
    // Ritorna la dimensione del tabellone
    int getDim();
    
    // Applica l'effetto delle caselle 
    void effetto(giocatore &g);
    
    // Ritorna la casella numero n
    casella getCasella(int n);
};

#endif /* tabellone_hpp */

