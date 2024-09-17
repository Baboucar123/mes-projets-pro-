#include <iostream>
#include <string>

#include "compte.h"
using namespace std ;
int main (){

int mon_code_secret ;

client client1("A045y89","Baboucar","COLY","0749764689");
compte compte1(client1 ,1234);

cout << " bienvenu dans votre distributeur LCL" <<endl;
cout << " veuillez inserer votre carte " << endl ;

int essais = 0 ;
bool identification_reussie = false ;

while ( essais < 3 && !identification_reussie){
    cout << " Saisissez votre code a quatres chiffres : " << endl;
    cin >> mon_code_secret ;

    if (compte1.identification(mon_code_secret)){

        identification_reussie = true ;

        cout << " identification reussie " << endl ;
        compte1.menu_operations() ;

    }
    else {
        essais++ ;

        cout << " votre code secret est incorrect . Il vous reste " << 3 - essais<< " essais "<<endl ;
    }
}

if (!identification_reussie){

    cout << " carte bloquee . Veuillez contacter votre agence " <<endl ;
}
    return 0;
}