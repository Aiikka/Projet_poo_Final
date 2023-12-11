#include "MyForm.h"
#include "pch.h"


using namespace System;

using namespace System::Windows::Forms;


[STAThreadAttribute]

int __clrcall WinMain(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Projetpooryan::MyForm mainFRM;

    Application::Run(% mainFRM);

}