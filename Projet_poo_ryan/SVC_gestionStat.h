#pragma once

#include "CL_CAD.h"





using namespace System::Data;

using namespace System::Data::SqlClient;

using namespace System::Xml;

using namespace System;



namespace NS_SVC

{

    ref class CL_svc_gestionStat

    {

    private:

        NS_Composants::CL_CAD^ CAD;

        DataSet^ ds;

    public:

        CL_svc_gestionStat(void);

        String^ requete1(void);
        DataSet^ listeRequete_one(String^);

        String^ requete2(int);
        DataSet^ listeRequete_two(int,String^);

        String^ requete3(void);
        DataSet^ listeRequete_three(String^);

        String^ requete4(int);
        DataSet^ listeRequete_four(int,String^);

        String^ requete5(void);
        DataSet^ listeRequete_five(String^);

        String^ requete6(void);
        DataSet^ listeRequete_six(String^);

        String^ requete7(void);
        DataSet^ listeRequete_seven(String^);


        String^ requete8(void);
        DataSet^ listeRequete_eight(String^);

        String^ requete9_1 (float);
        String^ requete9_2 (float);
        String^ requete9_3 (float);
        DataSet^ listeRequete_nine1(String^,float);
        DataSet^ listeRequete_nine2(String^, float);
        DataSet^ listeRequete_nine3(String^, float);
        //DataSet^ listeRequete_two(String^);
        //DataSet^ listeRequete_three(String^);
        //DataSet^ listeRequete_four(String^);
        //DataSet^ listeRequete_five(String^);
        //DataSet^ listeRequete_six(String^);
        //DataSet^ listeRequete_seven(String^);
        //DataSet^ listeRequete_eight(String^);


    };

}

