#pragma once
namespace NS_Composants {
    using namespace System;

    ref class CL_Client
    {
    private:
        int id_Client;
        String^ Nom;
        String^ Prenom;
        String^ date_nais;
    public:
        CL_Client(void);
        String^ SELECT(void);
        String^ UPDATE(void);
        String^ INSERT(void);
        String^ DELETE(void);
        //GETTER
        int getId_Client();
        String^ getNom();
        String^ getPrenom();
        String^ getdate_nais();
        //SETTER
        void setId_Client(int);
        void setNom(String^);
        void setPrenom(String^);
        void setdate_nais(String^);


    };

}

