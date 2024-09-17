#include <iostream>
#include <string>
#include "client.h"

client :: client (string cin , string nom , string prenom , string numero_de_tel){

Cin = cin ;
Nom = nom ;
Prenom = prenom ;
Numero_de_telephone = numero_de_tel ;

}

string client :: getCin(){

    return Cin ;
}
string client :: getNom(){

    return Nom ;
}
string client :: getPrenom(){

    return Prenom ;
}
string client :: getNumero_de_telephone(){

    return Numero_de_telephone ;
}

void client :: affiche_identite_client(){

    cout << " CIN : " << Cin <<endl ;
    cout << " NOM : " << Nom << endl ;
    cout << " PRENOM : "<< Prenom << endl ;
    cout << " NUMERO DE TELEPHONE : " << Numero_de_telephone << endl ; 
}