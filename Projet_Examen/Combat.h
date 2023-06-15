#pragma once
#include <string>
#include "Boxeur.h"

using namespace std;
using namespace Boxeurs;

namespace Combats {

	class Combat
	{
	private :
		string niveau;
		Boxeurs::Boxeur* coinBleu = nullptr; // Matrialiser l'association avec un boxeur
		Boxeurs::Boxeur* coinRouge = nullptr; // Matrialiser l'association avec un boxeur

	public : 
		Combat(string niv); //Constructeur avec paramettre

		Combat(); //Constructeur par defaut

		//CoinBleu
		Boxeurs::Boxeur* GetCoinBleu();
		void SetCoinBleu(Boxeurs::Boxeur* boxeur);
		
		//CoinRouge
		Boxeur* SetCoinRouge(Boxeur* nom);

		string GetNiveau() { return niveau; };


		

		~Combat();
	};

}

