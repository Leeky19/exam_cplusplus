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
		
		string GetNom() { return nom; };
		double GetPoid() { return poid; };

		void SetPoid(double& poid) { this->poid = poid; };
		
		
		
		Boxeur(string nom, double poid);
		
		~Boxeur();
	};


}




