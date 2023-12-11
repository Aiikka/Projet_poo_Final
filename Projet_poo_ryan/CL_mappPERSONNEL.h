#pragma once

using namespace System;



namespace NS_Composants

{

    ref class CL_mappPERSONNEL

    {

    private:

        int id_personnel;

        String^ nom;

        String^ prenom;

        String^ adresse;

        String^ date_emb;

        int id_personnel_1;



    public:

        CL_mappPERSONNEL(void);

        String^ SELECT(void);

        String^ SELECTBYIDPERSONNEL(void);

        String^ INSERT(void);

        String^ UPDATE(void);

        String^ DELETE(void);

        String^ ALTERTABLE(void);

        String^ ENABLEKEY();


        void setid_personnel(int);

        void setnom(String^);

        void setprenom(String^);

        void setadresse(String^);

        void setdate_emb(String^);

        void setid_personnel_1(int);
        ///////////////////////////////////////

        int getid_personnel(void);

        String^ getnom(void);

        String^ getprenom(void);

        String^ getadresse(void);

        String^ getdate_emb(void);

        int getid_personnel_1(void);

    };

}
