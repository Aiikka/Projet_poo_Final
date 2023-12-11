#include "pch.h"
#include "CL_ADRESSE.h"

namespace NS_Composants
{
    CL_Adresse::CL_Adresse(void)
    {
        this->id_adresse = -1;
        this->ville = "RIEN";
        this->cp = "RIEN";
    }

    String^ CL_Adresse::SELECT(void)
    {
        return "SELECT id_adresse, ville, cp " +
            "FROM TB_Adresse " +
            "WHERE(id_adresse = " + this->id_adresse + ");";

    }

    String^ CL_Adresse::INSERT(void)
    {

        return "INSERT INTO TB_Adresse " + 
            "(ville, cp) " +
            "VALUES('" + this->getville() + "', '" + this->getcp() + "');SELECT @@IDENTITY;";

    }

    String^ CL_Adresse::UPDATE(void)

    {

        return "UPDATE TB_ADRESSE " +

            "SET ville ='" + this->ville + "', cp ='" + this->cp + "' " +

            "WHERE(id_adresse =  '" + this->id_adresse + "'); ";

    }

    String^ CL_Adresse::DELETE(void)

    {

        return "DELETE FROM TB_ADRESSE " +

            "WHERE(id_adresse = " + this->id_adresse + ");";

    }

    void CL_Adresse::setId_adresse(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_adresse = Id_adresse;
    }

    void CL_Adresse::setville(String^ ville)
    {
        if (ville != "")this->ville = ville;
    }


    void CL_Adresse::setcp(String^ cp)
    {
        if (cp != "")this->cp = cp;

    }

    int CL_Adresse::getId_adresse(void)
    {
        return this->id_adresse;
    }

    String^ CL_Adresse::getville(void)
    {
        return this->ville;
    }

    String^ CL_Adresse::getcp(void)
    {
        return this->cp;
    }



}