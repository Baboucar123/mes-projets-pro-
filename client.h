#include <iostream>
#include <string>
using namespace std ;

class client {

private :

string Cin ;
string  Nom ;
string Prenom ;
string Numero_de_telephone ;

public:

client (string , string ,string , string ) ; 

string getCin () ;
string getNom () ;
string getPrenom () ;
string getNumero_de_telephone() ;

void affiche_identite_client ();

};