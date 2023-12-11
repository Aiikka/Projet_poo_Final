

#include "pch.h"
#include "CL_mappTAUXTVA.h"






namespace NS_Composants

{

    CL_mappTAUXTVA::CL_mappTAUXTVA(void)

    {

        this->id_taux_tva = -1;

        this->taux_tva = 0;

    }

    String^ CL_mappTAUXTVA::SELECT(void)

    {

        return "SELECT id_taux_tva, taux_tva " +

            "FROM TB_Taux ";

    }

    String^ CL_mappTAUXTVA::INSERT(void)

    {

        return "INSERT INTO TB_Taux(taux_tva) " +

            "VALUES('" + this->taux_tva + ");";

    }

    String^ CL_mappTAUXTVA::UPDATE(void)

    {

        return "UPDATE TB_Taux " +

            "SET taux_tva ='" + this->taux_tva + "' " +

            "WHERE(id_taux_tva =  " + this->id_taux_tva + "); ";

    }

    String^ CL_mappTAUXTVA::DELETE(void)

    {

        return "DELETE FROM TB_Taux " +

            "WHERE(id_taux_tva = " + this->id_taux_tva + ");";

    }


    void CL_mappTAUXTVA::setid_taux_tva(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->id_taux_tva = IdARTICLE;

    }

    void CL_mappTAUXTVA::settaux_tva(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->taux_tva = IdARTICLE;

    }

    ////////////////////////////////////////////////////////////////////////////////



    int CL_mappTAUXTVA::getid_taux_tva(void)

    {

        return this->id_taux_tva;

    }

    int CL_mappTAUXTVA::gettaux_tva(void)

    {

        return this->taux_tva;

    }


}

