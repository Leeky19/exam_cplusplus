#pragma once
#include <string>
#include "Boxeur.h"

using namespace std;

namespace Combats {

	class Combat
	{
	private :
		string niveau;
		Boxeur* coinBleu = nullptr; // Matrialiser l'association avec un boxeur
		Boxeur* coinRouge = nullptr; // Matrialiser l'association avec un boxeur

	public : 
		Combat(string niv); //Constructeur avec paramettre

		Combat(); //Constructeur par defaut


		Boxeur* SetCoinBleu(Boxeur* boxeur);
		Boxeur* SetCoinRouge(Boxeur* boxeur);

		string GetNiveau() { return niveau; };


		

		~Combat();
	};

}

