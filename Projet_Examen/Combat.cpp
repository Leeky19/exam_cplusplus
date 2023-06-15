#define TRACE

#ifdef TRACE
#include <iostream>
#endif

#include "Combat.h"


Combats::Combat::Combat() : Combat("1/8"){
}

Boxeur* Combats::Combat::SetCoinBleu(Boxeur* boxeur)
{
	this->boxeur = boxeur;
	return this;
}


Combats::Combat::Combat(string niveau) {
	this->niveau = niveau;
	#ifdef TRACE
		std::cout << "=>  Combat de niveau (" << this->niveau << ") de " << this << std::endl;
	#endif

}



//Boxeurs::Boxeur* Combats::Combat::SetCoinBleu() { return this->boxeur; }

/*Combats::Boxeur* Boxeur::Combat::coinBleu(Boxeurs* nom) {
	this->nom = nom
		return this;
}
*/


Combats::Combat::~Combat() {
#ifdef TRACE
	std::cout << "=> Destruction de " << this->niveau << " a " << this << std::endl;
#endif
}