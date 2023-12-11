#include "map_Paiment.h"



namespace NS_Composants {

	map_Paiment::map_Paiment()
	{
		this->id_paiement = -1;
		this->id_commande = -1;
		this->date_paiement = "RIEN";
		this->moyen_paiement = "RIEN";
	}
	String^ map_Paiment::SELECTbyId_commande()
	{

		return "SELECT Id_paiment , date_paiment , moyen_paiment FROM TB_Paiment " +
			" WHERE(Id_Commande = '" + this->getId_Commande() + "');";
	}
	String^ map_Paiment::UPDATE()
	{
		return "UPDATE TB_Paiment" + " SET date_paiment= '" + this->date_paiement + "', moyen_paiment= '" + this->moyen_paiement + "', Id_Commande= '" + this->id_commande + "' " +
			 "WHERE(Id_paiment  = '" + this->id_paiement + "');"; 
	}
	String^ map_Paiment::DELETE()
	{
		return "DELETE FROM TB_Paiement" + "WHERE(id_paiement =" + this->id_paiement + ");";
	}
	String^ map_Paiment::INSERT()
	{
		return "INSERT INTO TB_Paiment(date_paiment,moyen_paiment,Id_Commande)" + "VALUES('" + this->date_paiement + "','" + this->moyen_paiement + "','" + this->id_commande + "');";
	}
	String^ map_Paiment::ALTERTABLE()
	{
		return "ALTER TABLE TB_Paiment " +
			" DROP CONSTRAINT FK__paiment__Id_Comm__778AC167";
	}
	String^ map_Paiment::ENABLEKey()
	{
		return " ALTER TABLE TB_Paiment ADD CONSTRAINT FK__paiment__Id_Comm__778AC167  FOREIGN KEY(Id_Commande) REFERENCES TB_Commande(Id_Commande); ";
	}
	int map_Paiment::getId_paiement()
	{
		return id_paiement;
	}

	int map_Paiment::getId_Commande()
	{
		return id_commande;
	}

	String^ map_Paiment::getDate_Paiement()
	{
		return this->date_paiement;
	}

	String^ map_Paiment::getMoyen_Paiement()
	{
		return  this->moyen_paiement;
	}


	void map_Paiment::setId_paiement(int id_paiement)
	{
		this->id_paiement = id_paiement;
	}

	void map_Paiment::setId_commande(int id_commande)
	{
		this->id_commande = id_commande;
	}

	void map_Paiment::setDate_Paiement(String^ datePaiement)
	{
		this->date_paiement = datePaiement;
	}

	void map_Paiment::setMoyen_Paiement(String^ moyenPaiement)
	{
		this->moyen_paiement = moyenPaiement;
	}

}