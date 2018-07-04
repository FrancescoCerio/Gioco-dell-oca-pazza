//
//  game.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 06/06/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "Game.hpp"
#include "giocatore.hpp"
#include "Dado.hpp"
#include "Domande.hpp"
#include "casella.hpp"
#include "tabellone.hpp"
#include "Mazzo.hpp"
#include <stdlib.h>
#include <unistd.h>

using namespace std;

Game::Game(){
    
    //Setto il tempo generale a 0
//    srand((unsigned)time(NULL));
    
    //Pulisco la schermata
    system("clear");
    
    //Stampo il messaggio di benvenuto
    messaggioIniziale();
    system("clear");
    
    //Creo il tabellone
    initTabellone();
    
    //Creo il mazzo in maniera random
    m = new Mazzo();
    
    //Inizializzo i giocatori e il tabellone
    initGiocatore();
    
    //Loop per il gioco
    //Termina se isFinished = true
    while(!isFinished){
        gameLoop();
    }
    
    end();
}


//Funzione che stampa il messaggio di benvenuto iniziale
void Game::messaggioIniziale(){
    
    cout << "BENVENUTO NEL... " << endl << endl;
    cout <<"~ " << RED << "GIOCO" << YELLOW << " DELL'OCA " << GREEN << "PAZZA" << DEFAULT << " ~" << endl << endl;
    cout << "Le istruzioni sono semplici, premi " << RED << "invio" << DEFAULT << " per continuare." << endl << endl;
    cout << "Cosa aspetti, INIZIA!" << endl ;
    cin.get();
    
}


//Funzione che inizializza i giocatori con i parametri necessari
void Game::initGiocatore(){
    
    cout << " - Inserire il numero di partecipanti (da 2 a 4): ";
    cin >> n_giocatori;
    
    while(cin.fail() || n_giocatori < 2 || n_giocatori > 4){
        cin.clear();
        cin.ignore(256, '\n');
        cout << endl;
        cout << " - Il numero di giocatori deve essere compreso tra 2 e 4 - " << endl << endl;
        cout << " - Inserire il numero di partecipanti (da 2 a 4): ";
        cin >> n_giocatori;
    }
    
    char n[40];
    
    for (int i = 0; i < n_giocatori; i++){
        cout << " * Inserire il nome del giocatore " << i + 1 << ": ";
        cin >> n;
        giocatori[i] = new giocatore(n, i);
    }
    cout << endl;
}


//Loop del gioco
void Game::gameLoop(){
    tabel->stampaTabellone(this->giocatori, this->n_giocatori);
    mostraTurno();
    giocatoreCorrente = giocatoreSuccessivo();
}


//Funzione che mostra il turno del giocatore corrente
void Game::mostraTurno(){
    
    cout << endl << "- - - - - - - - - - - - - - - - - - - - - - - - - -" << endl << endl;
    cout << "E' il turno di: " << this->giocatori[giocatoreCorrente]->getNome() << endl;
    cout << "Sei sulla casella " << this->giocatori[giocatoreCorrente]->getPos() << endl << endl;
    
    if (this->giocatori[giocatoreCorrente]->fermo == true){
        
        cout << "Stai fermo un turno" << endl;
        this->giocatori[giocatoreCorrente]->fermo = false;
        cin.ignore();
        
    } else {
        
        cout << "Lancia il dado" << endl;
        cin.get();
        this->dado->mostraRisultato();
        
        if (this->giocatori[giocatoreCorrente]->getPos()+this->dado->d <= this->tabel->getDim())
            this->giocatori[giocatoreCorrente]->setPos(this->giocatori[giocatoreCorrente]->getPos()+this->dado->d);
        else
            this->giocatori[giocatoreCorrente]->setPos(this->giocatori[giocatoreCorrente]->getPos()+(this->giocatori[giocatoreCorrente]->getPos()+this->dado->d - this->tabel->getDim()));
        
        cout << endl << "Raggiungi la casella " << this->giocatori[giocatoreCorrente]->getPos();
        cin.ignore();
        
        this->tabel->effetto(this->giocatori[giocatoreCorrente], m);
        cin.get();
    }
    if (giocatori[giocatoreCorrente]->getPos() == tabel->getDim()){
        finish(giocatori[giocatoreCorrente]);
    }
}
/*
void Game::muoviGiocatore(){
    int localPos;
    giocatori[giocatoreCorrente]->setPos(dado->d);
    localPos = this->giocatori[giocatoreCorrente]->getPos();
    
    if(localPos == this->tabel->getDim()){
        finish();
    }
//    this->tabel->effetto(this->giocatori[giocatoreCorrente]);
}
*/
int Game::giocatoreSuccessivo(){
    if(giocatoreCorrente == n_giocatori - 1)
        return 0;
    else{
        return giocatoreCorrente+1;
}
}

int Game::giocatorePrecedente(){
    if(giocatoreCorrente == 0)
        return this->n_giocatori--;
    else
        return giocatoreCorrente--;
}


//Inizializzo il tabellone
void Game::initTabellone(){
//    srand((unsigned)time(NULL));
    tabellone* t = new tabellone();
    this->tabel = t;
}


//Funzione da chiamare una volta terminato il gioco, che setta isFinished = true
void Game::finish(giocatore *g){
    cout << " - Complimenti! " << g->getNome() << " hai vinto il gioco!" << endl;
    cin.get();
    this->isFinished = true;
}


//Funzione da mostrare a fine gioco con saluti finali inclusi
void Game::end(){
    system("Clear");
    cout <<endl<<"- - - - - - - - - - - - - -"<<endl<<endl;
    cout << "\x1b[35m- Gioco Dell' Oca Pazza -\x1b[0m"<<endl<<endl;
    cout << "    \x1b[31mSviluppato da:\x1b[0m "<<endl<<endl<<"    \x1b[32mFrancesco Cerio\x1b[0m"<<endl<<"    \x1b[33mFrancesco Polisena\x1b[0m"<<endl<<"    \x1b[34mFilippo Bartolucci\x1b[0m"<<endl<<endl;
    
    cout <<"- - - - - - - - - - - - - -  "<<endl<<endl;
    usleep(3000000);
    cout << " Premi invio per chiudere il programma";
    cin.ignore();
    system("PAUSE");
}



