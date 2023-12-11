#pragma once

#include "CL_CAD.h"

#include "CL_mappPERSONNEL.h"




using namespace System::Data;

using namespace System::Data::SqlClient;

using namespace System::Xml;

using namespace System;



namespace NS_SVC

{

    ref class CL_svc_gestionPersonnel

    {

    private:

        NS_Composants::CL_CAD^ cad;

        NS_Composants::CL_mappPERSONNEL^ personne;

        DataSet^ ds;

    public:

        CL_svc_gestionPersonnel(void);

        DataSet^ listePersonnels(String^);

        DataSet^ listePersonnelsBY_SUP(String^);

        void ajouter(String^, String^, String^ , String^ , int);

        void modifier(int, String^, String^, String^ , String^ , int);

        void supprimer(int);

    };

}




