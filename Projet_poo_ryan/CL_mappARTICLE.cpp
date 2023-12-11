#include "pch.h"
#include "CL_mappARTICLE.h"





namespace NS_Composants

{

    CL_mappARTICLE::CL_mappARTICLE(void)

    {

        this->id_article = -1;

        this->nom_article = "RIEN";

        this->design_article = "RIEN";

        this->reap_article = 0;

        this->id_taux_tva = -1;

        this->cout_achat = -1;

        this->stockarticle = -1;
    }

    String^ CL_mappARTICLE::SELECT(void)

    {

        return "SELECT id_article, nom_article, design_article, Reaprovisionnement_Articile, id_taux_tva, Cout_Achat , stock_article " +

            "FROM TB_Article "  ;

        //return "SELECT SUM(C.Prix_Article * C.quantite_article * (1 - C.Remise_commerciale)) AS ChiffreAffaireMois " +

        //    " FROM TB_Contenir C " +

        //    " INNER JOIN TB_Commande Cmd ON " +

        //    " C.Id_Commande = Cmd.Id_Commande " +

        // /*   " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +*/

        //    "WHERE   MONTH(Cmd.Date_emi) = 12--Mars AND YEAR(Cmd.Date_emi) = 2020; --Année 2023; ";


  /*      SELECT
            SUM(C.Prix_Article * C.quantite_article * (1 - C.Remise_commerciale)) AS ChiffreAffaireMois
            FROM
            TB_Contenir C
            INNER JOIN TB_Commande Cmd ON
            C.Id_Commande = Cmd.Id_Commande
            WHERE
            MONTH(Cmd.Date_emi) = 12--Mars
            AND YEAR(Cmd.Date_emi) = 2020; --Année 2023*/



    }

    String^ CL_mappARTICLE::SELECTbyIDTAUX(void)

    {

        return "SELECT id_article, nom_article, design_article, reap_article  " +

            "FROM TB_Article " +

            "WHERE(id_taux_tva = " + this->id_taux_tva + ");";

    }

    String^ CL_mappARTICLE::INSERT(void)

    {

        return "INSERT INTO TB_Article(nom_article, nom_article, Reaprovisionnement_Articile, id_taux_tva,Cout_Achat,stock_article) " +

            "VALUES('" + this->nom_article + "', '" + this->design_article + "', '" + this->reap_article + "', '" + this->id_taux_tva + "', '" + this->cout_achat + "', '" + this->stockarticle + "');";

    }

    String^ CL_mappARTICLE::UPDATE(void)

    {

        return "UPDATE TB_Article " +

            "SET nom_article ='" + this->nom_article + "', design_article ='" + this->design_article + "', Reaprovisionnement_Articile ='" + this->reap_article + "', id_taux_tva ='" + this->id_taux_tva + "', Cout_Achat ='" + this->cout_achat + "', stock_article='" + this->stockarticle + "' "

            "WHERE(id_article =  '" + this->id_article + "'); ";

    }

    String^ CL_mappARTICLE::DELETE(void)

    {

        return "DELETE FROM TB_Article " +

            "WHERE(id_article = " + this->id_article + ");";

    }

    void CL_mappARTICLE::setIdArticle(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->id_article = IdARTICLE;

    }

    void CL_mappARTICLE::setnom_article(String^ nomartcile)

    {

        if (nomartcile != "")this->nom_article = nomartcile;

    }


    void CL_mappARTICLE::setdesign_article(String^ design)

    {

        if (design != "")this->design_article = design;

    }


    void CL_mappARTICLE::setreap_article(int reap)

    {

        if (reap > 0)this->reap_article = reap;

    }

    void CL_mappARTICLE::setid_taux_tva(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->id_taux_tva = IdARTICLE;

    }

    void CL_mappARTICLE::setcout_achat(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->cout_achat = IdARTICLE;

    }

    void CL_mappARTICLE::setstock(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->stockarticle = IdARTICLE;

    }

    ////////////////////////////////////////////////////////////////////////////////

    int CL_mappARTICLE::getIdArticle(void)

    {

        return this->id_article;

    }

    String^ CL_mappARTICLE::getnom_article(void)

    {

        return this->nom_article;

    }


    String^ CL_mappARTICLE::getdesign_article(void)

    {

        return this->design_article;

    }

    int CL_mappARTICLE::getreap_article(void)

    {

        return this->reap_article;

    }

    int CL_mappARTICLE::getid_taux_tva(void)

    {

        return this->id_taux_tva;

    }

    int CL_mappARTICLE::getcout_achat(void)

    {

        return this->cout_achat;

    }

    int CL_mappARTICLE::getstock(void)

    {

        return this->stockarticle;

    }

}

