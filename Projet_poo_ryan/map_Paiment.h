#pragma once
using namespace System;

namespace NS_Composants {
	ref class map_Paiment
	{
	private:
		int id_paiement;
		int id_commande;
		String^ date_paiement;
		String^ moyen_paiement;
	public:
		map_Paiment();
		String^ SELECTbyId_commande();
		String^ UPDATE();
		String^ DELETE();
		String^ INSERT();
		String^ ALTERTABLE();
		String^ ENABLEKey();
		void setId_paiement(int);
		void setId_commande(int);

		void setDate_Paiement(String^);
		void setMoyen_Paiement(String^);
		int getId_paiement();
		int getId_Commande();
		String^ getDate_Paiement();
		String^ getMoyen_Paiement();

	};

}


