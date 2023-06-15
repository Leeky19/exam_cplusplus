#define TRACE

#ifdef TRACE
#include <iostream>
#endif

#include "Boxeur.h"

using namespace std;

//Constructeur
Boxeurs::Boxeur::Boxeur(string nom, double poid) {
	this->nom = nom;
	this->poid = poid;
		//  Conseillé pour tracer les passage dans les constructeurs
	#ifdef TRACE
		cout << "=> Boxeur(" << this->nom << ") de " << this->poid <<"kg est a l'adresse : " << this << endl;
	#endif

}
