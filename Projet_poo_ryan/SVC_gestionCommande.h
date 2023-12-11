#pragma once

#include "CL_CAD.h"

#include "CL_mappPERSONNEL.h"
#
#include"contenir.h"
#include"map_Paiment.h"
#include"map_commande.h"
#include"CL_mappARTICLE.h"
#include"CL_mappFACTURE.h"
#include"CL_Client.h"

using namespace System::Data;

using namespace System::Data::SqlClient;

using namespace System::Xml;

using namespace System;



namespace NS_SVC

{

    ref class CL_svc_gestionCOMMANDE

    {

    private:

        NS_Composants::CL_CAD^ cad;
        NS_Composants::map_Commande^ commande;
        NS_Composants::CL_mappPERSONNEL^ personne;
        NS_Composants::Contenir^ contenir;
        NS_Composants::map_Paiment^ paiement;
        NS_Composants::CL_mappARTICLE^ article;
        NS_Composants::CL_Client^ client;
        NS_Composants::CL_mappFACTURE^ facture;
        DataSet^ ds;

    public:

        CL_svc_gestionCOMMANDE(void);

        DataSet^ listeCommande(String^);

        DataSet^ listeCommandeById_Client(String^);

        DataSet^ listeCommandeById_Personnel(String^);

        DataSet^ listeCommandeById_paiment(int,String^);

        DataSet^ listeCommandeById_facture(int, String^);

        DataSet^ listeCommandeArticle(int, String^);

        void ajouter(String^ ref, String^ date_cmd, String^ date_liv, int id_cl, int id_perso, array<String^>^ paiement, array<String^>^ contenir);

        void modifier(int id_personne, String^ ref, String^ date_cmd, String^ date_liv, int id_cl, int id_perso, array<String^>^ paiement, array<String^>^ contenir);

        void supprimer(int);

    };

}

