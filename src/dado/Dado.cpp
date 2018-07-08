//
//  Dado.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 16/05/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "../dado/Dado.hpp"
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>

using namespace std;

Dado::Dado(){}

int Dado::lanciaDado(){

    srand((unsigned)time(NULL));
    
    return this->d = rand() % 6 + 1;
    
}


void Dado::mostraRisultato(){
    lanciaDado();
    disegnaDado();
    cout << "Hai totalizzato " << this->d << "!" << endl;
}


void Dado::disegnaDado(){
    
    cout << "       ______     " << endl;
    cout << "      /     /\\   " << endl;
    cout << "     /  '  /  \\  " << endl;
    cout << "    /_____/. . \\ " << endl;
    cout << "    \\ . . \\    /" << endl;
    cout << "     \\ . . \\  / " << endl;
    cout << "      \\_____\\/ " << endl << endl;
    
    usleep(500000);
    
    switch (this->d) {
        case 1:
            
            cout << "       _______ " << endl;
            cout << "      |       |" << endl;
            cout << "      |   .   |" << endl;
            cout << "      |       |" << endl;
            cout << "       ------- " << endl << endl;
            
            break;
        case 2:
            
            cout << "       _______ " << endl;
            cout << "      | .     |" << endl;
            cout << "      |       |" << endl;
            cout << "      |     . |" << endl;
            cout << "       ------- " << endl << endl;
            
            break;
            
        case 3:
            
            cout << "       _______ " << endl;
            cout << "      | .     |" << endl;
            cout << "      |   .   |" << endl;
            cout << "      |     . |" << endl;
            cout << "       ------- " << endl << endl;
            
            break;
            
        case 4:
            
            cout << "       _______ " << endl;
            cout << "      | .   . |" << endl;
            cout << "      |       |" << endl;
            cout << "      | .   . |" << endl;
            cout << "       ------- " << endl << endl;
            
            break;
            
        case 5:
            
            cout << "       _______ " << endl;
            cout << "      | .   . |" << endl;
            cout << "      |   .   |" << endl;
            cout << "      | .   . |" << endl;
            cout << "       ------- " << endl << endl;
            
            break;
            
        case 6:
            
            cout << "       _______ " << endl;
            cout << "      | . . . |" << endl;
            cout << "      | . . . |" << endl;
            cout << "      | . . . |" << endl;
            cout << "       ------- " << endl << endl;
            
            break;
            
        default:
            cout << " ";
            break;
    }
}
