//
//  Domande.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include <cstdlib>
#include "Domande.hpp"

using namespace std;

domanda domande[NUM_DOMANDE] = {
    
    {"In quale film Nicolas Cage ruba 50 auto in una notte?", {
        "a - Fuori di testa",
        "b - Con Air",
        "c - Fuori in 60 secondi",
        "d - Drive Angry"}, 'c'},
    
    {"Con quale film Leonardo Di Caprio ha vinto l'Oscar?",{
        "a - Titanic",
        "b - The Wolf Of Wall Street",
        "c - Il grande Gatsby",
        "d - Revenant"}, 'd'},
 
    {"Quale tra i seguenti non è un film di Quentin Tarantino?",{
        "a - Le Iene",
        "b - The Hateful 8",
        "c - Per un pugno di dollari",
        "d - Django"}, 'c'},
    
    {"In che anno è uscito il film \"E.T. l'extraterrestre\"?",{
        "a - 1990",
        "b - 1982",
        "c - 1992",
        "d - 1998"}, 'b'},
    
    {"Quanti Oscar ha vinto in totale \"Il Padrino\"?",{
        "a - 3",
        "b - 4",
        "c - 5",
        "d - 7"}, 'a'},
    
    {"Chi interpreta Dio in \"Una settimana da Dio\"?",{
        "a - Jamie Foxx",
        "b - Denzel Washington",
        "c - Morgan Freeman",
        "d - Jim Carrey"}, 'c'},
    
    {"Chi è il regista della serie italiana \"The Young Pope\" usita nel 2016?",{
        "a - Martin Scorsese",
        "b - Paolo Sorrentino",
        "c - Giuseppe Tornatore",
        "d - Dario Argento"}, 'b'},
    
    {"Da chi è interpretato il personaggio di Forrest Gump nel film omonimo?",{
        "a - Tom Hanks",
        "b - Russel Crowe",
        "c - Johnny Depp",
        "d - Robert Redford",}, 'a'},
    
    {"Nella serie \"Breaking Bad\" cosa spinge Walter White a produrre Metanfetamina?", {
        "a - Mancanza di soldi",
        "b - La scoperta di un cancro terminale ai polmoni",
        "c - Un litigio con la moglie",
        "d - La sua dipendenza dalla droga"}, 'b'},
    
    {"Chi è il Principe Mezzosangue nel sesto episodio di Harry Potter?", {
        "a - Albus Silente",
        "b - Voldemort",
        "c - Severus Piton",
        "d - Hagrid"}, 'c'},
    
    {"Quali sono in ordine, i titoli dei tre episodi de \"Il Signore degli Anelli\"?",{
        "a - Le Due Torri, Il ritorno del Re, La Compagnia dell'Anello",
        "b - Il ritorno del Re, Le Due Torri, La Compagnia dell'Anello",
        "c - Le Due Torri, La Compagnia dell'Anello, Il ritorno del Re",
        "d - La Compagnia dell'Anello, Le Due Torri, Il ritorno del Re"}, 'd'},
    
    {"Quale supereroe MARVEL utilizza la super armatura Hulkbuster?",{
        "a - Capitan America",
        "b - Hulk",
        "c - Iron Man",
        "d - Thor"}, 'c'},
    
    {"In \"Labyrinth - dove tutto è possibile\" chi interpreta il re degli gnomi? (un celebre cantante)", {
        "a - David Bowie",
        "b - Jared Leto",
        "c - Johnny Depp",
        "d - Eminem"}, 'a'},
    
    {"In quale film Bil Murray si trova costretto a rivivere la stessa giornata per molto tempo?",{
        "a - Ricomincio da Tre",
        "b - Riparto da zero",
        "c - 100 volte Natale",
        "d - Ricomincio da capo"}, 'd'},
    
    {"In quale film del 2011 Bradley Cooper interpreta uno scrittore che grazie ad una nuova pillola\n diventa un genio?",{
        "a - Limitless",
        "b - Il sapore del successo",
        "c - Il lato positivo",
        "d - American Sniper"}, 'a'},
    
    {"Nel film \"Pirati dei Caraibi - La maledizione del forziere fantasma\", quando Elizabeth guarda la magica bussola, cosa o chi punta?",{
        "a - Il nord",
        "b - Jack Sparrow",
        "c - Il forziere fantasma",
        "d - La Luna"}, 'b'},
    
    {"Da chi è interpetata la parte di Jack Torrance in \"Shining\" diretto da Stanley Kubrick?",{
        "a - Danny Lloyd",
        "b - Joe Turkel",
        "c - Jack Nicholson",
        "d - Philip Stone",}, 'c'},
    
    {"In \"2001 - Odisse Nello Spazio\", quale oggetto misterioso compare spesso nelle scene?",{
        "a - Un masso enorme",
        "b - Un alieno",
        "c - Un monolita",
        "d - Un'astronave",}, 'c'},
    
    {"In \"Toro Scatenato\" di Martin Scorsese, chi interpreta Robert De Niro?",{
        "a - Jake LaMotta",
        "b - Sugar Ray Robinson",
        "c - Joey LaMotta",
        "d - Tommy Como",}, 'a'},
    
   /* {"Dov'è ambientato \"Il talento di Mr.Ripley\", con Jude Law e Matt Damon?",{
        "a - Napoli",
        "b - Venezia",
        "c - Ischia",
        "d - Sorrento",}, 'c'} */
  
};


domanda scegliDomanda(){
    int random = rand()%NUM_DOMANDE + 1;
    return domande[random];
}



bool ask(){
    
    domanda d = scegliDomanda();
    char risposta = ' ';
    
    cout << d.dom << endl << endl;
    
    for(int i = 0; i < NUM_RISPOSTE; i++){
        cout << d.risposta[i] << endl;
    }
    cout << endl;
    
    cin >> risposta;
    
    while (cin.fail() || risposta < ((char)97) || risposta > ((char)100)){
        cout << " - Input non valido - " << endl << endl;
        cout << " - Inserire un carattere minuscolo tra 'a' e 'd' - " << endl;
        cin >> risposta;
    }
    
    
    bool isTrue = false;
    if(risposta == d.giusta){
        cout << "La risposta è corretta!" << endl << endl;
        isTrue = true;
        cin.ignore();
    } else {
        cout << "Risposta errata!" << endl << endl;
        cin.ignore();
    }
    return isTrue;
}
