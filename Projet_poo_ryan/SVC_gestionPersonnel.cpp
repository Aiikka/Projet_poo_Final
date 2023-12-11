
#include "pch.h"

#include "SVC_gestionPersonnel.h"




namespace NS_SVC

{

    CL_svc_gestionPersonnel::CL_svc_gestionPersonnel(void)

    {

        this->cad = gcnew NS_Composants::CL_CAD();

        this->personne = gcnew NS_Composants::CL_mappPERSONNEL();


    }



    DataSet^ CL_svc_gestionPersonnel::listePersonnels(String^ dataTableName)

    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);

        return this->ds;

    }

    DataSet^ CL_svc_gestionPersonnel::listePersonnelsBY_SUP(String^ dataTableName)

    {

        this->ds = gcnew DataSet();

        this->ds = this->cad->getRows(this->personne->SELECTBYIDPERSONNEL(), dataTableName);

        return this->ds;

    }


    

    void CL_svc_gestionPersonnel::ajouter(String^ nomm, String^ prenom, String^ adresse , String^ date_emb, int perso1  )

    {

        int id;

        

       

        this->personne->setnom(nomm);

        this->personne->setprenom(prenom);

        this->personne->setadresse(adresse);

        this->personne->setdate_emb(date_emb);

        this->personne->setid_personnel_1(perso1);

        

        id = this->cad->actionRowsID(this->personne->INSERT());



        

    }

    void CL_svc_gestionPersonnel::modifier(int id_personne, String^ nom, String^ prenom, String^ adresse, String^ date_emb , int perso1)

    {

        



        this->personne->setid_personnel(id_personne);

        this->personne->setnom(nom);

        this->personne->setprenom(prenom);

        this->personne->setadresse(adresse);

        this->personne->setdate_emb(date_emb);

        this->personne->setid_personnel_1(perso1);

        this->cad->actionRows(this->personne->UPDATE());







    }

    void CL_svc_gestionPersonnel::supprimer(int idPersonne)

    {

        this->personne->setid_personnel(idPersonne);
        this->cad->actionRows(this->personne->ALTERTABLE());
        this->cad->actionRows(this->personne->DELETE());
        this->cad->actionRows(this->personne->ENABLEKEY());

    }

}
