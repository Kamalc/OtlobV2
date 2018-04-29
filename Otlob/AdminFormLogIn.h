#pragma once
#include "Global.h"
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminFormLogIn : public System::Windows::Forms::Form
	{
	public:
		AdminFormLogIn(void)
		{
			InitializeComponent();
			GlobalClass::username = "";
			GlobalClass::LogIn = false;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminFormLogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;

	protected:


	private: System::Windows::Forms::Panel^  panel1;




	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Button^  button_Minimize;








	private: System::Windows::Forms::Label^  label2;














	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuCheckbox^  checkBox_ShPass;

	private: System::Windows::Forms::Label^  label5;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Clear;

	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignInAdmin;

	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Password;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Username;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Home;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminFormLogIn::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button_Home = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox_ShPass = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_Clear = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SignInAdmin = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_Password = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_Username = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Panel_Header = (gcnew System::Windows::Forms::Panel());
			this->button_Close = (gcnew System::Windows::Forms::Button());
			this->button_Minimize = (gcnew System::Windows::Forms::Button());
			this->panel3->SuspendLayout();
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->Panel_Header->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Controls->Add(this->button_Home);
			this->panel3->Controls->Add(this->bunifuGradientPanel1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(0, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(962, 570);
			this->panel3->TabIndex = 22;
			// 
			// button_Home
			// 
			this->button_Home->Activecolor = System::Drawing::Color::Maroon;
			this->button_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Home->BorderRadius = 0;
			this->button_Home->ButtonText = L"Home";
			this->button_Home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Home->DisabledColor = System::Drawing::Color::Transparent;
			this->button_Home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Home->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_Home->Iconcolor = System::Drawing::Color::Transparent;
			this->button_Home->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Home.Iconimage")));
			this->button_Home->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Home.Iconimage_right")));
			this->button_Home->Iconimage_right_Selected = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Home.Iconimage_right_Selected")));
			this->button_Home->Iconimage_Selected = nullptr;
			this->button_Home->IconMarginLeft = 0;
			this->button_Home->IconMarginRight = 0;
			this->button_Home->IconRightVisible = true;
			this->button_Home->IconRightZoom = 90;
			this->button_Home->IconVisible = true;
			this->button_Home->IconZoom = 80;
			this->button_Home->IsTab = false;
			this->button_Home->Location = System::Drawing::Point(34, 503);
			this->button_Home->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_Home->Name = L"button_Home";
			this->button_Home->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Home->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_Home->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_Home->selected = false;
			this->button_Home->Size = System::Drawing::Size(248, 61);
			this->button_Home->TabIndex = 12;
			this->button_Home->Text = L"Home";
			this->button_Home->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_Home->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Home->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_Home->Click += gcnew System::EventHandler(this, &AdminFormLogIn::button_SignOut_Click);
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->label3);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox2);
			this->bunifuGradientPanel1->Controls->Add(this->pictureBox3);
			this->bunifuGradientPanel1->Controls->Add(this->label4);
			this->bunifuGradientPanel1->Controls->Add(this->checkBox_ShPass);
			this->bunifuGradientPanel1->Controls->Add(this->label5);
			this->bunifuGradientPanel1->Controls->Add(this->button_Clear);
			this->bunifuGradientPanel1->Controls->Add(this->button_SignInAdmin);
			this->bunifuGradientPanel1->Controls->Add(this->label6);
			this->bunifuGradientPanel1->Controls->Add(this->textBox_Password);
			this->bunifuGradientPanel1->Controls->Add(this->textBox_Username);
			this->bunifuGradientPanel1->Controls->Add(this->label7);
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(78, 30);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(783, 464);
			this->bunifuGradientPanel1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label3->Location = System::Drawing::Point(242, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 25);
			this->label3->TabIndex = 57;
			this->label3->Text = L"Admin";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(20, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(103, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 56;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(728, 272);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 55;
			this->pictureBox3->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(617, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 20);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Show Password";
			// 
			// checkBox_ShPass
			// 
			this->checkBox_ShPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox_ShPass->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox_ShPass->Checked = false;
			this->checkBox_ShPass->CheckedOnColor = System::Drawing::Color::Maroon;
			this->checkBox_ShPass->ForeColor = System::Drawing::Color::White;
			this->checkBox_ShPass->Location = System::Drawing::Point(597, 273);
			this->checkBox_ShPass->Margin = System::Windows::Forms::Padding(21, 22, 21, 22);
			this->checkBox_ShPass->Name = L"checkBox_ShPass";
			this->checkBox_ShPass->Size = System::Drawing::Size(20, 20);
			this->checkBox_ShPass->TabIndex = 53;
			this->checkBox_ShPass->OnChange += gcnew System::EventHandler(this, &AdminFormLogIn::checkBox_ShPass_OnChange);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(102, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 25);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Password";
			// 
			// button_Clear
			// 
			this->button_Clear->Activecolor = System::Drawing::Color::Maroon;
			this->button_Clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_Clear->BorderRadius = 0;
			this->button_Clear->ButtonText = L"Clear";
			this->button_Clear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Clear->DisabledColor = System::Drawing::Color::Transparent;
			this->button_Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Clear->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_Clear->Iconcolor = System::Drawing::Color::Transparent;
			this->button_Clear->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Clear.Iconimage")));
			this->button_Clear->Iconimage_right = nullptr;
			this->button_Clear->Iconimage_right_Selected = nullptr;
			this->button_Clear->Iconimage_Selected = nullptr;
			this->button_Clear->IconMarginLeft = 0;
			this->button_Clear->IconMarginRight = 0;
			this->button_Clear->IconRightVisible = true;
			this->button_Clear->IconRightZoom = 0;
			this->button_Clear->IconVisible = true;
			this->button_Clear->IconZoom = 80;
			this->button_Clear->IsTab = false;
			this->button_Clear->Location = System::Drawing::Point(247, 382);
			this->button_Clear->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Clear->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_Clear->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_Clear->selected = false;
			this->button_Clear->Size = System::Drawing::Size(156, 39);
			this->button_Clear->TabIndex = 46;
			this->button_Clear->Text = L"Clear";
			this->button_Clear->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_Clear->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Clear->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_Clear->Click += gcnew System::EventHandler(this, &AdminFormLogIn::button_Clear_Click);
			// 
			// button_SignInAdmin
			// 
			this->button_SignInAdmin->Activecolor = System::Drawing::Color::Maroon;
			this->button_SignInAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignInAdmin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SignInAdmin->BorderRadius = 0;
			this->button_SignInAdmin->ButtonText = L"Sign In";
			this->button_SignInAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SignInAdmin->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SignInAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_SignInAdmin->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SignInAdmin->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SignInAdmin->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignInAdmin.Iconimage")));
			this->button_SignInAdmin->Iconimage_right = nullptr;
			this->button_SignInAdmin->Iconimage_right_Selected = nullptr;
			this->button_SignInAdmin->Iconimage_Selected = nullptr;
			this->button_SignInAdmin->IconMarginLeft = 0;
			this->button_SignInAdmin->IconMarginRight = 0;
			this->button_SignInAdmin->IconRightVisible = true;
			this->button_SignInAdmin->IconRightZoom = 0;
			this->button_SignInAdmin->IconVisible = true;
			this->button_SignInAdmin->IconZoom = 80;
			this->button_SignInAdmin->IsTab = false;
			this->button_SignInAdmin->Location = System::Drawing::Point(461, 382);
			this->button_SignInAdmin->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignInAdmin->Name = L"button_SignInAdmin";
			this->button_SignInAdmin->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignInAdmin->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignInAdmin->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignInAdmin->selected = false;
			this->button_SignInAdmin->Size = System::Drawing::Size(156, 39);
			this->button_SignInAdmin->TabIndex = 47;
			this->button_SignInAdmin->Text = L"Sign In";
			this->button_SignInAdmin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignInAdmin->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignInAdmin->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SignInAdmin->Click += gcnew System::EventHandler(this, &AdminFormLogIn::button_SignInAdmin_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(102, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 25);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Username";
			// 
			// textBox_Password
			// 
			this->textBox_Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->textBox_Password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_Password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_Password->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_Password->HintText = L"Password";
			this->textBox_Password->isPassword = true;
			this->textBox_Password->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_Password->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_Password->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_Password->LineThickness = 3;
			this->textBox_Password->Location = System::Drawing::Point(247, 254);
			this->textBox_Password->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->Size = System::Drawing::Size(370, 44);
			this->textBox_Password->TabIndex = 49;
			this->textBox_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->textBox_Password->OnValueChanged += gcnew System::EventHandler(this, &AdminFormLogIn::textBox_Password_OnValueChanged);
			// 
			// textBox_Username
			// 
			this->textBox_Username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->textBox_Username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_Username->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_Username->HintText = L"User5name";
			this->textBox_Username->isPassword = false;
			this->textBox_Username->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_Username->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_Username->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_Username->LineThickness = 3;
			this->textBox_Username->Location = System::Drawing::Point(247, 166);
			this->textBox_Username->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Username->Name = L"textBox_Username";
			this->textBox_Username->Size = System::Drawing::Size(370, 44);
			this->textBox_Username->TabIndex = 50;
			this->textBox_Username->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(126, 47);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 50);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Sign In";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(0, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(962, 56);
			this->panel1->TabIndex = 21;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(759, 5);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(71, 48);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 30, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label2->Location = System::Drawing::Point(68, 3);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 60);
			this->label2->TabIndex = 10;
			this->label2->Text = L"OTlob";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(631, 5);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(71, 48);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 6;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(503, 5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(71, 48);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(375, 5);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(71, 48);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(247, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(71, 48);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			// 
			// Panel_Header
			// 
			this->Panel_Header->BackColor = System::Drawing::Color::Maroon;
			this->Panel_Header->Controls->Add(this->button_Close);
			this->Panel_Header->Controls->Add(this->button_Minimize);
			this->Panel_Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->Panel_Header->Location = System::Drawing::Point(0, 0);
			this->Panel_Header->Name = L"Panel_Header";
			this->Panel_Header->Size = System::Drawing::Size(962, 45);
			this->Panel_Header->TabIndex = 20;
			// 
			// button_Close
			// 
			this->button_Close->BackColor = System::Drawing::Color::Maroon;
			this->button_Close->FlatAppearance->BorderSize = 0;
			this->button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Close->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Close->Location = System::Drawing::Point(914, 5);
			this->button_Close->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_Close->Name = L"button_Close";
			this->button_Close->Size = System::Drawing::Size(42, 35);
			this->button_Close->TabIndex = 2;
			this->button_Close->Text = L"X";
			this->button_Close->UseVisualStyleBackColor = false;
			this->button_Close->Click += gcnew System::EventHandler(this, &AdminFormLogIn::button_Close_Click);
			// 
			// button_Minimize
			// 
			this->button_Minimize->BackColor = System::Drawing::Color::Maroon;
			this->button_Minimize->FlatAppearance->BorderSize = 0;
			this->button_Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Minimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Minimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Minimize->Location = System::Drawing::Point(864, 5);
			this->button_Minimize->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_Minimize->Name = L"button_Minimize";
			this->button_Minimize->Size = System::Drawing::Size(42, 35);
			this->button_Minimize->TabIndex = 2;
			this->button_Minimize->Text = L"_";
			this->button_Minimize->UseVisualStyleBackColor = false;
			this->button_Minimize->Click += gcnew System::EventHandler(this, &AdminFormLogIn::button_Minimize_Click);
			// 
			// AdminFormLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(962, 671);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Panel_Header);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"AdminFormLogIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->panel3->ResumeLayout(false);
			this->bunifuGradientPanel1->ResumeLayout(false);
			this->bunifuGradientPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->Panel_Header->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button_SignInAdmin_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AdminForm->Show();
	this->Hide();
}
private: System::Void button_SignOut_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::home->Show();
	this->Hide();
}
private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox_Username->Text = "";
	textBox_Password->Text = "";
}
private: System::Void checkBox_ShPass_OnChange(System::Object^  sender, System::EventArgs^  e) {
	textBox_Password->isPassword = (!checkBox_ShPass->Checked);
}
private: System::Void textBox_Password_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox_Password->isPassword = (!checkBox_ShPass->Checked);
}
private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
}
};
}
