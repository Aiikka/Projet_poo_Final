#include "SVC_gestionStat.h"


namespace NS_SVC

{

    CL_svc_gestionStat::CL_svc_gestionStat(void)
    {

        this->CAD = gcnew NS_Composants::CL_CAD();



    }

    String^ CL_svc_gestionStat::requete1(void)

    {

        return "SELECT AVG((C.Prix_Article* (1 - C.Remise_commerciale )* (1 + T.Taux_TVA ))) AS PanierMoyenApresRemiseTVA " +

            " FROM TB_Contenir C " +

            " JOIN TB_Article A ON C.Id_Article = A.Id_Article " +

            " JOIN TB_Taux_tva T ON A.Id_taux_tva = T.Id_taux_tva " +

            /*   " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +*/

            " WHERE   C.Remise_commerciale IS NOT NULL AND C.Prix_Article IS NOT NULL; ";


    }


    DataSet^ CL_svc_gestionStat::listeRequete_one(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete1(), dataTableName);

        return this->ds;

    }

    String^ CL_svc_gestionStat::requete2(int mois)

    {

        return "SELECT SUM(C.Prix_Article * C.quantite_article * (1 - C.Remise_commerciale)) AS ChiffreAffaireMois " +

            " FROM TB_Contenir C " +

            " INNER JOIN TB_Commande Cmd ON " +

            " C.Id_Commande = Cmd.Id_Commande " +

            /*   " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +*/

            " WHERE   MONTH(Cmd.Date_emi) =  " + mois + " --Mars AND YEAR(Cmd.Date_emi) = 2023; --year 2023; ";


    }

    DataSet^ CL_svc_gestionStat::listeRequete_two(int mois,String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete2(mois), dataTableName);

        return this->ds;

    }



    String^ CL_svc_gestionStat::requete3(void)

    {

        return"   SELECT Nom_Article,stock_article,Reaprovisionnement_Articile "
            + "FROM TB_Article " +
            "WHERE(stock_article < Reaprovisionnement_Articile);";


    }


    DataSet^ CL_svc_gestionStat::listeRequete_three(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete3(), dataTableName);

        return this->ds;

    }


    String^ CL_svc_gestionStat::requete4(int id)

    {

        return "SELECT TB_Client.Id_Client, TB_Client.Nom, TB_Client.Prenom, " +

            " SUM(TB_Contenir.Prix_Article * TB_Contenir.Quantite_article * (1 - TB_Contenir.Remise_commerciale)) AS MontantTotalAchats " +

            " FROM TB_Client " +

            " JOIN TB_Commande ON TB_Client.Id_Client = TB_Commande.Id_Client " +

            " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +
            " WHERE (TB_Commande.Id_Client = '" + id + "') " +
            "  GROUP BY  TB_Client.Id_Client, TB_Client.Nom, TB_Client.Prenom; ";


    }

    DataSet^ CL_svc_gestionStat::listeRequete_four(int id,String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows (this->requete4(id), dataTableName);

        return this->ds;

    }

    String^ CL_svc_gestionStat::requete5(void)

    {

        return "SELECT TOP 10 " +

            " Id_Article, SUM(CAST(quantite_article AS INT)) as QuantiteTotaleVendue " +

            " FROM TB_Contenir " +

            " GROUP BY Id_Article " +

            

            /*   " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +*/

            "ORDER BY QuantiteTotaleVendue DESC;  ";


    }

    DataSet^ CL_svc_gestionStat::listeRequete_five(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete5(), dataTableName);

        return this->ds;

    }



    String^ CL_svc_gestionStat::requete6(void)

    {

        return "SELECT TOP 10 " +

            " Id_Article, SUM(CAST(quantite_article AS INT)) as QuantiteTotaleVendue " +

            " FROM TB_Contenir " +

            " GROUP BY Id_Article " +



            /*   " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +*/

            "ORDER BY QuantiteTotaleVendue ASC;  ";


    }

    DataSet^ CL_svc_gestionStat::listeRequete_six(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete6(), dataTableName);

        return this->ds;

    }

    // not done
    String^ CL_svc_gestionStat::requete7(void)

    {


        return "SELECT SUM(TB_Article.stock_article * TB_Contenir.Prix_Article) AS ValeurCommercialeDuStock " +

            " FROM TB_Article " +

            " JOIN " +
          /*   " JOIN  TB_Contenir ON TB_Commande.Id_Commande = TB_Contenir.Id_Commande " +*/

            "TB_Contenir ON TB_Article.Id_Article = TB_Contenir.Id_Article;  ";


    }

    DataSet^ CL_svc_gestionStat::listeRequete_seven(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete7(), dataTableName);

        return this->ds;

    }

    //not done
    String^ CL_svc_gestionStat::requete8(void)

    {

        return "SELECT SUM(Reaprovisionnement_Articile * Cout_Achat) AS ValeurAchatDuStock " +



            "FROM TB_Article; ";


    }

    DataSet^ CL_svc_gestionStat::listeRequete_eight(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete8(), dataTableName);

        return this->ds;

    }

    String^ CL_svc_gestionStat::requete9_1(float marg)
    {
        return" SELECT  SUM(TB_Article.stock_article * TB_Contenir.Prix_Article) * "+ marg + " AS ValeurCommercialeDuStock" +
            "FROM TB_Article" +
            " JOIN"
            " TB_Contenir ON TB_Article.Id_Article = TB_Contenir.Id_Article ";
    }

    String^ CL_svc_gestionStat::requete9_2(float remise)
    {
        return" SELECT  SUM(TB_Article.stock_article * TB_Contenir.Prix_Article) * " + remise + " AS ValeurCommercialeDuStock" +
            "FROM TB_Article" +
            " JOIN"
            " TB_Contenir ON TB_Article.Id_Article = TB_Contenir.Id_Article ";
    }

    String^ CL_svc_gestionStat::requete9_3(float demarq)
    {
        return" SELECT  SUM(TB_Article.stock_article * TB_Contenir.Prix_Article) * " + demarq + " AS ValeurCommercialeDuStock" +
            "FROM TB_Article" +
            " JOIN"
            " TB_Contenir ON TB_Article.Id_Article = TB_Contenir.Id_Article ";
    }

    DataSet^ CL_svc_gestionStat::listeRequete_nine1(String^ dataTableName,float marg)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete9_1(marg), dataTableName);

        return this->ds;
    }

    DataSet^ CL_svc_gestionStat::listeRequete_nine2(String^ dataTableName, float remise)
    {
        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete9_2(remise), dataTableName);

        return this->ds;
    }

    DataSet^ CL_svc_gestionStat::listeRequete_nine3(String^ dataTableName, float demarq)
    {
        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->requete9_2(demarq), dataTableName);
        return this->ds;
    }




}