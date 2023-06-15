#define TRACE

#ifdef TRACE
#include <iostream>
#endif

#include "Combat.h"


Combats::Combat::Combat() : Combat("Comb_1_1/8"){
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