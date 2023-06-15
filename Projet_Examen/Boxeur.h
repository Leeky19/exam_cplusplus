#pragma once
#include <string>

using namespace std;

namespace Boxeurs {
	class Boxeur
	{
	private:
		string nom;
		double poid;

	public:
		Boxeur(string nom, double poid);
		
		string GetNom();
		double GetPoid();
		void SetPoid(double &poid) { this->poid = poid; };

		~Boxeur();
	};


}




