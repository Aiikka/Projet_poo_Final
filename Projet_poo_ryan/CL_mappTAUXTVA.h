#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappTAUXTVA

    {

    private:

        int id_taux_tva;

        int taux_tva;

    public:

        CL_mappTAUXTVA(void);

        String^ SELECT(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);
        //////////////////////////////////

        void setid_taux_tva(int);

        void settaux_tva(int);

        ///////////////////////////////////////////////

        int getid_taux_tva(void);

        int gettaux_tva(void);

    };

}


