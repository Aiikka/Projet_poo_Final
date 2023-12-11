#pragma once
using namespace System;
namespace NS_Composants {
	ref class Contenir
	{
	private:
		int id_commande;
		int id_article;
		int quantite_article;
		float prix;
		double remise_commerciale;

	public:
		Contenir();
		String^ SELECT();
		String^ SELECTbyId_commande();
		String^ SELECTbyId_article();
		String^ UPDATE();
		String^ DELETE();
		String^ INSERT();
		String^ ALTERTABLE();
		String^ ENABLEKEY();
		void setId_article(int);
		void setId_commande(int);
		void setQuantite(int);
		void setPrix(float);
		void setRemise_commerciale(double);
		int getId_commande();
		int getId_article();
		int getQuantite();
		float getPrix();
		double getRemise_commerciale();

	};
}

