

#include "pch.h"
#include "CL_mappFACTURE.h"





namespace NS_Composants

{

    CL_mappFACTURE::CL_mappFACTURE(void)

    {

        this->id_facture = -1;

        this->nom_societe = "RIEN";

        this->adresse_societe = "RIEN";

        this->numeroservice_client = 0;

        this->id_commande = -1;

    }

    String^ CL_mappFACTURE::SELECT(void)

    {

        return "SELECT id_adresse, adresse, ville, cp, id_personne " +

            "FROM TB_ADRESSE " +

            "WHERE(id_personne = " + this->id_facture + ");";

    }

    String^ CL_mappFACTURE::SELECTBYIDcommande(void)

    {

        return "SELECT Id_Facture , Nom_Societé , Adress_Societé , NumeroService_Client FROM TB_Facture " +
            " WHERE(Id_Commande = '" + this->getid_commande() + "');";

    }

    String^ CL_mappFACTURE::INSERT(void)

    {

        return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +

            "VALUES('" + this->id_facture + "', '" + this->id_facture + "', '" + this->id_facture + "', " + this->id_facture + ");";

    }

    String^ CL_mappFACTURE::UPDATE(void)

    {

        return "UPDATE TB_ADRESSE " +

            "SET adresse ='" + this->id_facture + "', ville ='" + this->id_facture + "', cp ='" + this->id_facture + "' " +

            "WHERE(id_adresse =  " + this->id_facture + "); ";

    }

    String^ CL_mappFACTURE::DELETE(void)

    {

        return "DELETE FROM ARTICLE " +

            "WHERE(id_article = " + this->id_facture + ");";

    }

    void CL_mappFACTURE::setIdFacture(int IdFACTURE)

    {

        if (IdFACTURE > 0)this->id_facture = IdFACTURE;

    }

    void CL_mappFACTURE::setnom_societe(String^ nomsociete)

    {

        if (nomsociete != "")this->nom_societe = nomsociete;

    }

    void CL_mappFACTURE::setadresse_societe(String^ adressesociete)

    {

        if (adressesociete != "")this->adresse_societe = adressesociete;

    }

    void CL_mappFACTURE::setnumservice_client(int numserv)

    {

        if (numserv > 0)this->numeroservice_client = numserv;

    }


    void CL_mappFACTURE::setid_commande(int idCOMMANDE)

    {

        if (idCOMMANDE > 0)this->id_commande = idCOMMANDE;

    }

    ////////////////////////////////////////////////////////

    int CL_mappFACTURE::getIdFacture(void)

    {

        return this->id_facture;

    }

    String^ CL_mappFACTURE::getnom_societe(void)

    {

        return this->nom_societe;

    }


    String^ CL_mappFACTURE::getadresse_societe(void)

    {

        return this->adresse_societe;

    }

    int CL_mappFACTURE::getnumeroservice_client(void)

    {

        return this->numeroservice_client;

    }

    int CL_mappFACTURE::getid_commande(void)

    {

        return this->id_commande;

    }

}