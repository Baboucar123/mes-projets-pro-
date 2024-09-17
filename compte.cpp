#include <istream>
#include<string>
#include "compte.h"

compte :: compte(client proprietaire , int code_secret)

: proprietaire (proprietaire) , code_secret(code_secret)
{

numero_de_compte = compteur_compte ;

solde = 0.0 ;


}

bool compte :: identification( int code_saisi){

    return (code_saisi = code_secret);
}

void compte :: consulter_le_solde(){

    cout << " le solde actuel : " << solde << " euros " << endl ;
}

void compte :: crediter (double montant ){

    solde +=montant ;

    cout << "compte crediter de " << montant << " euros " <<  endl ; 
}

void compte :: debiter(double montant ){

if (montant <= solde ){

    solde-=montant ;
    cout << " compte debite de " << montant << " euros " << endl ;

}
else {

    cout << " le solde est insuffisant pour debiter " <<endl ; 
}

}

void compte :: virement( compte &destinataire , double montant ){

    if (montant <= solde) {

        debiter(montant) ;
        destinataire.crediter(montant);
    }
    else {
        cout << " le solde est insuffisant pour effectuer un virement" << endl ;
    }
}

void compte :: commander_chequier(){

    cout << " un chequier a été commander " <<endl ;
}

void compte :: consulter_rib(){

    cout << " RIB du compte : " << numero_de_compte <<endl;
}
void compte :: afficher_information_compte(){

    cout << " N° : " << numero_de_compte <<endl ;
    proprietaire.affiche_identite_client();
    consulter_le_solde();
}

void compte :: menu_operations(){

    int choix ;
    double montant ;

    do {

        cout << " 1. consulter le solde " <<endl ;
        cout << " 2. crediter le compte " << endl ;
        cout << " 3. debiter le compte " << endl ;
        cout << " 4. demander un chequier " << endl ;
        cout << " 5. consulter le RIB " << endl ;
        cout << " 0. Quitter "  << endl ;
        cout << " choisissez une option : " << endl ;
        cin >> choix ;

        switch (choix)
        {
        case 1 :
            consulter_le_solde();
            break;

        case 2 : 
        cout << " Montant a crediter : " <<endl ;
        cin >> montant ; 
        break;

        case 3 : 
        cout << " Montant a debiter : " <<endl ;
        crediter(montant );
        break;

        case 4 : 
        commander_chequier();
        break;

        case 5 : 
        consulter_rib();
        break;

        case 0 : 
        cout << " Merci de votre visite , a la prochaine " << endl ;
        break ;

        default:
           cout << " options invalide . " <<endl ;
        }

        
    }

    while (choix != 0) ;

}

int compte :: getNumero_de_compte (){

    return numero_de_compte  ;
}

double compte :: getSolde (){

    return solde ;
}