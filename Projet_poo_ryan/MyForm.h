#pragma once
#include "CL_CAD.h"
#include"SVC_gestionCommande.h"
#include"CL_svc_gestionClient.h"
#include"SVC_gestionPersonnel.h"
#include"SVC_gestionArticle.h"
#include"CL_mappFACTURE.h"
#include"SVC_gestionStat.h"
namespace Projetpooryan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;

	private: NS_SVC::CL_svc_gestionCOMMANDE^ commande;
	private: NS_SVC::CL_svc_gestionPersonnel^ personnel;
	private: NS_SVC::CL_svc_gestionClient^ client;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ text_persnnel_adresse;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ text_personnel_prenom;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ text_id;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text_persnnel_date;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ text_client_date;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ text_client_prenom;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ text_client_nom;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ text_client_id;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ text_commande_id;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ text_commande_datel;

	private: System::Windows::Forms::TextBox^ text_commande_datec;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ text_commande_nom;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ text_article_reap;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ text_article_nom;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ text_article_id;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ text_personnel_nom;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ suivant_client;

	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;





	private: NS_SVC::CL_svc_gestionClient^ gestionClients;
	private: NS_SVC::CL_svc_gestionPersonnel^ gestionPersonnel;
	private: NS_SVC::CL_svc_gestionCOMMANDE^ gestionCommande;
	private: NS_SVC::CL_svc_gestionARTICLE^ gestionStock;
	private: NS_SVC::CL_svc_gestionStat^ gestionStat;
		   
		   //gestion stat apres

	private: DataSet^ dsPersonnel;   //personnel
	private: DataSet^ dsPersonne;   //client
	private: DataSet^ dsStock;      //article

	private: DataSet^ dsStat;


	private: DataSet^ dsCommande;  //commande

	private: DataSet^ dsPersonneAdresses;
	private: DataSet^ dsPersonneAdressesn;
	private: DataSet^ dscommandepaiment;
	private: DataSet^ dscommandearticle;
	private: DataSet^ dscommandefacture;



	private: DataSet^ ds;

	private: String^ mode;

	private: int index;
	private: int indexclient;
	private: int indexcommande;
	private: int indexarticle;

	private: int rowsCount;     //client
	private: int rowsCount_personnel;   //personnel

	private: int rowsCount_commande;  // commande

	private: int rowsCount_stock;   //article
	private: int id;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ text_personnel_sup;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ text_article_design;
	private: System::Windows::Forms::DataGridView^ dataGridView7;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ text_commande_perso;

	private: System::Windows::Forms::TextBox^ text_commande_client;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ text_article_taux;
	private: System::Windows::Forms::TextBox^ text_article_cout;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ buttonRq1;


	private: System::Windows::Forms::Panel^ panelRq1;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ text_rq1;
	private: System::Windows::Forms::Panel^ panelRq2;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ text_Rq2;
	private: System::Windows::Forms::TextBox^ text_Rq2_Resultat;


	private: System::Windows::Forms::Label^ label25;

	private: System::Windows::Forms::Panel^ panelRq3;
	private: System::Windows::Forms::Label^ label27;

	private: System::Windows::Forms::Panel^ panelRq4;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ text_Rq4;
	private: System::Windows::Forms::Label^ label29;

	private: System::Windows::Forms::Panel^ panelRq5;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Panel^ panelRq6;
	private: System::Windows::Forms::Label^ label31;

	private: System::Windows::Forms::Panel^ panelRq7;
	private: System::Windows::Forms::TextBox^ text_Rq7;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Panel^ panelRq8;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ text_Rq8;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ text_article_stock;
private: System::Windows::Forms::DataGridView^ dataGridView8;
private: System::Windows::Forms::DataGridView^ dataGridView9;
private: System::Windows::Forms::Button^ enter_rq2;
private: System::Windows::Forms::DataGridView^ dataGridView10;
private: System::Windows::Forms::Button^ send_rq4;
private: System::Windows::Forms::DataGridView^ dataGridView11;
private: System::Windows::Forms::DataGridView^ dataGridView12;
private: System::Windows::Forms::DataGridView^ dataGridView13;
private: System::Windows::Forms::DataGridView^ dataGridView14;
private: System::Windows::Forms::DataGridView^ dataGridView15;
private: System::Windows::Forms::Panel^ panelRq9;
private: System::Windows::Forms::RadioButton^ marge_15;

private: System::Windows::Forms::RadioButton^ marge_10;

private: System::Windows::Forms::RadioButton^ marge_5;
private: System::Windows::Forms::RadioButton^ demarq_5;



private: System::Windows::Forms::RadioButton^ demarq_3;


private: System::Windows::Forms::RadioButton^ demarq_2;


private: System::Windows::Forms::RadioButton^ remise_6;

