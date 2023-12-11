#include "pch.h"
#include "CL_Client.h"

namespace NS_Composants
{

    CL_Client::CL_Client(void)
    {
        this->id_Client = -1;
        this->Nom = "RIEN";
        this->Prenom = "RIEN";
    }

    String^ CL_Client::SELECT(void)
    {
        return "SELECT id_Client, Nom, Prenom,Date_naissance " +

            "FROM TB_Client;";

    }

    String^ CL_Client::INSERT(void)
    {
        return "INSERT INTO TB_Client " +
            "(Nom, Prenom, Date_naissance) " +
            "VALUES('" + this->getNom() + "', '" + this->getPrenom() + "', '" + this->getdate_nais() + "');SELECT @@IDENTITY;";
    }

    String^ CL_Client::UPDATE(void)
    {
        return "UPDATE TB_Client " +
            "SET Nom = '" + this->getNom() + "', Prenom = '" + this->getPrenom() + "', Date_naissance = '" + this->getdate_nais() + "' " +
            "WHERE(id_Client = " + this->getId_Client() + ");";

    }

    String^ CL_Client::DELETE(void)
    {
        return "DELETE FROM Client " +

            "WHERE(id_Client = " + this->getId_Client() + ");";

    }

    void CL_Client::setId_Client(int id_Client)

    {

        if (id_Client > 0)

        {

            this->id_Client = id_Client;

        }

    }

    void CL_Client::setPrenom(String^ prenom)
    {
        if (prenom != "")
        {
            this->Prenom = prenom;
        }
    }

    void CL_Client::setNom(String^ nom)

    {

        if (nom != "")

        {

            this->Nom = nom;

        }

    }

    void CL_Client::setdate_nais(String^ date)

    {

        if (date != "")

        {

            this->date_nais = date;

        }

    }

    int CL_Client::getId_Client(void)

    {

        return this->id_Client;

    }

    String^ CL_Client::getNom(void)

    {

        return this->Nom;

    }

    String^ CL_Client::getPrenom(void)

    {

        return this->Prenom;

    }

    String^ CL_Client::getdate_nais(void)

    {

        return this->date_nais;

    }
}