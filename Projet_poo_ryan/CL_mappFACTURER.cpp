#include "pch.h"
#include "CL_mappFACTURER.h"





namespace NS_Composants

{

    CL_mappFACTURER::CL_mappFACTURER(void)

    {

        this->id_client = -1;

        this->id_adresse = -1;

    }

    String^ CL_mappFACTURER::SELECT(void)

    {

        return"select Tb_Adresse.id_adresse, ville , cp  from TB_Adresse  Inner join  TB_Facturer on Tb_Adresse.id_adresse = TB_Facturer.id_adresse where( TB_Facturer.id_Client = " + this->getId_client() + " ); ";

    }


    String^ CL_mappFACTURER::INSERT(void)

    {

        return "INSERT INTO TB_Facturer(id_Client, id_adresse) " +

            "VALUES('" + this->getId_client() + "', '" + this->getId_adresse() + "');";

    }

    String^ CL_mappFACTURER::UPDATE(void)

    {

        return "UPDATE TB_Facturer " +

            "SET id_Client ='" + this->id_client + "', id_adresse ='" + this->getId_adresse() + "' " +

            "WHERE(id_adresse =  '" + this->getId_adresse() + "'); ";


    }

    String^ CL_mappFACTURER::DELETE(void)

    {

        return "DELETE FROM ARTICLE " +

            "WHERE(id_article = " + this->id_client + ");";

    }

    void CL_mappFACTURER::setId_adresse(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_adresse = Id_adresse;
    }

    void CL_mappFACTURER::setId_client(int  Id_adresse)
    {
        if (Id_adresse > 0)this->id_client = Id_adresse;
    }

    int CL_mappFACTURER::getId_adresse(void)
    {
        return this->id_adresse;
    }

    int CL_mappFACTURER::getId_client(void)
    {
        return this->id_client;
    }



}
