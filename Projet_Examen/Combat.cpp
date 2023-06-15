#define TRACE

#ifdef TRACE
#include <iostream>
#endif

#include "Combat.h"


Combats::Combat::Combat() : Combat("1/8"){
}



Boxeurs::Boxeur* Combats::Combat::GetCoinBleu()
{
	return coinBleu;
}

void Combats::Combat::SetCoinBleu(Boxeurs::Boxeur* boxeur)
{
	coinBleu = boxeur;
}

Combats::Combat::Combat(string niveau) {
	this->niveau = niveau;
	#ifdef TRACE
		std::cout << "=>  Combat de niveau (" << this->niveau << ") de " << this << std::endl;
	#endif

}






Combats::Combat::~Combat() {
#ifdef TRACE
	std::cout << "=> Destruction de " << this->niveau << " a " << this << std::endl;
#endif
}