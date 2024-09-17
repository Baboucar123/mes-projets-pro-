#include <iostream>
#include <string>
#include "client.h"
using namespace std ;

class compte {

private :

int compteur_compte ;
int numero_de_compte ;
double solde ;
client proprietaire ;
int code_secret ;

public : 

compte (client proprietaire  , int code_saisi) ;

bool identification (int code_saisi );
void consulter_le_solde () ;
void crediter(double montant );
void debiter (double montant );
void virement (compte &destinataire , double montant );
void commander_chequier();
void consulter_rib( );
void afficher_information_compte ();
void menu_operations();

int getNumero_de_compte ();
double getSolde () ;

};