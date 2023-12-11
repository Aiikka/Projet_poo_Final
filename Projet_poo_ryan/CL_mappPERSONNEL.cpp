

#include "pch.h"
#include "CL_mappPERSONNEL.h"





namespace NS_Composants

{

    CL_mappPERSONNEL::CL_mappPERSONNEL(void)

    {

        this->id_personnel = -1;

        this->nom = "RIEN";

        this->prenom = "RIEN";

        this->adresse = "RIEN" ;

        this->date_emb = "RIEN";

        this->id_personnel_1 = -1;

    }

    String^ CL_mappPERSONNEL::SELECT(void)

    {

        return "SELECT id_personnel, Nom, Prenom, Adresse_Perso, Date_Embauche, Id_Personnel_1 " +

            "FROM TB_Personnel "  ;

            /*"WHERE(id_personne = " + this->id_facture + ");";*/

    }

    String^ CL_mappPERSONNEL::SELECTBYIDPERSONNEL(void)

    {

        return "SELECT id_personnel, nom, prenom, adresse, date_emb  " +

            "FROM TB_PERSONNEL " +

            "WHERE(id_personnel_1 = " + this->id_personnel_1 + ");";

    }

    String^ CL_mappPERSONNEL::INSERT(void)

    {

        return "INSERT INTO TB_Personnel " +

            "(Nom, Prenom, Adresse_Perso, Date_Embauche, Id_Personnel_1) " +

            "VALUES('" + this->nom + "', '" + this->prenom + "', '" + this->adresse + "', '" + this->date_emb + "', '" + this->id_personnel_1 + "');SELECT @@IDENTITY;";

    }

    String^ CL_mappPERSONNEL::UPDATE(void)

    {

        return "UPDATE TB_PERSONNEL " +

            "SET Nom ='" + this->nom + "', Prenom ='" + this->prenom + "', Adresse_Perso ='" + this->adresse  + "', Date_Embauche ='" + this->date_emb + "', Id_Personnel_1 ='" + this->id_personnel_1 + "' " +

            "WHERE(id_personnel =  '" + this->id_personnel + "'); ";

    }

    String^ CL_mappPERSONNEL::DELETE(void)

    {

        return "DELETE FROM TB_PERSONNEL " +

            "WHERE(id_personnel = " + this->id_personnel + ");";

    }

    void CL_mappPERSONNEL::setid_personnel(int IdFACTURE)

    {

        if (IdFACTURE > 0)this->id_personnel = IdFACTURE;

    }


    String^ CL_mappPERSONNEL::ALTERTABLE(void)
    {
        return "ALTER TABLE TB_Personnel " +
            " DROP CONSTRAINT FK_Id_Personnel_1";
    }

    String^ CL_mappPERSONNEL::ENABLEKEY()
    {
        return " ALTER TABLE TB_Personnel ADD CONSTRAINT FK_id_personnel_1  FOREIGN KEY(id_personnel_1)  REFERENCES TB_Personnel(id_personnel); ";
    }

    void CL_mappPERSONNEL::setnom(String^ nom)


    {

        if (nom != "")

        {

            this->nom = nom;

        }

    }

    void CL_mappPERSONNEL::setprenom(String^ adressesociete)

    {

        if (adressesociete != "")this->prenom = adressesociete;

    }

    void CL_mappPERSONNEL::setadresse(String^ adressesociete)

    {

        if (adressesociete != "")this->adresse = adressesociete;

    }

    void CL_mappPERSONNEL::setdate_emb(String^ adressesociete)

    {

        if (adressesociete != "")this->date_emb = adressesociete;

    }

    void CL_mappPERSONNEL::setid_personnel_1(int numserv)

    {

        if (numserv > 0)this->id_personnel_1 = numserv;

    }


    ////////////////////////////////////////////////////////

    int CL_mappPERSONNEL::getid_personnel(void)

    {

        return this->id_personnel;

    }

    String^ CL_mappPERSONNEL::getnom(void)

    {

        return this->nom;

    }


    String^ CL_mappPERSONNEL::getprenom(void)

    {

        return this->prenom;

    }

    String^ CL_mappPERSONNEL::getadresse(void)

    {

        return this->adresse;

    }

    String^ CL_mappPERSONNEL::getdate_emb(void)

    {

        return this->date_emb;

    }

    int CL_mappPERSONNEL::getid_personnel_1(void)

    {

        return this->id_personnel_1;

    }


}