private: System::Windows::Forms::RadioButton^ remise_5;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ text_demarq;
private: System::Windows::Forms::TextBox^ text_remise;
private: System::Windows::Forms::TextBox^ text_marg;
private: System::Windows::Forms::Button^ Variation;
private: System::Windows::Forms::DataGridView^ dataGridView16;
private: System::Windows::Forms::DataGridView^ dataGridView17;





















	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->text_personnel_sup = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->text_personnel_nom = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->text_persnnel_date = (gcnew System::Windows::Forms::TextBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->text_persnnel_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->text_personnel_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text_id = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->text_client_date = (gcnew System::Windows::Forms::TextBox());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->text_client_prenom = (gcnew System::Windows::Forms::TextBox());
			this->suivant_client = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->text_client_nom = (gcnew System::Windows::Forms::TextBox());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->text_client_id = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->text_commande_perso = (gcnew System::Windows::Forms::TextBox());
			this->text_commande_client = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->text_commande_datel = (gcnew System::Windows::Forms::TextBox());
			this->text_commande_datec = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->text_commande_nom = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->text_commande_id = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->text_article_stock = (gcnew System::Windows::Forms::TextBox());
			this->text_article_cout = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->text_article_taux = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->text_article_design = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->text_article_reap = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->text_article_nom = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->text_article_id = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->buttonRq1 = (gcnew System::Windows::Forms::Button());
			this->panelRq1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->text_rq1 = (gcnew System::Windows::Forms::TextBox());
			this->panelRq2 = (gcnew System::Windows::Forms::Panel());
			this->enter_rq2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->text_Rq2 = (gcnew System::Windows::Forms::TextBox());
			this->text_Rq2_Resultat = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panelRq3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView13 = (gcnew System::Windows::Forms::DataGridView());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panelRq4 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
			this->send_rq4 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->text_Rq4 = (gcnew System::Windows::Forms::TextBox());
			this->panelRq5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panelRq6 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panelRq7 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView14 = (gcnew System::Windows::Forms::DataGridView());
			this->text_Rq7 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panelRq8 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView15 = (gcnew System::Windows::Forms::DataGridView());
			this->text_Rq8 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panelRq9 = (gcnew System::Windows::Forms::Panel());
			this->Variation = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->text_demarq = (gcnew System::Windows::Forms::TextBox());
			this->text_remise = (gcnew System::Windows::Forms::TextBox());
			this->text_marg = (gcnew System::Windows::Forms::TextBox());
			this->demarq_5 = (gcnew System::Windows::Forms::RadioButton());
			this->demarq_3 = (gcnew System::Windows::Forms::RadioButton());
			this->demarq_2 = (gcnew System::Windows::Forms::RadioButton());
			this->remise_6 = (gcnew System::Windows::Forms::RadioButton());
			this->remise_5 = (gcnew System::Windows::Forms::RadioButton());
			this->marge_15 = (gcnew System::Windows::Forms::RadioButton());
			this->marge_10 = (gcnew System::Windows::Forms::RadioButton());
			this->marge_5 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView16 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView17 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panel4->SuspendLayout();
			this->panelRq1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
			this->panelRq2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->BeginInit();
			this->panelRq3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView13))->BeginInit();
			this->panelRq4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->BeginInit();
			this->panelRq5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->BeginInit();
			this->panelRq6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->BeginInit();
			this->panelRq7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView14))->BeginInit();
			this->panelRq8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView15))->BeginInit();
			this->panelRq9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView17))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(363, 1);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Commande";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(543, 1);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 1);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Personnel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->Location = System::Drawing::Point(731, 1);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(213, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Statistique";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 1);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->text_personnel_sup);
			this->panel1->Controls->Add(this->button23);
			this->panel1->Controls->Add(this->button22);
			this->panel1->Controls->Add(this->button24);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->text_personnel_nom);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->text_persnnel_date);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->text_persnnel_adresse);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->text_personnel_prenom);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->text_id);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(9, 47);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(696, 455);
			this->panel1->TabIndex = 6;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(21, 268);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(133, 16);
			this->label18->TabIndex = 26;
			this->label18->Text = L"personnel supreviser";
			// 
			// text_personnel_sup
			// 
			this->text_personnel_sup->Location = System::Drawing::Point(22, 287);
			this->text_personnel_sup->Name = L"text_personnel_sup";
			this->text_personnel_sup->Size = System::Drawing::Size(182, 22);
			this->text_personnel_sup->TabIndex = 25;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(9, 367);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 24;
			this->button23->Text = L"<<";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(22, 313);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(94, 46);
			this->button22->TabIndex = 18;
			this->button22->Text = L"Ajouter";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(252, 367);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 23;
			this->button24->Text = L">>";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(20, 135);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 16);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Nom";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(90, 367);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 22;
			this->button25->Text = L"<";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// text_personnel_nom
			// 
			this->text_personnel_nom->Location = System::Drawing::Point(22, 151);
			this->text_personnel_nom->Name = L"text_personnel_nom";
			this->text_personnel_nom->Size = System::Drawing::Size(182, 22);
			this->text_personnel_nom->TabIndex = 8;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(171, 367);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 21;
			this->button26->Text = L">";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(233, 10);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(445, 351);
			this->dataGridView1->TabIndex = 10;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(126, 396);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(92, 50);
			this->button27->TabIndex = 20;
			this->button27->Text = L"Afficher";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(122, 313);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(92, 48);
			this->button28->TabIndex = 19;
			this->button28->Text = L"modifier";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// text_persnnel_date
			// 
			this->text_persnnel_date->Location = System::Drawing::Point(22, 240);
			this->text_persnnel_date->Name = L"text_persnnel_date";
			this->text_persnnel_date->Size = System::Drawing::Size(182, 22);
			this->text_persnnel_date->TabIndex = 7;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(24, 396);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(92, 50);
			this->button29->TabIndex = 18;
			this->button29->Text = L"Supprimer";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date_Embauche";
			// 
			// text_persnnel_adresse
			// 
			this->text_persnnel_adresse->Location = System::Drawing::Point(22, 193);
			this->text_persnnel_adresse->Name = L"text_persnnel_adresse";
			this->text_persnnel_adresse->Size = System::Drawing::Size(182, 22);
			this->text_persnnel_adresse->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"adresse";
			// 
			// text_personnel_prenom
			// 
			this->text_personnel_prenom->Location = System::Drawing::Point(22, 106);
			this->text_personnel_prenom->Name = L"text_personnel_prenom";
			this->text_personnel_prenom->Size = System::Drawing::Size(182, 22);
			this->text_personnel_prenom->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prenom";
			// 
			// text_id
			// 
			this->text_id->Location = System::Drawing::Point(23, 59);
			this->text_id->Name = L"text_id";
			this->text_id->Size = System::Drawing::Size(181, 22);
			this->text_id->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id_Personnel";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->dataGridView5);
			this->panel3->Controls->Add(this->button30);
			this->panel3->Controls->Add(this->dataGridView2);
			this->panel3->Controls->Add(this->button31);
			this->panel3->Controls->Add(this->text_client_date);
			this->panel3->Controls->Add(this->button32);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->button33);
			this->panel3->Controls->Add(this->text_client_prenom);
			this->panel3->Controls->Add(this->suivant_client);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button35);
			this->panel3->Controls->Add(this->text_client_nom);
			this->panel3->Controls->Add(this->button36);
			this->panel3->Controls->Add(this->button37);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->text_client_id);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(7, 47);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(520, 301);
			this->panel3->TabIndex = 7;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// dataGridView5
			// 
			this->dataGridView5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(194, 153);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(310, 115);
			this->dataGridView5->TabIndex = 33;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(10, 232);
			this->button30->Margin = System::Windows::Forms::Padding(2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(56, 19);
			this->button30->TabIndex = 32;
			this->button30->Text = L"<<";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(194, 30);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(310, 115);
			this->dataGridView2->TabIndex = 8;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(20, 187);
			this->button31->Margin = System::Windows::Forms::Padding(2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(70, 37);
			this->button31->TabIndex = 25;
			this->button31->Text = L"Ajouter";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// text_client_date
			// 
			this->text_client_date->Location = System::Drawing::Point(23, 153);
			this->text_client_date->Margin = System::Windows::Forms::Padding(2);
			this->text_client_date->Name = L"text_client_date";
			this->text_client_date->Size = System::Drawing::Size(156, 22);
			this->text_client_date->TabIndex = 7;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(171, 277);
			this->button32->Margin = System::Windows::Forms::Padding(2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(56, 19);
			this->button32->TabIndex = 31;
			this->button32->Text = L">>";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 135);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 16);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Date_naissance";
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(70, 232);
			this->button33->Margin = System::Windows::Forms::Padding(2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(56, 19);
			this->button33->TabIndex = 30;
			this->button33->Text = L"<";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// text_client_prenom
			// 
			this->text_client_prenom->Location = System::Drawing::Point(23, 116);
			this->text_client_prenom->Margin = System::Windows::Forms::Padding(2);
			this->text_client_prenom->Name = L"text_client_prenom";
			this->text_client_prenom->Size = System::Drawing::Size(156, 22);
			this->text_client_prenom->TabIndex = 5;
			// 
			// suivant_client
			// 
			this->suivant_client->Location = System::Drawing::Point(131, 232);
			this->suivant_client->Margin = System::Windows::Forms::Padding(2);
			this->suivant_client->Name = L"suivant_client";
			this->suivant_client->Size = System::Drawing::Size(56, 19);
			this->suivant_client->TabIndex = 29;
			this->suivant_client->Text = L">";
			this->suivant_client->UseVisualStyleBackColor = true;
			this->suivant_client->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(21, 102);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 16);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Prenom";
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(98, 255);
			this->button35->Margin = System::Windows::Forms::Padding(2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(69, 41);
			this->button35->TabIndex = 28;
			this->button35->Text = L"Afficher";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// text_client_nom
			// 
			this->text_client_nom->Location = System::Drawing::Point(23, 78);
			this->text_client_nom->Margin = System::Windows::Forms::Padding(2);
			this->text_client_nom->Name = L"text_client_nom";
			this->text_client_nom->Size = System::Drawing::Size(156, 22);
			this->text_client_nom->TabIndex = 3;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(98, 188);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(69, 39);
			this->button36->TabIndex = 27;
			this->button36->Text = L"modifier";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(21, 255);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(69, 41);
			this->button37->TabIndex = 26;
			this->button37->Text = L"Supprimer";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 65);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Nom";
			// 
			// text_client_id
			// 
			this->text_client_id->Location = System::Drawing::Point(23, 36);
			this->text_client_id->Margin = System::Windows::Forms::Padding(2);
			this->text_client_id->Name = L"text_client_id";
			this->text_client_id->Size = System::Drawing::Size(156, 22);
			this->text_client_id->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 23);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"id_Client";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->text_commande_perso);
			this->panel5->Controls->Add(this->text_commande_client);
			this->panel5->Controls->Add(this->dataGridView7);
			this->panel5->Controls->Add(this->dataGridView6);
			this->panel5->Controls->Add(this->dataGridView3);
			this->panel5->Controls->Add(this->button13);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->button11);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->text_commande_datel);
			this->panel5->Controls->Add(this->text_commande_datec);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->text_commande_nom);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->text_commande_id);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Location = System::Drawing::Point(11, 70);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1265, 549);
			this->panel5->TabIndex = 7;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(35, 311);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 16);
			this->label21->TabIndex = 23;
			this->label21->Text = L"id_personnel";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(35, 257);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(56, 16);
			this->label20->TabIndex = 22;
			this->label20->Text = L"id_client";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// text_commande_perso
			// 
			this->text_commande_perso->Location = System::Drawing::Point(35, 331);
			this->text_commande_perso->Margin = System::Windows::Forms::Padding(4);
			this->text_commande_perso->Name = L"text_commande_perso";
			this->text_commande_perso->Size = System::Drawing::Size(271, 22);
			this->text_commande_perso->TabIndex = 21;
			// 
			// text_commande_client
			// 
			this->text_commande_client->Location = System::Drawing::Point(35, 277);
			this->text_commande_client->Margin = System::Windows::Forms::Padding(4);
			this->text_commande_client->Name = L"text_commande_client";
			this->text_commande_client->Size = System::Drawing::Size(271, 22);
			this->text_commande_client->TabIndex = 20;
			// 
			// dataGridView7
			// 
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Location = System::Drawing::Point(352, 342);
			this->dataGridView7->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->RowTemplate->Height = 24;
			this->dataGridView7->Size = System::Drawing::Size(601, 144);
			this->dataGridView7->TabIndex = 19;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(352, 191);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(601, 144);
			this->dataGridView6->TabIndex = 18;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(352, 39);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(601, 144);
			this->dataGridView3->TabIndex = 17;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(5, 453);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 28);
			this->button13->TabIndex = 16;
			this->button13->Text = L"<<";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(329, 507);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 28);
			this->button12->TabIndex = 15;
			this->button12->Text = L">>";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(113, 453);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 28);
			this->button11->TabIndex = 14;
			this->button11->Text = L"<";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(221, 453);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 13;
			this->button6->Text = L">";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(199, 489);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(123, 62);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Afficher";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(187, 389);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 59);
			this->button9->TabIndex = 11;
			this->button9->Text = L"modifier";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(43, 489);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(123, 62);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Supprimer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(37, 389);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 57);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Ajouter";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(35, 207);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(95, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"date_Livraison";
			// 
			// text_commande_datel
			// 
			this->text_commande_datel->Location = System::Drawing::Point(35, 233);
			this->text_commande_datel->Margin = System::Windows::Forms::Padding(4);
			this->text_commande_datel->Name = L"text_commande_datel";
			this->text_commande_datel->Size = System::Drawing::Size(271, 22);
			this->text_commande_datel->TabIndex = 6;
			// 
			// text_commande_datec
			// 
			this->text_commande_datec->Location = System::Drawing::Point(35, 178);
			this->text_commande_datec->Margin = System::Windows::Forms::Padding(4);
			this->text_commande_datec->Name = L"text_commande_datec";
			this->text_commande_datec->Size = System::Drawing::Size(271, 22);
			this->text_commande_datec->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(31, 150);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(111, 16);
			this->label12->TabIndex = 4;
			this->label12->Text = L"date_Commande";
			// 
			// text_commande_nom
			// 
			this->text_commande_nom->Location = System::Drawing::Point(35, 114);
			this->text_commande_nom->Margin = System::Windows::Forms::Padding(4);
			this->text_commande_nom->Name = L"text_commande_nom";
			this->text_commande_nom->Size = System::Drawing::Size(268, 22);
			this->text_commande_nom->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(31, 95);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"NomReference";
			// 
			// text_commande_id
			// 
			this->text_commande_id->Location = System::Drawing::Point(32, 62);
			this->text_commande_id->Margin = System::Windows::Forms::Padding(4);
			this->text_commande_id->Name = L"text_commande_id";
			this->text_commande_id->Size = System::Drawing::Size(271, 22);
			this->text_commande_id->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(39, 39);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 16);
			this->label10->TabIndex = 0;
			this->label10->Text = L"id_commande";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label34);
			this->panel6->Controls->Add(this->text_article_stock);
			this->panel6->Controls->Add(this->text_article_cout);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->text_article_taux);
			this->panel6->Controls->Add(this->label19);
			this->panel6->Controls->Add(this->text_article_design);
			this->panel6->Controls->Add(this->dataGridView4);
			this->panel6->Controls->Add(this->button21);
			this->panel6->Controls->Add(this->button20);
			this->panel6->Controls->Add(this->button19);
			this->panel6->Controls->Add(this->button18);
			this->panel6->Controls->Add(this->button17);
			this->panel6->Controls->Add(this->button16);
			this->panel6->Controls->Add(this->button15);
			this->panel6->Controls->Add(this->button14);
			this->panel6->Controls->Add(this->text_article_reap);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->text_article_nom);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Controls->Add(this->text_article_id);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Location = System::Drawing::Point(2, 46);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(722, 413);
			this->panel6->TabIndex = 7;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(14, 246);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 16);
			this->label34->TabIndex = 43;
			this->label34->Text = L"Stock";
			// 
			// text_article_stock
			// 
			this->text_article_stock->Location = System::Drawing::Point(15, 261);
			this->text_article_stock->Margin = System::Windows::Forms::Padding(2);
			this->text_article_stock->Name = L"text_article_stock";
			this->text_article_stock->Size = System::Drawing::Size(114, 22);
			this->text_article_stock->TabIndex = 42;
			// 
			// text_article_cout
			// 
			this->text_article_cout->Location = System::Drawing::Point(16, 223);
			this->text_article_cout->Margin = System::Windows::Forms::Padding(2);
			this->text_article_cout->Name = L"text_article_cout";
			this->text_article_cout->Size = System::Drawing::Size(114, 22);
			this->text_article_cout->TabIndex = 41;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(14, 210);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(83, 16);
			this->label23->TabIndex = 40;
			this->label23->Text = L"cout_d\'achat";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(14, 179);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 16);
			this->label22->TabIndex = 39;
			this->label22->Text = L"Id_taux";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// text_article_taux
			// 
			this->text_article_taux->Location = System::Drawing::Point(16, 191);
			this->text_article_taux->Margin = System::Windows::Forms::Padding(2);
			this->text_article_taux->Name = L"text_article_taux";
			this->text_article_taux->Size = System::Drawing::Size(114, 22);
			this->text_article_taux->TabIndex = 38;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(14, 104);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(93, 16);
			this->label19->TabIndex = 37;
			this->label19->Text = L"Design_article";
			// 
			// text_article_design
			// 
			this->text_article_design->Location = System::Drawing::Point(16, 121);
			this->text_article_design->Margin = System::Windows::Forms::Padding(2);
			this->text_article_design->Name = L"text_article_design";
			this->text_article_design->Size = System::Drawing::Size(114, 22);
			this->text_article_design->TabIndex = 36;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(166, 2);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(520, 321);
			this->dataGridView4->TabIndex = 35;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(65, 330);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(56, 19);
			this->button21->TabIndex = 34;
			this->button21->Text = L"<";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(3, 330);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(56, 19);
			this->button20->TabIndex = 33;
			this->button20->Text = L"<<";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(126, 330);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(56, 19);
			this->button19->TabIndex = 32;
			this->button19->Text = L">";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(187, 330);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(56, 19);
			this->button18->TabIndex = 31;
			this->button18->Text = L">>";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(17, 353);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(74, 32);
			this->button17->TabIndex = 30;
			this->button17->Text = L"Supprimer";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(100, 353);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(63, 35);
			this->button16->TabIndex = 29;
			this->button16->Text = L"Afficher";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(100, 292);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(63, 36);
			this->button15->TabIndex = 28;
			this->button15->Text = L"Modifier";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(17, 288);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(74, 35);
			this->button14->TabIndex = 27;
			this->button14->Text = L"Ajouter";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// text_article_reap
			// 
			this->text_article_reap->Location = System::Drawing::Point(16, 160);
			this->text_article_reap->Margin = System::Windows::Forms::Padding(2);
			this->text_article_reap->Name = L"text_article_reap";
			this->text_article_reap->Size = System::Drawing::Size(114, 22);
			this->text_article_reap->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(14, 147);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(119, 16);
			this->label16->TabIndex = 25;
			this->label16->Text = L"reaprovisionement";
			// 
			// text_article_nom
			// 
			this->text_article_nom->Location = System::Drawing::Point(16, 84);
			this->text_article_nom->Margin = System::Windows::Forms::Padding(2);
			this->text_article_nom->Name = L"text_article_nom";
			this->text_article_nom->Size = System::Drawing::Size(114, 22);
			this->text_article_nom->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 68);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(79, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Nom_article";
			// 
			// text_article_id
			// 
			this->text_article_id->Location = System::Drawing::Point(16, 41);
			this->text_article_id->Margin = System::Windows::Forms::Padding(2);
			this->text_article_id->Name = L"text_article_id";
			this->text_article_id->Size = System::Drawing::Size(114, 22);
			this->text_article_id->TabIndex = 22;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(14, 24);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"id_Article";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->dataGridView16);
			this->panel4->Controls->Add(this->button45);
			this->panel4->Controls->Add(this->button44);
			this->panel4->Controls->Add(this->button43);
			this->panel4->Controls->Add(this->button42);
			this->panel4->Controls->Add(this->button41);
			this->panel4->Controls->Add(this->button40);
			this->panel4->Controls->Add(this->button39);
			this->panel4->Controls->Add(this->button38);
			this->panel4->Controls->Add(this->buttonRq1);
			this->panel4->Location = System::Drawing::Point(7, 57);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(968, 682);
			this->panel4->TabIndex = 7;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(92, 160);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(155, 63);
			this->button45->TabIndex = 8;
			this->button45->Text = L"les produits sous le seuil de réapprovisionnement";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(296, 246);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(155, 50);
			this->button44->TabIndex = 7;
			this->button44->Text = L"la valeur d’achat du stock";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(296, 93);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(155, 50);
			this->button43->TabIndex = 6;
			this->button43->Text = L"les 10 articles les moins vendus";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(296, 169);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(155, 50);
			this->button42->TabIndex = 5;
			this->button42->Text = L"la valeur commerciale du stock";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(184, 321);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(155, 65);
			this->button41->TabIndex = 4;
			this->button41->Text = L"variations de valeurs commerciales pour en déduire la valeur du stock";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(296, 33);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(155, 50);
			this->button40->TabIndex = 3;
			this->button40->Text = L"les 10 articles les plus vendus";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(92, 239);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(155, 65);
			this->button39->TabIndex = 2;
			this->button39->Text = L"montant total des achats pour un client";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(92, 88);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(155, 66);
			this->button38->TabIndex = 1;
			this->button38->Text = L"Calculer le chiffre d’affaire sur un mois en particulier";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// buttonRq1
			// 
			this->buttonRq1->Location = System::Drawing::Point(92, 28);
			this->buttonRq1->Name = L"buttonRq1";
			this->buttonRq1->Size = System::Drawing::Size(155, 50);
			this->buttonRq1->TabIndex = 0;
			this->buttonRq1->Text = L"le panier moyen ";
			this->buttonRq1->UseVisualStyleBackColor = true;
			this->buttonRq1->Click += gcnew System::EventHandler(this, &MyForm::button34_Click_1);
			// 
			// panelRq1
			// 
			this->panelRq1->Controls->Add(this->dataGridView8);
			this->panelRq1->Controls->Add(this->label24);
			this->panelRq1->Controls->Add(this->text_rq1);
			this->panelRq1->Location = System::Drawing::Point(6, 64);
			this->panelRq1->Name = L"panelRq1";
			this->panelRq1->Size = System::Drawing::Size(973, 522);
			this->panelRq1->TabIndex = 7;
			this->panelRq1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panelRq1_Paint);
			// 
			// dataGridView8
			// 
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Location = System::Drawing::Point(21, 27);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->RowHeadersWidth = 51;
			this->dataGridView8->Size = System::Drawing::Size(14, 11);
			this->dataGridView8->TabIndex = 2;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(41, 25);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(249, 16);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Resultat du panier moyen (après remise)";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// text_rq1
			// 
			this->text_rq1->Location = System::Drawing::Point(21, 55);
			this->text_rq1->Multiline = true;
			this->text_rq1->Name = L"text_rq1";
			this->text_rq1->Size = System::Drawing::Size(931, 144);
			this->text_rq1->TabIndex = 0;
			this->text_rq1->TextChanged += gcnew System::EventHandler(this, &MyForm::text_rq1_TextChanged);
			// 
			// panelRq2
			// 
			this->panelRq2->Controls->Add(this->enter_rq2);
			this->panelRq2->Controls->Add(this->dataGridView9);
			this->panelRq2->Controls->Add(this->label26);
			this->panelRq2->Controls->Add(this->text_Rq2);
			this->panelRq2->Controls->Add(this->text_Rq2_Resultat);
			this->panelRq2->Controls->Add(this->label25);
			this->panelRq2->Location = System::Drawing::Point(12, 55);
			this->panelRq2->Name = L"panelRq2";
			this->panelRq2->Size = System::Drawing::Size(959, 571);
			this->panelRq2->TabIndex = 7;
			// 
			// enter_rq2
			// 
			this->enter_rq2->Location = System::Drawing::Point(260, 217);
			this->enter_rq2->Name = L"enter_rq2";
			this->enter_rq2->Size = System::Drawing::Size(94, 36);
			this->enter_rq2->TabIndex = 5;
			this->enter_rq2->Text = L"enter";
			this->enter_rq2->UseVisualStyleBackColor = true;
			this->enter_rq2->Click += gcnew System::EventHandler(this, &MyForm::enter_rq2_Click);
			// 
			// dataGridView9
			// 
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->Location = System::Drawing::Point(121, 53);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->RowHeadersWidth = 51;
			this->dataGridView9->Size = System::Drawing::Size(14, 12);
			this->dataGridView9->TabIndex = 4;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(20, 143);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(143, 16);
			this->label26->TabIndex = 3;
			this->label26->Text = L"Entre le mois concerné";
			// 
			// text_Rq2
			// 
			this->text_Rq2->Location = System::Drawing::Point(23, 163);
			this->text_Rq2->Multiline = true;
			this->text_Rq2->Name = L"text_Rq2";
			this->text_Rq2->Size = System::Drawing::Size(310, 37);
			this->text_Rq2->TabIndex = 2;
			this->text_Rq2->TextChanged += gcnew System::EventHandler(this, &MyForm::text_Rq2_TextChanged);
			// 
			// text_Rq2_Resultat
			// 
			this->text_Rq2_Resultat->Location = System::Drawing::Point(395, 155);
			this->text_Rq2_Resultat->Multiline = true;
			this->text_Rq2_Resultat->Name = L"text_Rq2_Resultat";
			this->text_Rq2_Resultat->Size = System::Drawing::Size(310, 96);
			this->text_Rq2_Resultat->TabIndex = 1;
			this->text_Rq2_Resultat->TextChanged += gcnew System::EventHandler(this, &MyForm::text_Rq2_Resultat_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(392, 139);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(289, 16);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Resultat du chiffre d’affaire sur le mois concerné";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// panelRq3
			// 
			this->panelRq3->Controls->Add(this->dataGridView13);
			this->panelRq3->Controls->Add(this->label27);
			this->panelRq3->Location = System::Drawing::Point(13, 69);
			this->panelRq3->Name = L"panelRq3";
			this->panelRq3->Size = System::Drawing::Size(955, 542);
			this->panelRq3->TabIndex = 7;
			// 
			// dataGridView13
			// 
			this->dataGridView13->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView13->Location = System::Drawing::Point(27, 67);
			this->dataGridView13->Name = L"dataGridView13";
			this->dataGridView13->RowHeadersWidth = 51;
			this->dataGridView13->Size = System::Drawing::Size(651, 204);
			this->dataGridView13->TabIndex = 1;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(29, 19);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(359, 16);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Resultat des produits sous le seuil de réapprovisionnement";
			// 
			// panelRq4
			// 
			this->panelRq4->Controls->Add(this->dataGridView11);
			this->panelRq4->Controls->Add(this->send_rq4);
			this->panelRq4->Controls->Add(this->label29);
			this->panelRq4->Controls->Add(this->label28);
			this->panelRq4->Controls->Add(this->text_Rq4);
			this->panelRq4->Location = System::Drawing::Point(12, 64);
			this->panelRq4->Name = L"panelRq4";
			this->panelRq4->Size = System::Drawing::Size(964, 401);
			this->panelRq4->TabIndex = 7;
			// 
			// dataGridView11
			// 
			this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView11->Location = System::Drawing::Point(313, 182);
			this->dataGridView11->Name = L"dataGridView11";
			this->dataGridView11->RowHeadersWidth = 51;
			this->dataGridView11->Size = System::Drawing::Size(341, 195);
			this->dataGridView11->TabIndex = 5;
			// 
			// send_rq4
			// 
			this->send_rq4->Location = System::Drawing::Point(154, 199);
			this->send_rq4->Name = L"send_rq4";
			this->send_rq4->Size = System::Drawing::Size(102, 59);
			this->send_rq4->TabIndex = 4;
			this->send_rq4->Text = L"send";
			this->send_rq4->UseVisualStyleBackColor = true;
			this->send_rq4->Click += gcnew System::EventHandler(this, &MyForm::send_rq4_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(313, 151);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(296, 16);
			this->label29->TabIndex = 3;
			this->label29->Text = L" Resultat du  montant total  d\' achats pour le client";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(9, 123);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(161, 16);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Entrer l\'ID du client désirer";
			// 
			// text_Rq4
			// 
			this->text_Rq4->Location = System::Drawing::Point(12, 139);
			this->text_Rq4->Name = L"text_Rq4";
			this->text_Rq4->Size = System::Drawing::Size(244, 22);
			this->text_Rq4->TabIndex = 0;
			this->text_Rq4->TextChanged += gcnew System::EventHandler(this, &MyForm::text_Rq4_TextChanged);
			// 
			// panelRq5
			// 
			this->panelRq5->Controls->Add(this->dataGridView10);
			this->panelRq5->Controls->Add(this->label30);
			this->panelRq5->Location = System::Drawing::Point(5, 65);
			this->panelRq5->Name = L"panelRq5";
			this->panelRq5->Size = System::Drawing::Size(966, 555);
			this->panelRq5->TabIndex = 7;
			// 
			// dataGridView10
			// 
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->Location = System::Drawing::Point(60, 111);
			this->dataGridView10->Name = L"dataGridView10";
			this->dataGridView10->RowHeadersWidth = 51;
			this->dataGridView10->Size = System::Drawing::Size(467, 274);
			this->dataGridView10->TabIndex = 2;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(21, 65);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(184, 16);
			this->label30->TabIndex = 1;
			this->label30->Text = L"les 10 articles les plus vendus";
			// 
			// panelRq6
			// 
			this->panelRq6->Controls->Add(this->dataGridView12);
			this->panelRq6->Controls->Add(this->label31);
			this->panelRq6->Location = System::Drawing::Point(9, 62);
			this->panelRq6->Name = L"panelRq6";
			this->panelRq6->Size = System::Drawing::Size(962, 394);
			this->panelRq6->TabIndex = 7;
			// 
			// dataGridView12
			// 
			this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView12->Location = System::Drawing::Point(27, 78);
			this->dataGridView12->Name = L"dataGridView12";
			this->dataGridView12->RowHeadersWidth = 51;
			this->dataGridView12->Size = System::Drawing::Size(671, 171);
			this->dataGridView12->TabIndex = 1;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(27, 44);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(195, 16);
			this->label31->TabIndex = 0;
			this->label31->Text = L"les 10 articles les moins vendus";
			// 
			// panelRq7
			// 
			this->panelRq7->Controls->Add(this->dataGridView14);
			this->panelRq7->Controls->Add(this->text_Rq7);
			this->panelRq7->Controls->Add(this->label32);
			this->panelRq7->Location = System::Drawing::Point(11, 58);
			this->panelRq7->Name = L"panelRq7";
			this->panelRq7->Size = System::Drawing::Size(970, 524);
			this->panelRq7->TabIndex = 7;
			// 
			// dataGridView14
			// 
			this->dataGridView14->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView14->Location = System::Drawing::Point(17, 39);
			this->dataGridView14->Name = L"dataGridView14";
			this->dataGridView14->RowHeadersWidth = 51;
			this->dataGridView14->Size = System::Drawing::Size(11, 11);
			this->dataGridView14->TabIndex = 2;
			// 
			// text_Rq7
			// 
			this->text_Rq7->Location = System::Drawing::Point(17, 89);
			this->text_Rq7->Multiline = true;
			this->text_Rq7->Name = L"text_Rq7";
			this->text_Rq7->Size = System::Drawing::Size(697, 117);
			this->text_Rq7->TabIndex = 1;
			this->text_Rq7->TextChanged += gcnew System::EventHandler(this, &MyForm::text_Rq7_TextChanged);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(25, 55);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(192, 16);
			this->label32->TabIndex = 0;
			this->label32->Text = L"la valeur commerciale du stock";
			// 
			// panelRq8
			// 
			this->panelRq8->Controls->Add(this->dataGridView15);
			this->panelRq8->Controls->Add(this->text_Rq8);
			this->panelRq8->Controls->Add(this->label33);
			this->panelRq8->Location = System::Drawing::Point(12, 65);
			this->panelRq8->Name = L"panelRq8";
			this->panelRq8->Size = System::Drawing::Size(959, 528);
			this->panelRq8->TabIndex = 7;
			// 
			// dataGridView15
			// 
			this->dataGridView15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView15->Location = System::Drawing::Point(29, 26);
			this->dataGridView15->Name = L"dataGridView15";
			this->dataGridView15->RowHeadersWidth = 51;
			this->dataGridView15->Size = System::Drawing::Size(17, 15);
			this->dataGridView15->TabIndex = 2;
			// 
			// text_Rq8
			// 
			this->text_Rq8->Location = System::Drawing::Point(29, 89);
			this->text_Rq8->Multiline = true;
			this->text_Rq8->Name = L"text_Rq8";
			this->text_Rq8->Size = System::Drawing::Size(638, 99);
			this->text_Rq8->TabIndex = 1;
			this->text_Rq8->TextChanged += gcnew System::EventHandler(this, &MyForm::text_Rq8_TextChanged);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(30, 52);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(162, 16);
			this->label33->TabIndex = 0;
			this->label33->Text = L"La valeur d’achat du stock";
			// 
			// panelRq9
			// 
			this->panelRq9->Controls->Add(this->dataGridView17);
			this->panelRq9->Controls->Add(this->Variation);
			this->panelRq9->Controls->Add(this->label37);
			this->panelRq9->Controls->Add(this->label36);
			this->panelRq9->Controls->Add(this->label35);
			this->panelRq9->Controls->Add(this->text_demarq);
			this->panelRq9->Controls->Add(this->text_remise);
			this->panelRq9->Controls->Add(this->text_marg);
			this->panelRq9->Controls->Add(this->demarq_5);
			this->panelRq9->Controls->Add(this->demarq_3);
			this->panelRq9->Controls->Add(this->demarq_2);
			this->panelRq9->Controls->Add(this->remise_6);
			this->panelRq9->Controls->Add(this->remise_5);
			this->panelRq9->Controls->Add(this->marge_15);
			this->panelRq9->Controls->Add(this->marge_10);
			this->panelRq9->Controls->Add(this->marge_5);
			this->panelRq9->Location = System::Drawing::Point(6, 70);
			this->panelRq9->Name = L"panelRq9";
			this->panelRq9->Size = System::Drawing::Size(972, 504);
			this->panelRq9->TabIndex = 7;
			// 
			// Variation
			// 
			this->Variation->Location = System::Drawing::Point(309, 256);
			this->Variation->Name = L"Variation";
			this->Variation->Size = System::Drawing::Size(145, 83);
			this->Variation->TabIndex = 15;
			this->Variation->Text = L"Simuler Variation";
			this->Variation->UseVisualStyleBackColor = true;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(6, 194);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(146, 16);
			this->label37->TabIndex = 14;
			this->label37->Text = L"Démarque Commercial";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(6, 116);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(129, 16);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Remise Commercial";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(6, 40);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(121, 16);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Marge Commercial";
			// 
			// text_demarq
			// 
			this->text_demarq->Location = System::Drawing::Point(6, 219);
			this->text_demarq->Name = L"text_demarq";
			this->text_demarq->Size = System::Drawing::Size(190, 22);
			this->text_demarq->TabIndex = 11;
			// 
			// text_remise
			// 
			this->text_remise->Location = System::Drawing::Point(6, 146);
			this->text_remise->Name = L"text_remise";
			this->text_remise->Size = System::Drawing::Size(190, 22);
			this->text_remise->TabIndex = 10;
			// 
			// text_marg
			// 
			this->text_marg->Location = System::Drawing::Point(6, 67);
			this->text_marg->Name = L"text_marg";
			this->text_marg->Size = System::Drawing::Size(190, 22);
			this->text_marg->TabIndex = 9;
			this->text_marg->TextChanged += gcnew System::EventHandler(this, &MyForm::text_marg_TextChanged);
			// 
			// demarq_5
			// 
			this->demarq_5->AutoSize = true;
			this->demarq_5->Location = System::Drawing::Point(275, 165);
			this->demarq_5->Name = L"demarq_5";
			this->demarq_5->Size = System::Drawing::Size(47, 20);
			this->demarq_5->TabIndex = 8;
			this->demarq_5->TabStop = true;
			this->demarq_5->Text = L"5%";
			this->demarq_5->UseVisualStyleBackColor = true;
			// 
			// demarq_3
			// 
			this->demarq_3->AutoSize = true;
			this->demarq_3->Location = System::Drawing::Point(275, 106);
			this->demarq_3->Name = L"demarq_3";
			this->demarq_3->Size = System::Drawing::Size(47, 20);
			this->demarq_3->TabIndex = 7;
			this->demarq_3->TabStop = true;
			this->demarq_3->Text = L"3%";
			this->demarq_3->UseVisualStyleBackColor = true;
			// 
			// demarq_2
			// 
			this->demarq_2->AutoSize = true;
			this->demarq_2->Location = System::Drawing::Point(275, 49);
			this->demarq_2->Name = L"demarq_2";
			this->demarq_2->Size = System::Drawing::Size(47, 20);
			this->demarq_2->TabIndex = 6;
			this->demarq_2->TabStop = true;
			this->demarq_2->Text = L"2%";
			this->demarq_2->UseVisualStyleBackColor = true;
			// 
			// remise_6
			// 
			this->remise_6->AutoSize = true;
			this->remise_6->Location = System::Drawing::Point(495, 106);
			this->remise_6->Name = L"remise_6";
			this->remise_6->Size = System::Drawing::Size(47, 20);
			this->remise_6->TabIndex = 5;
			this->remise_6->TabStop = true;
			this->remise_6->Text = L"6%";
			this->remise_6->UseVisualStyleBackColor = true;
			// 
			// remise_5
			// 
			this->remise_5->AutoSize = true;
			this->remise_5->Location = System::Drawing::Point(495, 52);
			this->remise_5->Name = L"remise_5";
			this->remise_5->Size = System::Drawing::Size(47, 20);
			this->remise_5->TabIndex = 3;
			this->remise_5->TabStop = true;
			this->remise_5->Text = L"5%";
			this->remise_5->UseVisualStyleBackColor = true;
			// 
			// marge_15
			// 
			this->marge_15->AutoSize = true;
			this->marge_15->Location = System::Drawing::Point(737, 165);
			this->marge_15->Name = L"marge_15";
			this->marge_15->Size = System::Drawing::Size(54, 20);
			this->marge_15->TabIndex = 2;
			this->marge_15->TabStop = true;
			this->marge_15->Text = L"15%";
			this->marge_15->UseVisualStyleBackColor = true;
			// 
			// marge_10
			// 
			this->marge_10->AutoSize = true;
			this->marge_10->Location = System::Drawing::Point(737, 109);
			this->marge_10->Name = L"marge_10";
			this->marge_10->Size = System::Drawing::Size(54, 20);
			this->marge_10->TabIndex = 1;
			this->marge_10->TabStop = true;
			this->marge_10->Text = L"10%";
			this->marge_10->UseVisualStyleBackColor = true;
			// 
			// marge_5
			// 
			this->marge_5->AutoSize = true;
			this->marge_5->Location = System::Drawing::Point(737, 52);
			this->marge_5->Name = L"marge_5";
			this->marge_5->Size = System::Drawing::Size(47, 20);
			this->marge_5->TabIndex = 0;
			this->marge_5->TabStop = true;
			this->marge_5->Text = L"5%";
			this->marge_5->UseVisualStyleBackColor = true;
			// 
			// dataGridView16
			// 
			this->dataGridView16->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView16->Location = System::Drawing::Point(192, 329);
			this->dataGridView16->Name = L"dataGridView16";
			this->dataGridView16->RowHeadersWidth = 51;
			this->dataGridView16->Size = System::Drawing::Size(240, 150);
			this->dataGridView16->TabIndex = 9;
			// 
			// dataGridView17
			// 
			this->dataGridView17->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView17->Location = System::Drawing::Point(537, 221);
			this->dataGridView17->Name = L"dataGridView17";
			this->dataGridView17->RowHeadersWidth = 51;
			this->dataGridView17->RowTemplate->Height = 24;
			this->dataGridView17->Size = System::Drawing::Size(354, 153);
			this->dataGridView17->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 758);
			this->Controls->Add(this->panelRq9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panelRq1->ResumeLayout(false);
			this->panelRq1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
			this->panelRq2->ResumeLayout(false);
			this->panelRq2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView9))->EndInit();
			this->panelRq3->ResumeLayout(false);
			this->panelRq3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView13))->EndInit();
			this->panelRq4->ResumeLayout(false);
			this->panelRq4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView11))->EndInit();
			this->panelRq5->ResumeLayout(false);
			this->panelRq5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView10))->EndInit();
			this->panelRq6->ResumeLayout(false);
			this->panelRq6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView12))->EndInit();
			this->panelRq7->ResumeLayout(false);
			this->panelRq7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView14))->EndInit();
			this->panelRq8->ResumeLayout(false);
			this->panelRq8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView15))->EndInit();
			this->panelRq9->ResumeLayout(false);
			this->panelRq9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView17))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panel4);

		this->panel3->Hide();
		this->panel5->Hide();
		this->panel6->Hide();
		this->panel1->Hide();
		this->panelRq1->Hide();
		this->panelRq2->Hide();
		this->panelRq3->Hide();
		this->panelRq4->Hide();
		this->panelRq5->Hide();
		this->panelRq6->Hide();
		this->panelRq7->Hide();
		this->panelRq8->Hide();
		this->panelRq9->Hide();
		this->panel4->Show();

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Controls->Add(this->panel1);

		this->panel3->Hide();
		this->panel5->Hide();
		this->panel6->Hide();
		this->panel4->Hide();
		this->panel1->Show();

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Controls->Add(this->panel5);

		this->panel1->Hide();
		this->panel3->Hide();
		this->panel6->Hide();
		this->panel4->Hide();
		this->panel5->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panel6);
		this->panel1->Hide();
		this->panel3->Hide();
		this->panel5->Hide();
		this->panel4->Hide();
		this->panel6->Show();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Controls->Add(this->panel3);
		this->panel1->Hide();
		this->panel5->Hide();
		this->panel6->Hide();
		this->panel4->Hide();
		panel3->Show();
	}


	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}

	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {



	}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		this->text_id->Text = "";
		this->text_personnel_nom->Text = "";
		this->text_personnel_prenom->Text = "";
		this->text_persnnel_adresse->Text = "";
		this->text_persnnel_date->Text = "";
		this->text_personnel_sup->Text = "";
		//this->id = 1;


		this->mode = "ajP";


	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mode == "ajP") {
			this->gestionPersonnel->ajouter(this->text_personnel_nom->Text, this->text_personnel_prenom->Text, this->text_persnnel_adresse->Text, this->text_persnnel_date->Text, Convert::ToInt32(this->text_personnel_sup->Text));
		}
		else if (mode == "ModP") {
			this->gestionPersonnel->modifier(Convert::ToInt32(this->text_id->Text), this->text_personnel_nom->Text, this->text_personnel_prenom->Text, this->text_persnnel_adresse->Text, this->text_persnnel_date->Text, Convert::ToInt32(this->text_personnel_sup->Text));
		}
		else if (mode == "Supprimer_Perso") {
			this->gestionPersonnel->supprimer(Convert::ToInt32(this->text_id->Text));
		}




		this->dataGridView1->Refresh();
		this->dsPersonne = this->gestionPersonnel->listePersonnels("LesPersonnel");
		this->dataGridView1->DataSource = this->dsPersonne;
		this->dataGridView1->DataMember = "LesPersonnel";

	}


	private: void initialisationPersonnel(void)

	{

		this->gestionPersonnel = gcnew NS_SVC::CL_svc_gestionPersonnel();

		this->dataGridView1->Columns->Clear();


		this->dsPersonnel = this->gestionPersonnel->listePersonnels("LesPersonnel");

		this->rowsCount_personnel = this->dsPersonnel->Tables["LesPersonnel"]->Rows->Count;

		this->index = 0;

		this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[0]);

		this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[1]);

		this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[2]);

		this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[3]);

		this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[4]);

		this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[0]->ItemArray[5]);



		this->dataGridView1->DataSource = this->dsPersonnel;

		this->dataGridView1->DataMember = "LesPersonnel";



	}

		   private: void initialisationrequete1(void)

		   {

			   this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

			   this->dataGridView8->Columns->Clear();


			   //this->dsStat = this->gestionStat->listeRequete_four("LesStat");


			   //this->dataGridView8->DataSource = this->dsStat;

			   //this->dataGridView8->DataMember = "LesStat";

			   /*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/

			   this->dsStat = this->gestionStat->listeRequete_one("LesStat");

			   this->dataGridView8->DataSource = this->dsStat;

			   /* this->dataGridView8->DataMember = "LesStat";*/



			   this->text_rq1->Text = "la valeur est : " + Convert::ToString(this->dsStat->Tables["LesStat"]->Rows[0]->ItemArray[0]);


		   }

		 private: void initialisationrequete2(void)

				   {

					   this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

					   this->dataGridView9->Columns->Clear();


					   //this->dsStat = this->gestionStat->listeRequete_four("LesStat");


					   //this->dataGridView8->DataSource = this->dsStat;

					   //this->dataGridView8->DataMember = "LesStat";

					   /*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/
					   this->text_Rq2->Text = "";
					   this->mode = "next";

					   


				   }
		private: void initialisationrequete3(void)

		{

			this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

			this->dataGridView13->Columns->Clear();


			this->dsStat = this->gestionStat->listeRequete_three("LesStat3");


			this->dataGridView13->DataSource = this->dsStat;

			this->dataGridView13->DataMember = "LesStat3";

			/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/
			//this->text_Rq2->Text = "";
			//this->mode = "next";




		}

		private: void initialisationrequete4(void)

		{

			this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

			this->dataGridView11->Columns->Clear();


			//this->dsStat = this->gestionStat->listeRequete_four("LesStat");


			//this->dataGridView8->DataSource = this->dsStat;

			//this->dataGridView8->DataMember = "LesStat";

			/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/
			this->text_Rq4->Text = "";
			this->mode = "next";




		}

		private: void initialisationrequete5(void)

				{

					this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

					this->dataGridView10->Columns->Clear();


					this->dsStat = this->gestionStat->listeRequete_five("LesStat");


					this->dataGridView10->DataSource = this->dsStat;

					this->dataGridView10->DataMember = "LesStat";

					/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/
					//this->text_Rq2->Text = "";
					//this->mode = "next";




				}



	private: void initialisationrequete6(void)

	{

		this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

		this->dataGridView12->Columns->Clear();


		this->dsStat = this->gestionStat->listeRequete_six("LesStat6");


		this->dataGridView12->DataSource = this->dsStat;

		this->dataGridView12->DataMember = "LesStat6";

		/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/
		//this->text_Rq2->Text = "";
		//this->mode = "next";




	}

	private: void initialisationrequete7(void)

	{

		this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

		this->dataGridView14->Columns->Clear();


		//this->dsStat = this->gestionStat->listeRequete_four("LesStat");


		//this->dataGridView8->DataSource = this->dsStat;

		//this->dataGridView8->DataMember = "LesStat";

		/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/

		this->dsStat = this->gestionStat->listeRequete_seven("LesStat7");

		this->dataGridView14->DataSource = this->dsStat;

		/* this->dataGridView8->DataMember = "LesStat";*/



		this->text_Rq7->Text = "la valeur est : " + Convert::ToString(this->dsStat->Tables["LesStat7"]->Rows[0]->ItemArray[0]);


	}

	private: void initialisationrequete8(void)

	{

		this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

		this->dataGridView15->Columns->Clear();


		//this->dsStat = this->gestionStat->listeRequete_four("LesStat");


		//this->dataGridView8->DataSource = this->dsStat;

		//this->dataGridView8->DataMember = "LesStat";

		/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/

		this->dsStat = this->gestionStat->listeRequete_eight("LesStat8");

		this->dataGridView15->DataSource = this->dsStat;

		/* this->dataGridView8->DataMember = "LesStat";*/



		this->text_Rq8->Text = "la valeur est : " + Convert::ToString(this->dsStat->Tables["LesStat8"]->Rows[0]->ItemArray[0]);


	}

		   private: void initialisationrequete9(void)

		   {

			   this->gestionStat = gcnew NS_SVC::CL_svc_gestionStat();

			   //this->dataGridView16->Columns->Clear();


			   //this->dsStat = this->gestionStat->listeRequete_four("LesStat");


			   //this->dataGridView8->DataSource = this->dsStat;

			   //this->dataGridView8->DataMember = "LesStat";

			   /*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/

			   this->dsStat = this->gestionStat->listeRequete_eight("LesStat8");

			   this->dataGridView15->DataSource = this->dsStat;

			   /* this->dataGridView8->DataMember = "LesStat";*/



			   this->text_Rq8->Text = "la valeur est : " + Convert::ToString(this->dsStat->Tables["LesStat8"]->Rows[0]->ItemArray[0]);


		   }

	private: void initialisationArticle(void)

	{

		this->gestionStock = gcnew NS_SVC::CL_svc_gestionARTICLE();

		this->dataGridView4->Columns->Clear();


		this->dsStock = this->gestionStock->listeSTOCK("LesArticle");

		this->rowsCount_stock = this->dsStock->Tables["LesArticle"]->Rows->Count;

		this->indexarticle = 0;

		this->text_article_id->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[0]);

		this->text_article_nom->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[1]);

		this->text_article_design->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[2]);

		this->text_article_reap->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[3]);

		this->text_article_taux->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[4]);

		this->text_article_cout->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[5]);

		this->text_article_stock->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[0]->ItemArray[6]);


		this->dataGridView4->DataSource = this->gestionStock->listeSTOCK("LesArticle");;

		this->dataGridView4->DataMember = "LesArticle";

		//this->dataGridView4->Columns["id_taux_tva"]->Visible = false;



	}

	private: void initialisationCommande(void)

	{

		this->gestionCommande = gcnew NS_SVC::CL_svc_gestionCOMMANDE();

		this->dataGridView3->Columns->Clear();
		this->dataGridView6->Columns->Clear();
		this->dataGridView7->Columns->Clear();


		this->dsCommande = this->gestionCommande->listeCommande("LesCommande");

		this->rowsCount_commande = this->dsCommande->Tables["LesCommande"]->Rows->Count;

		this->indexcommande = 0;

		this->text_commande_id->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[0]->ItemArray[0]);

		this->text_commande_nom->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[0]->ItemArray[1]);

		this->text_commande_datec->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[0]->ItemArray[2]);

		this->text_commande_datel->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[0]->ItemArray[3]);

		this->text_commande_client->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[0]->ItemArray[4]);

		this->text_commande_perso->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[0]->ItemArray[5]);


		this->dscommandepaiment = this->gestionCommande->listeCommandeById_paiment(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnes");

		// this->dscommandefacture = this->gestionCommande->listeCommandeById_facture(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnesn");

		this->dscommandearticle = this->gestionCommande->listeCommandeArticle(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnesart");


		this->dataGridView3->DataSource = this->dscommandepaiment;

		this->dataGridView3->DataMember = "AdressesPersonnes";

		//this->dataGridView6->DataSource = this->dscommandefacture;

		//this->dataGridView6->DataMember = "AdressesPersonnesn";

		//this->dataGridView2->Columns["id_adresse"]->Visible = false;

		this->dataGridView7->DataSource = this->dscommandearticle;

		this->dataGridView7->DataMember = "AdressesPersonnesart";

		//this->dataGridView7->Columns["Id_Article"]->Visible = true;







	}








		   //this->gestionClients->ajouter(this->text_client_nom->Text, this->text_client_prenom->Text, this->text_client_date->Text, lesAdresses, lesAdressesn);




	   //this->dataGridView1->DataSource = this->ds;
	   //this->dataGridView1->DataMember = "result";

	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

		this->text_client_id->Text = "";
		this->text_client_nom->Text = "";
		this->text_client_prenom->Text = "";
		this->text_client_date->Text = "";

		this->dataGridView2->DataSource = nullptr;
		this->dataGridView2->Columns->Add("ville", "ville");
		this->dataGridView2->Columns->Add("cp", "cp");

		this->dataGridView5->DataSource = nullptr;
		this->dataGridView5->Columns->Add("ville", "ville");
		this->dataGridView5->Columns->Add("cp", "cp");



		this->mode = "nouveauclient";



	}

	private: void initialisationENR(void)

	{
		//pour gestion
		this->gestionClients = gcnew NS_SVC::CL_svc_gestionClient();

		this->dataGridView2->Columns->Clear();

		this->dataGridView5->Columns->Clear();



		this->dsPersonne = this->gestionClients->listeClients("LesClients");

		this->rowsCount = this->dsPersonne->Tables["LesClients"]->Rows->Count;

		///this->index = 0;

		this->indexclient = 0;

		this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[0]);

		this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[1]);

		this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[2]);

		this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[0]->ItemArray[3]);



		this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

		this->dsPersonneAdressesn = this->gestionClients->adressesfacClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnesn");



		this->dataGridView2->DataSource = this->dsPersonneAdresses;

		this->dataGridView2->DataMember = "AdressesPersonnes";

		/*this->dataGridView2->Columns["id_adresse"]->Visible = false;*/



		this->dataGridView5->DataSource = this->dsPersonneAdressesn;

		this->dataGridView5->DataMember = "AdressesPersonnesn";

		// this->dataGridView5->Columns["id_adresse"]->Visible = false;



	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->mode == "nouveauclient") {


			int taillen = (this->dataGridView5->RowCount - 1) * 2;

			//array<String^>^ lesAdresses = gcnew array<String^>(taille);

			array<String^>^ lesAdressesnn = gcnew array<String^>(taillen);

			int i;
			int ii = 0;



			for (i = 0; i < taillen - 1; i++)

			{

				lesAdressesnn[i] = Convert::ToString(this->dataGridView5[0, ii]->Value); i++;

				lesAdressesnn[i] = Convert::ToString(this->dataGridView5[1, ii]->Value);

				ii++;

			}


			int iin;
			int in;

			iin = 0;


			int taille = (this->dataGridView2->RowCount - 1) * 3;

			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			for (in = 0; in < taille - 1; in++)

			{

				lesAdresses[in] = Convert::ToString(this->dataGridView2[0, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView2[1, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView2[2, iin]->Value);

				iin++;

			}



			this->gestionClients->ajouter(this->text_client_nom->Text, this->text_client_prenom->Text, this->text_client_date->Text, lesAdresses, lesAdressesnn);
		}
		else if (mode == "MAJclient") {

			int taillen = (this->dataGridView5->RowCount - 1) * 3;

			//array<String^>^ lesAdresses = gcnew array<String^>(taille);

			array<String^>^ lesAdressesnn = gcnew array<String^>(taillen);

			int i;
			int ii = 0;

			this->dataGridView5->Columns["id_adresse"]->Visible = true;

			for (i = 0; i < taillen - 1; i++)

			{

				lesAdressesnn[i] = Convert::ToString(this->dataGridView5[0, ii]->Value); i++;

				lesAdressesnn[i] = Convert::ToString(this->dataGridView5[1, ii]->Value); i++;

				lesAdressesnn[i] = Convert::ToString(this->dataGridView5[2, ii]->Value);

				ii++;

			}


			int iin;
			int in;

			iin = 0;

			this->dataGridView2->Columns["id_adresse"]->Visible = true;

			int taille = (this->dataGridView2->RowCount - 1) * 3;

			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			for (in = 0; in < taille - 1; in++)

			{

				lesAdresses[in] = Convert::ToString(this->dataGridView2[0, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView2[1, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView2[2, iin]->Value);

				iin++;

			}


			this->gestionClients->modifier(Convert::ToInt32(this->text_client_id->Text), this->text_client_nom->Text, this->text_client_prenom->Text, this->text_client_date->Text, lesAdresses, lesAdressesnn);
		}



	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->initialisationENR();
		this->initialisationPersonnel();
		this->initialisationArticle();
		this->initialisationCommande();
		this->initialisationrequete1();
		this->initialisationrequete2();
		this->initialisationrequete3(); // done

		this->initialisationrequete4();
		this->initialisationrequete5();
		this->initialisationrequete6(); //not done
		this->initialisationrequete7(); //not done
		this->initialisationrequete8();



	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->indexclient < this->rowsCount - 1)

		{

			this->indexclient++;

			this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[0]);

			this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[1]);

			this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[2]);

			this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[3]);

			this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

			this->dsPersonneAdressesn = this->gestionClients->adressesfacClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnesn");

			this->dataGridView2->DataSource = this->dsPersonneAdresses;

			this->dataGridView2->DataMember = "AdressesPersonnes";

			this->dataGridView2->Columns["id_adresse"]->Visible = false;

			this->dataGridView5->DataSource = this->dsPersonneAdressesn;

			this->dataGridView5->DataMember = "AdressesPersonnesn";

			this->dataGridView5->Columns["id_adresse"]->Visible = false;

		}
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {


		if (this->indexclient > 0)

		{

			this->indexclient--;

			this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[0]);

			this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[1]);

			this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[2]);

			this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[3]);

			this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

			this->dsPersonneAdressesn = this->gestionClients->adressesfacClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnesn");

			this->dataGridView2->DataSource = this->dsPersonneAdresses;

			this->dataGridView2->DataMember = "AdressesPersonnes";

			this->dataGridView2->Columns["id_adresse"]->Visible = false;

			this->dataGridView5->DataSource = this->dsPersonneAdressesn;

			this->dataGridView5->DataMember = "AdressesPersonnesn";

			this->dataGridView5->Columns["id_adresse"]->Visible = false;


		}
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {


		this->index = 0;

		this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[0]);

		this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[1]);

		this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[2]);

		this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[3]);

		this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[4]);

		this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[5]);


	}


	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {


		this->indexclient = 0;

		this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[0]);

		this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[1]);

		this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[2]);

		this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[3]);

		this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

		this->dsPersonneAdressesn = this->gestionClients->adressesfacClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnesn");

		this->dataGridView2->DataSource = this->dsPersonneAdresses;

		this->dataGridView2->DataMember = "AdressesPersonnes";

		this->dataGridView2->Columns["id_adresse"]->Visible = false;

		this->dataGridView5->DataSource = this->dsPersonneAdressesn;

		this->dataGridView5->DataMember = "AdressesPersonnesn";

		this->dataGridView5->Columns["id_adresse"]->Visible = false;
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {


		this->indexclient = this->rowsCount - 1;

		this->text_client_id->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[0]);

		this->text_client_nom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[1]);

		this->text_client_prenom->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[2]);

		this->text_client_date->Text = Convert::ToString(this->dsPersonne->Tables["LesClients"]->Rows[this->indexclient]->ItemArray[3]);

		this->dsPersonneAdresses = this->gestionClients->adresseslivClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnes");

		this->dsPersonneAdressesn = this->gestionClients->adressesfacClient(Convert::ToInt32(this->text_client_id->Text), "AdressesPersonnesn");

		this->dataGridView2->DataSource = this->dsPersonneAdresses;

		this->dataGridView2->DataMember = "AdressesPersonnes";

		this->dataGridView2->Columns["id_adresse"]->Visible = false;

		this->dataGridView5->DataSource = this->dsPersonneAdressesn;

		this->dataGridView5->DataMember = "AdressesPersonnesn";

		this->dataGridView5->Columns["id_adresse"]->Visible = false;

	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "ModP";
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {


		if (this->index < this->rowsCount_personnel - 1)

		{

			this->index++;

			this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[0]);

			this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[1]);

			this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[2]);

			this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[3]);

			this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[4]);

			this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[5]);

			//this->dsPersonnel = this->gestionPersonnel->listePersonnels("LesPersonnel");

			//this->dataGridView1->DataSource = this->dsPersonneAdresses;

			//this->dataGridView1->DataMember = "LesPersonnel";


		}
	};

	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {


		this->index = this->rowsCount_personnel - 1;

		this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[0]);

		this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[1]);

		this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[2]);

		this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[3]);

		this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[4]);

		this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[5]);

	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {



		if (this->index > 0)

		{

			this->index--;

			this->text_id->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[0]);

			this->text_personnel_nom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[1]);

			this->text_personnel_prenom->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[2]);

			this->text_persnnel_adresse->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[3]);

			this->text_persnnel_date->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[4]);

			this->text_personnel_sup->Text = Convert::ToString(this->dsPersonnel->Tables["LesPersonnel"]->Rows[this->index]->ItemArray[5]);



		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->indexarticle < this->rowsCount_stock - 1)

		{

			this->indexarticle++;

			this->text_article_id->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[0]);

			this->text_article_nom->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[1]);

			this->text_article_design->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[2]);

			this->text_article_reap->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[3]);

			this->text_article_taux->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[4]);

			this->text_article_cout->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[5]);

			this->text_article_stock->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[6]);




			//this->dataGridView4->DataSource = this->dsStock;

			//this->dataGridView4->DataMember = "LesArticle";

			//this->dataGridView4->Columns["id_taux_tva"]->Visible = false;


		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->indexarticle > 0)

		{

			this->indexarticle--;

			this->text_article_id->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[0]);

			this->text_article_nom->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[1]);

			this->text_article_design->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[2]);

			this->text_article_reap->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[3]);

			this->text_article_taux->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[4]);

			this->text_article_cout->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[5]);

			this->text_article_stock->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[6]);


		}
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		this->indexarticle = this->rowsCount_stock - 1;

		this->text_article_id->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[0]);

		this->text_article_nom->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[1]);

		this->text_article_design->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[2]);

		this->text_article_reap->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[3]);

		this->text_article_taux->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[indexarticle]->ItemArray[4]);

		this->text_article_cout->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[5]);

		this->text_article_stock->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[6]);

	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

		this->indexarticle = 0;

		this->text_article_id->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[0]);

		this->text_article_nom->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[1]);

		this->text_article_design->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[2]);

		this->text_article_reap->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[3]);

		this->text_article_taux->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[4]);

		this->text_article_cout->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[5]);

		this->text_article_stock->Text = Convert::ToString(this->dsStock->Tables["LesArticle"]->Rows[this->indexarticle]->ItemArray[6]);
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {


		this->indexcommande++;

		this->text_commande_id->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[0]);

		this->text_commande_nom->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[1]);

		this->text_commande_datec->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[2]);

		this->text_commande_datel->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[3]);

		this->text_commande_client->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[4]);

		this->text_commande_perso->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[5]);


		this->dscommandepaiment = this->gestionCommande->listeCommandeById_paiment(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnes");

		/*this->dscommandefacture = this->gestionCommande->listeCommandeById_facture(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnesn");*/

		this->dscommandearticle = this->gestionCommande->listeCommandeArticle(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnesart");


		this->dataGridView3->DataSource = this->dscommandepaiment;

		this->dataGridView3->DataMember = "AdressesPersonnes";

		/*this->dataGridView6->DataSource = this->dscommandefacture;

		this->dataGridView6->DataMember = "AdressesPersonnesn";*/

		this->dataGridView7->DataSource = this->dscommandearticle;

		this->dataGridView7->DataMember = "AdressesPersonnesart";
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

		this->text_article_id->Text = "";
		this->text_article_nom->Text = "";
		this->text_article_design->Text = "";
		this->text_article_reap->Text = "";
		this->text_article_taux->Text = "";
		this->text_article_cout->Text = "";
		this->text_article_stock->Text = "";
		//this->id = 1;


		this->mode = "ajP";

	}


	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mode == "ajP") {
			this->gestionStock->ajouter(this->text_article_nom->Text, this->text_article_design->Text, Convert::ToInt32(this->text_article_reap->Text), Convert::ToInt32(this->text_article_taux->Text), Convert::ToInt32(this->text_article_cout->Text), Convert::ToInt32(this->text_article_stock->Text));
		}
		else if (mode == "ModP") {
			this->gestionStock->modifier(Convert::ToInt32(this->text_article_id->Text), this->text_article_nom->Text, this->text_article_design->Text, Convert::ToInt32(this->text_article_reap->Text), Convert::ToInt32(this->text_article_taux->Text), Convert::ToInt32(this->text_article_cout->Text), Convert::ToInt32(this->text_article_stock->Text));
		}
		else if (mode == "Supprimer_Article") {
			this->gestionStock->supprimer(Convert::ToInt32(this->text_article_id));
		}




		this->dataGridView4->Refresh();
		this->dsStock = this->gestionStock->listeSTOCK("LesArticle");
		this->dataGridView4->DataSource = this->dsStock;
		this->dataGridView4->DataMember = "LesArticle";
	}


	private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "ModP";
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->indexcommande > 0)

		{

			this->indexcommande--;

			this->text_commande_id->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[0]);

			this->text_commande_nom->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[1]);

			this->text_commande_datec->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[2]);

			this->text_commande_datel->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[3]);

			this->text_commande_client->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[4]);

			this->text_commande_perso->Text = Convert::ToString(this->dsCommande->Tables["LesCommande"]->Rows[this->indexcommande]->ItemArray[5]);


			this->dscommandepaiment = this->gestionCommande->listeCommandeById_paiment(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnes");

			//this->dscommandefacture = this->gestionCommande->listeCommandeById_facture(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnesn");

			this->dscommandearticle = this->gestionCommande->listeCommandeArticle(Convert::ToInt32(this->text_commande_id->Text), "AdressesPersonnesart");


			this->dataGridView3->DataSource = this->dscommandepaiment;

			this->dataGridView3->DataMember = "AdressesPersonnes";

			/*this->dataGridView6->DataSource = this->dscommandefacture;

			this->dataGridView6->DataMember = "AdressesPersonnesn";*/

			this->dataGridView7->DataSource = this->dscommandearticle;

			this->dataGridView7->DataMember = "AdressesPersonnesart";



		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		this->text_commande_id->Text = "";
		this->text_commande_nom->Text = "";
		this->text_commande_datec->Text = "";
		this->text_commande_datel->Text = "";
		this->text_commande_client->Text = "";
		this->text_commande_perso->Text = "";

		this->dataGridView3->DataSource = nullptr;
		this->dataGridView3->Columns->Add("date_paiment", "date_paiment");
		this->dataGridView3->Columns->Add("moyen_paiment", "moyen_paiment");

		this->dataGridView7->DataSource = nullptr;
		/*this->dataGridView6->Columns->Add("Id_Commande", "Id_Article");*/
		this->dataGridView7->Columns->Add("Id_Article", "Id_Article");
		this->dataGridView7->Columns->Add("Prix_Article", "Prix_Article");
		this->dataGridView7->Columns->Add("Quantite_article", "Quantite_article");
		this->dataGridView7->Columns->Add("Remise_commerciale", "Remise_commerciale");

		//this->dataGridView7->DataSource = nullptr;
		//this->dataGridView7->Columns->Add("ville", "ville");
		//this->dataGridView7->Columns->Add("cp", "cp");



		this->mode = "nouveaucommande";
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->mode == "nouveaucommande") {


			int taillen = (this->dataGridView3->RowCount - 1) * 2;

			//array<String^>^ lesAdresses = gcnew array<String^>(taille);

			array<String^>^ lesAdressespai = gcnew array<String^>(taillen);

			int i;
			int ii = 0;



			for (i = 0; i < taillen - 1; i++)

			{

				lesAdressespai[i] = Convert::ToString(this->dataGridView3[0, ii]->Value); i++;

				lesAdressespai[i] = Convert::ToString(this->dataGridView3[1, ii]->Value);

				ii++;

			}


			int iin;
			int in;

			iin = 0;


			int taillecont = (this->dataGridView7->RowCount - 1) * 4;

			array<String^>^ lesAdresses = gcnew array<String^>(taillecont);

			for (in = 0; in < taillecont - 1; in++)

			{

				lesAdresses[in] = Convert::ToString(this->dataGridView7[0, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView7[1, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView7[2, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView7[3, iin]->Value);

				iin++;

			}



			this->gestionCommande->ajouter(text_commande_nom->Text, text_commande_datec->Text, text_commande_datel->Text, Convert::ToInt32(text_commande_client->Text), Convert::ToInt32(text_commande_perso->Text), lesAdressespai, lesAdresses);
		}
		else if (this->mode == "MajCommande") {

			int taillen = (this->dataGridView3->RowCount - 1) * 3;

			//array<String^>^ lesAdresses = gcnew array<String^>(taille);

			array<String^>^ lesAdressespai = gcnew array<String^>(taillen);

			int i;
			int ii = 0;



			for (i = 0; i < taillen - 1; i++)

			{
				lesAdressespai[i] = Convert::ToString(this->dataGridView3[0, ii]->Value); i++;
				lesAdressespai[i] = Convert::ToString(this->dataGridView3[1, ii]->Value); i++;
				lesAdressespai[i] = Convert::ToString(this->dataGridView3[2, ii]->Value);

				ii++;
				//lesAdressespai[i] = Convert::ToString(this->dataGridView3[2, ii]->Value);


			}


			int iin;
			int in;

			iin = 0;


			int taillecont = (this->dataGridView7->RowCount - 1) * 4;

			array<String^>^ lesAdresses = gcnew array<String^>(taillecont);

			for (in = 0; in < taillecont - 1; in++)

			{


				lesAdresses[in] = Convert::ToString(this->dataGridView7[0, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView7[1, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView7[2, iin]->Value); in++;

				lesAdresses[in] = Convert::ToString(this->dataGridView7[3, iin]->Value);

				iin++;
		
			}

			this->gestionCommande->modifier(Convert::ToInt32(this->text_commande_id->Text), text_commande_nom->Text, text_commande_datec->Text, text_commande_datel->Text, Convert::ToInt32(text_commande_client->Text), Convert::ToInt32(text_commande_perso->Text), lesAdressespai, lesAdresses);

		}
		else if (this->mode == "DeleteCommande") {

			this->gestionCommande->supprimer(Convert::ToInt32(this->text_commande_id->Text));

		}


	}

	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "MAJclient";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "MajCommande";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mode = "DeleteCommande";
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button34_Click_1(System::Object^ sender, System::EventArgs^ e) {

		this->Controls->Add(this->panelRq1);
		this->panel4->Hide();
		this->panelRq1->Show();

		this->dataGridView8->Refresh();
		this->dsStat = this->gestionStat->listeRequete_one("LesStat");

		this->dataGridView8->DataSource = this->dsStat;

		/* this->dataGridView8->DataMember = "LesStat";*/
		this->text_rq1->Text = "la valeur est : " + Convert::ToString(this->dsStat->Tables["LesStat"]->Rows[0]->ItemArray[0]);


	}
	private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_Rq2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_Rq2_Resultat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq2);
		this->panel4->Hide();
		this->panelRq2->Show();

		this->dataGridView8->Refresh();
	}
	private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq3);
		
		this->panel4->Hide();
		this->panelRq3->Show();


		this->dataGridView13->Refresh();
		this->dsStat = this->gestionStat->listeRequete_three("LesStat3");
		this->dataGridView13->DataSource = this->dsStat;

		this->dataGridView13->DataMember = "LesStat3";

	}
	private: System::Void text_Rq3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq4);
		this->panel4->Hide();
		this->panelRq4->Show();

		this->dataGridView8->Refresh();
	}
	private: System::Void text_Rq4_Res_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_Rq4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq5);
		this->panel4->Hide();
		this->panelRq5->Show();

		this->dataGridView10->Refresh();
		this->dsStat = this->gestionStat->listeRequete_five("LesStat");


		this->dataGridView10->DataSource = this->dsStat;

		this->dataGridView10->DataMember = "LesStat";


	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq6);
		this->panel4->Hide();
		this->panelRq6->Show();

		this->dataGridView12->Refresh();
		this->dsStat = this->gestionStat->listeRequete_six("LesStat6");


		this->dataGridView12->DataSource = this->dsStat;

		this->dataGridView12->DataMember = "LesStat6";
	}
	private: System::Void text_Rq6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq7);
		this->panel4->Hide();
		this->panelRq7->Show();

		this->dataGridView14->Refresh();
		this->dsStat = this->gestionStat->listeRequete_seven("LesStat7");

		this->dataGridView14->DataSource = this->dsStat;
	}
	private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Add(this->panelRq8);
		this->panel4->Hide();
		this->panelRq8->Show();

		this->dataGridView15->Refresh();
		this->dsStat = this->gestionStat->listeRequete_eight("LesStat8");

		this->dataGridView15->DataSource = this->dsStat;
	}
	private: System::Void text_Rq7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_Rq8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_rq1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void text_Rq5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panelRq1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void enter_rq2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->mode == "next") {

		this->dsStat = this->gestionStat->listeRequete_two(Convert::ToInt32(this->text_Rq2->Text), "LesStat2");

		this->dataGridView9->DataSource = this->dsStat;

		/* this->dataGridView8->DataMember = "LesStat";*/



		this->text_Rq2_Resultat->Text = "la valeur est : " + Convert::ToString(this->dsStat->Tables["LesStat2"]->Rows[0]->ItemArray[0]);

	}


}
private: System::Void send_rq4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->mode == "next") {

		this->dsStat = this->gestionStat->listeRequete_four(Convert::ToInt32(this->text_Rq4->Text), "LesStat3");

		this->dataGridView11->DataSource = this->dsStat;

		this->dataGridView11->DataMember = "LesStat3";

	

			}


		};

	private: System::Void text_marg_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Add(panelRq9);
	this->panel4->Hide();
	this->panelRq5->Show();
}
};

	}








