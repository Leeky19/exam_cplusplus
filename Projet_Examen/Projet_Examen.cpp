// Projet_Examen.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Boxeur.h"
#include "Combat.h"
#include <string>

using namespace Boxeurs;
using namespace Combats;
using namespace std;

int main()
{
    cout << "---> DEBUT" << endl << endl;


    ///Boxeurs
    //  Utilisation statique (ou automatique) d'un objet
    Boxeur boxeur_1("John", 68.2);
    cout << "Boxeur: " << boxeur_1.GetNom() << endl;
    
    Boxeur* boxeur_2;	//  Déclaration d'un pointeur
    boxeur_2 = new Boxeur("Patou",52.2);	// Instanciation
    cout << "Principal: " << boxeur_2->GetNom() << endl;


    ///Combat
    Combat combat_1("Finale");	// Construction par défaut
    cout << "Combat_1: " << combat_1.GetNiveau() << endl;
    combat_1.SetCoinBleu(&boxeur_1);
    combat_1.SetCoinRouge(boxeur_2);
    cout << "\nCombat_1 - Coin Bleu: " << combat_1.GetCoinBleu()->GetNom() << endl;
    cout << "Combat_1 - Coin Rouge: " << combat_1.GetCoinRouge()->GetNom() << endl<< endl ;

    Combat* combat_2;	//  Déclaration d'un pointeur
    combat_2 = new Combat("1/8");	// Instanciation
    cout << "Combat: " << combat_2->GetNiveau() << endl;
    
    Combat* combat_3;	//  Déclaration d'un pointeur
    combat_3 = new Combat();	// Instanciation
    cout << "Combat: " << combat_3->GetNiveau() << endl;
    
    delete combat_2;
    delete combat_3;
    delete boxeur_2;
    return 0;

    


}