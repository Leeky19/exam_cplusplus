// Projet_Examen.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Boxeur.h"
#include <string>

using namespace Boxeurs;
using namespace std;

int main()
{
    cout << "---> DEBUT" << endl << endl;

    //  Utilisation statique (ou automatique) d'un objet
    Boxeur boxeur_1("John", 68.2);
    cout << "Boxeur: " << boxeur_1.GetNom() << endl;
    
    Boxeur* boxeur_2;	//  Déclaration d'un pointeur
    boxeur_2 = new Boxeur("Patou",52.2);	// Instanciation
    cout << "Principal: " << boxeur_2->GetNom() << endl;

    
    
    return 0;
}