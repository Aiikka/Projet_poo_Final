#pragma once

namespace NS_Composants {
    using namespace System;

    ref class CL_Adresse
    {
    private:
        int id_adresse;
        String^ ville;
        String^ cp;


    public:
        CL_Adresse(void);
        String^ SELECT();
        String^ UPDATE();
        String^ INSERT();
        String^ DELETE();
        //GETTER 
        int getId_adresse();
        String^ getville();
        String^ getcp();
        //SETTER
        void setId_adresse(int);
        void setville(String^);
        void setcp(String^);



    };

}

