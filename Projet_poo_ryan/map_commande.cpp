#include "pch.h"
#include "map_Commande.h"

NS_Composants::map_Commande::map_Commande()
{
    this->id_commande = -1;
    this->id_client = -1;
    this->id_personnel = -1;
    this->id_adresse = -1;
    this->date_commande = "RIEN";
    this->date_liv = "RIEN";

    this->nom_commande = "RIEN";
}

String^ NS_Composants::map_Commande::SELECT()
{

    return "SELECT id_commande, Nom_Commande, Date_emi, date_liv, Id_Client, Id_Personnel " +

        "FROM TB_Commande ";
}



String^ NS_Composants::map_Commande::SELECTbyId_Client()
{

    return "SELECT id_commande, date_commande, nom_commande, id_adresse, id_personnel  " +

        "FROM TB_Commande " +

        "WHERE(id_client = " + this->id_client + ");";
}

String^ NS_Composants::map_Commande::SELECTbyId_Personnel()
{

    return "SELECT id_commande, date_commande, nom_commande, id_adresse, id_client  " +

        "FROM TB_Commande " +

        "WHERE(id_personnel = " + this->id_personnel + ");";
}

String^ NS_Composants::map_Commande::SELECTbyId_Adresse()
{

    return "SELECT id_commande, date_commande, nom_commande, id_client, id_personnel  " +

        "FROM TB_Commande " +

        "WHERE( id_adresse = " + this->id_adresse + ");";
}

String^ NS_Composants::map_Commande::UPDATE() {
    return "UPDATE TB_Commande " + 
        "SET Nom_Commande='" + this->nom_commande + "', Date_emi='" + this->date_commande + "' ,date_liv='"+ this->date_liv + "' , Id_Client='"+this->id_client + "', Id_Personnel='"+this->id_personnel+"' "
        + "WHERE(Id_Commande = " + this->id_commande + ");";

}

String^ NS_Composants::map_Commande::DELETE()
{
    return "DELETE FROM TB_Commande" + " WHERE(Id_Commande ='" + this->id_commande + "');";
}

String^ NS_Composants::map_Commande::INSERT()
{

    return "INSERT INTO TB_Commande(Nom_Commande, Date_emi, date_liv, Id_Client, Id_Personnel) " +

        "VALUES('" + this->nom_commande + "', '" + this->date_commande+ "', '" + this->date_liv + "', '" + this->id_client + "', '" + this->id_personnel + "');SELECT @@IDENTITY;";
}

void NS_Composants::map_Commande::setId_Commande(int id_commande)
{
    this->id_commande = id_commande;
}

void NS_Composants::map_Commande::setId_Client(int id_client)
{
    this->id_client = id_client;
}

void NS_Composants::map_Commande::setId_Personnel(int id_personnel)
{
    this->id_personnel = id_personnel;
}

void NS_Composants::map_Commande::setId_Adresse(int id_adresse)
{
    this->id_adresse = id_adresse;
}

void NS_Composants::map_Commande::setNom_commande(String^ nom_com)
{
    this->nom_commande = nom_com;
}

void NS_Composants::map_Commande::setdate_commande(String^ date_com)
{
    this->date_commande = date_com;
}

void NS_Composants::map_Commande::setdate_liv(String^ date_com)
{
    this->date_liv = date_com;
}

int NS_Composants::map_Commande::getId_commande()
{
    return this->id_commande;
}

int NS_Composants::map_Commande::getId_Client()
{
    return this->id_client;
}

int NS_Composants::map_Commande::getId_Personnel()
{
    return this->id_personnel;
}

int NS_Composants::map_Commande::getId_Adresse()
{
    return this->id_adresse;
}

String^ NS_Composants::map_Commande::getNom_commande()
{
    return this->nom_commande;
}

String^ NS_Composants::map_Commande::getdate_commande()
{
    return this->date_commande;
}

String^ NS_Composants::map_Commande::getdate_liv()
{
    return this->date_liv;
}
