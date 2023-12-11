
#include "pch.h"

#include "SVC_gestionCommande.h"




namespace NS_SVC

{

    CL_svc_gestionCOMMANDE::CL_svc_gestionCOMMANDE(void)

    {

        this->cad = gcnew NS_Composants::CL_CAD();

        this->personne = gcnew NS_Composants::CL_mappPERSONNEL();
        this->commande = gcnew NS_Composants::map_Commande();
        this->article = gcnew NS_Composants::CL_mappARTICLE();
        this->client = gcnew NS_Composants::CL_Client();
        this->paiement = gcnew NS_Composants::map_Paiment();
        this->facture = gcnew NS_Composants::CL_mappFACTURE();
        this->contenir = gcnew NS_Composants::Contenir();

    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommande(String^ dataTableName)

    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);

        return this->ds;

    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_Client(String^ dataTableName)
    {
        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECTbyId_Client(), dataTableName);

        return this->ds;
    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_Personnel(String^ dataTableName)
    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->commande->SELECTbyId_Personnel(), dataTableName);

        return this->ds;

    }


    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_paiment(int id, String^ dataTableName)
    {

        this->ds = gcnew DataSet();

        this->paiement->setId_commande(id);

        this->ds = this->cad->getRows(this->paiement->SELECTbyId_commande(), dataTableName);

        return this->ds;

    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeById_facture(int id, String^ dataTableName)
    {

        this->ds = gcnew DataSet();

        this->facture->setid_commande(id);

        this->ds = this->cad->getRows(this->facture->SELECTBYIDcommande(), dataTableName);

        return this->ds;

    }

    DataSet^ CL_svc_gestionCOMMANDE::listeCommandeArticle(int id, String^ dataTableName)
    {

        this->ds = gcnew DataSet();

        this->contenir->setId_commande(id);
        //this->contenir->setId_article(id_art);
        //this->ds = this->cad->getRows(this->article->SELECTNom(), dataTableName);
        this->ds = this->cad->getRows(this->contenir->SELECTbyId_commande(), dataTableName);

        return this->ds;

    }

    void CL_svc_gestionCOMMANDE::ajouter(String^ ref, String^ date_cmd, String^ date_liv, int id_cl, int id_perso, array<String^>^ paiement, array<String^>^ contenir)
    {
        int id1, i;
        this->commande->setNom_commande(ref);
        this->commande->setdate_commande(date_cmd);
        this->commande->setdate_liv(date_liv);
        this->commande->setId_Client(id_cl);
        this->commande->setId_Personnel(id_perso);


        id1 = this->cad->actionRowsID(this->commande->INSERT());
        /* id2 = this->cad->actionRowsID(this->article->INSERT());*/


        for (i = 0; i < paiement->Length - 1; i++)
        {

            this->paiement->setDate_Paiement(paiement[i]); i++;
            this->paiement->setMoyen_Paiement(paiement[i]);
            this->paiement->setId_commande(id1);
            this->cad->actionRows(this->paiement->INSERT());

        }
        for (i = 0; i < contenir->Length - 1; i++)
        {

            this->contenir->setId_commande(id1);
            this->contenir->setId_article(Convert::ToInt32(contenir[i]));i++;
            this->contenir->setQuantite(Convert::ToInt32(contenir[i])); i++;
            this->contenir->setPrix(Convert::ToDouble(contenir[i])); i++;
            this->contenir->setRemise_commerciale(Convert::ToDouble(contenir[i]));
            this->cad->actionRows(this->contenir->INSERT());



        }



    }




    void CL_svc_gestionCOMMANDE::modifier(int id, String^ ref, String^ date_cmd, String^ date_liv, int id_cl, int id_perso, array<String^>^ paiement, array<String^>^ contenir)

    {

        int id1, i;
        this->commande->setId_Commande(id);
        this->commande->setNom_commande(ref);
        this->commande->setdate_commande(date_cmd);
        this->commande->setdate_liv(date_liv);
        this->commande->setId_Client(id_cl);
        this->commande->setId_Personnel(id_perso);


        id1 = this->cad->actionRowsID(this->commande->UPDATE());
        /* id2 = this->cad->actionRowsID(this->article->INSERT());*/

        for (i = 0; i < paiement->Length - 1; i++)
        {
            this->paiement->setId_commande(id);
            this->paiement->setId_paiement(Convert::ToInt32(paiement[i])); i++;
            this->paiement->setDate_Paiement(paiement[i]); i++;
            this->paiement->setMoyen_Paiement(paiement[i]);
            this->cad->actionRows(this->paiement->UPDATE());

        }
        for (i = 0; i < contenir->Length - 1; i++)
        {

            this->contenir->setId_commande(id);
            this->contenir->setId_article(Convert::ToInt32(contenir[i]));i++;
            this->contenir->setPrix(Convert::ToDouble(contenir[i])); i++;
            this->contenir->setQuantite(Convert::ToInt32(contenir[i])); i++;
            this->contenir->setRemise_commerciale(Convert::ToDouble(contenir[i]));
            this->cad->actionRows(this->contenir->UPDATE());


        }



    }




    void CL_svc_gestionCOMMANDE::supprimer(int id_cm)

    {

        
        this->commande->setId_Commande(id_cm);
        this->paiement->setId_commande(id_cm);
        this->contenir->setId_commande(id_cm);
        this->cad->actionRows(this->paiement->ALTERTABLE());
        this->cad->actionRows(this->contenir->ALTERTABLE());
        this->cad->actionRows(this->commande->DELETE());
        this->cad->actionRows(this->paiement->DELETE());
        this->cad->actionRows(this->contenir->DELETE());
        this->cad->actionRows(this->paiement->ENABLEKey());
        this->cad->actionRows(this->contenir->ENABLEKEY());
       

    }

}
