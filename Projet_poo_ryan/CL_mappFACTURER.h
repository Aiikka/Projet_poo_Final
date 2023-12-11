#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappFACTURER

    {

    private:

        int id_client;

        int id_adresse;

    public:

        CL_mappFACTURER(void);

        String^ SELECT(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);

        void setId_adresse(int);
        void setId_client(int);

        int getId_adresse();
        int getId_client();

    };

}

