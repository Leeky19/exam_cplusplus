#pragma once
#include <string>
#include "Boxeur.h"

using namespace std;

namespace Combats {

	class Combat
	{
	private :
		string niveau;

	public : 
		Combat(string niv); //Constructeur avec paramettre

		Combat(); //Constructeur par defaut


		string GetNiveau() { return niveau; };

		~Combat();
	};

}

