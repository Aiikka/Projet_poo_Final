#include "pch.h"
#include "SVC_gestionArticle.h"



namespace NS_SVC

{

    CL_svc_gestionARTICLE::CL_svc_gestionARTICLE(void)
    {

        this->CAD = gcnew NS_Composants::CL_CAD();
        this->article = gcnew NS_Composants::CL_mappARTICLE();
        this->contenir = gcnew NS_Composants::Contenir();
        

    }

    DataSet^ CL_svc_gestionARTICLE::listeSTOCK(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->article->SELECT(), dataTableName);
        return this->ds;

    }



    void CL_svc_gestionARTICLE::ajouter(String^ nomarticle, String^ design , int reap, int taux,int cout,int stock)
    {
        
        int id;

        this->article->setnom_article(nomarticle);
        this->article->setdesign_article(design);
        this->article->setreap_article(reap);
        this->article->setid_taux_tva(taux);
        this->article->setcout_achat(cout);
        this->article->setstock(stock);
 /*     this->client->setPrenom(prenom);
        this->client->setdate_nais(date_nais);*/


       id = this->CAD->actionRowsID(this->article->INSERT());




    }

    void CL_svc_gestionARTICLE::CL_svc_gestionARTICLE::modifier(int id_article, String^ nomarticle, String^ design, int reap, int taux , int cout,int stock)
    {

    
        this->article->setIdArticle(id_article);
        
        this->article->setnom_article(nomarticle);
        this->article->setdesign_article(design);
        this->article->setreap_article(reap);
        this->article->setid_taux_tva(taux);
        this->article->setcout_achat(cout);
        this->article->setstock(stock);
      

        this->CAD->actionRows(this->article->UPDATE());

    }

    void CL_svc_gestionARTICLE::supprimer(int id_article)
    {
        this->article->setIdArticle(id_article);
        this->CAD->actionRows(this->article->DELETE());

    }

}