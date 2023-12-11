#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappFACTURE

    {

    private:

        int id_facture;

        String^ nom_societe;

        String^ adresse_societe;

        int numeroservice_client;
        
        int id_commande;

    public:

        CL_mappFACTURE(void);

        String^ SELECT(void);

        String^ SELECTBYIDcommande(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);

        void setIdFacture(int);

        void setnom_societe(String^);

        void setadresse_societe(String^);

        void setnumservice_client(int);

        void setid_commande(int);

        ////////////////////////////////

        int getIdFacture(void);

        String^ getnom_societe(void);

        String^ getadresse_societe(void);

        int getnumeroservice_client(void);

        int getid_commande(void);

    };

}


