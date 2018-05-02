#pragma once
#include<iostream>
#include <fstream>      
#include "json.hpp"
#include <msclr\marshal_cppstd.h>
#include <cstdlib>
#include "Global.h"
#include"User.h"
#include "Customer.h"
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using json = nlohmann::json;
    using namespace msclr::interop;
    using namespace std;
	using namespace Globals;
	//bool Globals::logIn = false;
	/// <summary>
	/// Summary for SignIn
	/// </summary>
	public ref class SignIn : public System::Windows::Forms::Form
	{
	public:
		SignIn(void)
		{
			InitializeComponent();
			GlobalClass::signin = this;
			//
			//TODO: Add the constructor code here
			//
		}
		SignIn(Form^ su)
		{
			InitializeComponent();
			signup = su;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected: 
	private: Form^ signup;
	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::PictureBox^  pictureBox5;


	private: System::Windows::Forms::PictureBox^  pictureBox9;


	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuCheckbox^  checkBox_ShPass;

	private: System::Windows::Forms::Label^  label8;


	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Clear;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SubmitSI;


	private: System::Windows::Forms::Label^  label11;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Textbox_Password;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  TextBox_Username;




	private: System::Windows::Forms::Label^  label_SignUp;
	private: System::Windows::Forms::Panel^  panel1;





	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignIn;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_SignUp;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AdminRoom;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Home;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_MyBills;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllOffers;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllFoods;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllRestuarants;





	private: System::Windows::Forms::Label^  label2;

	protected: 





















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SignIn::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox_ShPass = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button_Clear = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SubmitSI = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Textbox_Password = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->TextBox_Username = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label_SignUp = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Button_SignUp = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Panel_Header = (gcnew System::Windows::Forms::Panel());
			this->button_Close = (gcnew System::Windows::Forms::Button());
			this->button_Minimize = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_AdminRoom = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_Home = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_MyBills = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_AllOffers = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_AllFoods = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_AllRestuarants = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel1->SuspendLayout();
			this->Panel_Header->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->checkBox_ShPass);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->button_Clear);
			this->panel3->Controls->Add(this->button_SubmitSI);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->Textbox_Password);
			this->panel3->Controls->Add(this->TextBox_Username);
			this->panel3->Controls->Add(this->label_SignUp);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 18;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignIn::panel3_Paint);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(109, 81);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(103, 77);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(807, 319);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(33, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 22;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(146, 320);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(33, 25);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(146, 232);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(33, 25);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(706, 320);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(129, 20);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Show Password";
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
			this->checkBox_ShPass->Location = System::Drawing::Point(686, 320);
			this->checkBox_ShPass->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_ShPass->Name = L"checkBox_ShPass";
			this->checkBox_ShPass->Size = System::Drawing::Size(20, 20);
			this->checkBox_ShPass->TabIndex = 20;
			this->checkBox_ShPass->OnChange += gcnew System::EventHandler(this, &SignIn::checkBox_ShPass_OnChange);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(191, 321);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 25);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Password";
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
			this->button_Clear->Location = System::Drawing::Point(336, 429);
			this->button_Clear->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_Clear->Name = L"button_Clear";
			this->button_Clear->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Clear->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_Clear->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_Clear->selected = false;
			this->button_Clear->Size = System::Drawing::Size(156, 39);
			this->button_Clear->TabIndex = 11;
			this->button_Clear->Text = L"Clear";
			this->button_Clear->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_Clear->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Clear->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_Clear->Click += gcnew System::EventHandler(this, &SignIn::button_Clear_Click);
			// 
			// button_SubmitSI
			// 
			this->button_SubmitSI->Activecolor = System::Drawing::Color::Maroon;
			this->button_SubmitSI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SubmitSI->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SubmitSI->BorderRadius = 0;
			this->button_SubmitSI->ButtonText = L"Sign In";
			this->button_SubmitSI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SubmitSI->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SubmitSI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_SubmitSI->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SubmitSI->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SubmitSI->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SubmitSI.Iconimage")));
			this->button_SubmitSI->Iconimage_right = nullptr;
			this->button_SubmitSI->Iconimage_right_Selected = nullptr;
			this->button_SubmitSI->Iconimage_Selected = nullptr;
			this->button_SubmitSI->IconMarginLeft = 0;
			this->button_SubmitSI->IconMarginRight = 0;
			this->button_SubmitSI->IconRightVisible = true;
			this->button_SubmitSI->IconRightZoom = 0;
			this->button_SubmitSI->IconVisible = true;
			this->button_SubmitSI->IconZoom = 80;
			this->button_SubmitSI->IsTab = false;
			this->button_SubmitSI->Location = System::Drawing::Point(550, 429);
			this->button_SubmitSI->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SubmitSI->Name = L"button_SubmitSI";
			this->button_SubmitSI->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SubmitSI->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SubmitSI->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SubmitSI->selected = false;
			this->button_SubmitSI->Size = System::Drawing::Size(156, 39);
			this->button_SubmitSI->TabIndex = 11;
			this->button_SubmitSI->Text = L"Sign In";
			this->button_SubmitSI->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SubmitSI->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SubmitSI->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SubmitSI->Click += gcnew System::EventHandler(this, &SignIn::button_SubmitSI_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(191, 233);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 25);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Username";
			// 
			// Textbox_Password
			// 
			this->Textbox_Password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Textbox_Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->Textbox_Password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Textbox_Password->HintForeColor = System::Drawing::Color::Empty;
			this->Textbox_Password->HintText = L"Password";
			this->Textbox_Password->isPassword = true;
			this->Textbox_Password->LineFocusedColor = System::Drawing::Color::Maroon;
			this->Textbox_Password->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Textbox_Password->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->Textbox_Password->LineThickness = 3;
			this->Textbox_Password->Location = System::Drawing::Point(336, 301);
			this->Textbox_Password->Margin = System::Windows::Forms::Padding(4);
			this->Textbox_Password->Name = L"Textbox_Password";
			this->Textbox_Password->Size = System::Drawing::Size(370, 44);
			this->Textbox_Password->TabIndex = 18;
			this->Textbox_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->Textbox_Password->OnValueChanged += gcnew System::EventHandler(this, &SignIn::Textbox_Password_OnValueChanged);
			// 
			// TextBox_Username
			// 
			this->TextBox_Username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->TextBox_Username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->TextBox_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->TextBox_Username->HintForeColor = System::Drawing::Color::Empty;
			this->TextBox_Username->HintText = L"ex: user6name";
			this->TextBox_Username->isPassword = false;
			this->TextBox_Username->LineFocusedColor = System::Drawing::Color::Maroon;
			this->TextBox_Username->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->TextBox_Username->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->TextBox_Username->LineThickness = 3;
			this->TextBox_Username->Location = System::Drawing::Point(336, 213);
			this->TextBox_Username->Margin = System::Windows::Forms::Padding(4);
			this->TextBox_Username->Name = L"TextBox_Username";
			this->TextBox_Username->Size = System::Drawing::Size(370, 44);
			this->TextBox_Username->TabIndex = 18;
			this->TextBox_Username->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label_SignUp
			// 
			this->label_SignUp->AutoSize = true;
			this->label_SignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_SignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_SignUp->Location = System::Drawing::Point(215, 94);
			this->label_SignUp->Name = L"label_SignUp";
			this->label_SignUp->Size = System::Drawing::Size(174, 50);
			this->label_SignUp->TabIndex = 16;
			this->label_SignUp->Text = L"Sign In";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->button_SignIn);
			this->panel1->Controls->Add(this->Button_SignUp);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 17;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignIn::panel1_Paint);
			// 
			// button_SignIn
			// 
			this->button_SignIn->Activecolor = System::Drawing::Color::Maroon;
			this->button_SignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SignIn->BorderRadius = 0;
			this->button_SignIn->ButtonText = L"Sign In";
			this->button_SignIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SignIn->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SignIn->Enabled = false;
			this->button_SignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_SignIn->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SignIn->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SignIn->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignIn.Iconimage")));
			this->button_SignIn->Iconimage_right = nullptr;
			this->button_SignIn->Iconimage_right_Selected = nullptr;
			this->button_SignIn->Iconimage_Selected = nullptr;
			this->button_SignIn->IconMarginLeft = 0;
			this->button_SignIn->IconMarginRight = 0;
			this->button_SignIn->IconRightVisible = true;
			this->button_SignIn->IconRightZoom = 0;
			this->button_SignIn->IconVisible = true;
			this->button_SignIn->IconZoom = 90;
			this->button_SignIn->IsTab = false;
			this->button_SignIn->Location = System::Drawing::Point(718, -1);
			this->button_SignIn->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignIn->Name = L"button_SignIn";
			this->button_SignIn->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignIn->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignIn->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignIn->selected = false;
			this->button_SignIn->Size = System::Drawing::Size(156, 58);
			this->button_SignIn->TabIndex = 11;
			this->button_SignIn->Text = L"Sign In";
			this->button_SignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignIn->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignIn->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// Button_SignUp
			// 
			this->Button_SignUp->Activecolor = System::Drawing::Color::Maroon;
			this->Button_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_SignUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button_SignUp->BorderRadius = 0;
			this->Button_SignUp->ButtonText = L"Sign Up";
			this->Button_SignUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_SignUp->DisabledColor = System::Drawing::Color::Transparent;
			this->Button_SignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_SignUp->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->Button_SignUp->Iconcolor = System::Drawing::Color::Transparent;
			this->Button_SignUp->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_SignUp.Iconimage")));
			this->Button_SignUp->Iconimage_right = nullptr;
			this->Button_SignUp->Iconimage_right_Selected = nullptr;
			this->Button_SignUp->Iconimage_Selected = nullptr;
			this->Button_SignUp->IconMarginLeft = 0;
			this->Button_SignUp->IconMarginRight = 0;
			this->Button_SignUp->IconRightVisible = true;
			this->Button_SignUp->IconRightZoom = 0;
			this->Button_SignUp->IconVisible = true;
			this->Button_SignUp->IconZoom = 90;
			this->Button_SignUp->IsTab = false;
			this->Button_SignUp->Location = System::Drawing::Point(550, -1);
			this->Button_SignUp->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Button_SignUp->Name = L"Button_SignUp";
			this->Button_SignUp->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_SignUp->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_SignUp->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_SignUp->selected = false;
			this->Button_SignUp->Size = System::Drawing::Size(156, 58);
			this->Button_SignUp->TabIndex = 11;
			this->Button_SignUp->Text = L"Sign Up";
			this->Button_SignUp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_SignUp->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_SignUp->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_SignUp->Click += gcnew System::EventHandler(this, &SignIn::Button_SignUp_Click);
			// 
			// Panel_Header
			// 
			this->Panel_Header->BackColor = System::Drawing::Color::Maroon;
			this->Panel_Header->Controls->Add(this->button_Close);
			this->Panel_Header->Controls->Add(this->button_Minimize);
			this->Panel_Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->Panel_Header->Location = System::Drawing::Point(247, 0);
			this->Panel_Header->Name = L"Panel_Header";
			this->Panel_Header->Size = System::Drawing::Size(960, 45);
			this->Panel_Header->TabIndex = 16;
			this->Panel_Header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SignIn::Panel_Header_MouseDown);
			this->Panel_Header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SignIn::Panel_Header_MouseMove);
			this->Panel_Header->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SignIn::Panel_Header_MouseUp);
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
			this->button_Close->Click += gcnew System::EventHandler(this, &SignIn::button_Close_Click);
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
			this->button_Minimize->Click += gcnew System::EventHandler(this, &SignIn::button_Minimize_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button_AdminRoom);
			this->panel2->Controls->Add(this->button_Home);
			this->panel2->Controls->Add(this->button_MyBills);
			this->panel2->Controls->Add(this->button_AllOffers);
			this->panel2->Controls->Add(this->button_AllFoods);
			this->panel2->Controls->Add(this->button_AllRestuarants);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(247, 671);
			this->panel2->TabIndex = 15;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(57, 116);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// button_AdminRoom
			// 
			this->button_AdminRoom->Activecolor = System::Drawing::Color::Maroon;
			this->button_AdminRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AdminRoom->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_AdminRoom->BorderRadius = 0;
			this->button_AdminRoom->ButtonText = L"Admin Room";
			this->button_AdminRoom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_AdminRoom->DisabledColor = System::Drawing::Color::Transparent;
			this->button_AdminRoom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_AdminRoom->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_AdminRoom->Iconcolor = System::Drawing::Color::Transparent;
			this->button_AdminRoom->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AdminRoom.Iconimage")));
			this->button_AdminRoom->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AdminRoom.Iconimage_right")));
			this->button_AdminRoom->Iconimage_right_Selected = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AdminRoom.Iconimage_right_Selected")));
			this->button_AdminRoom->Iconimage_Selected = nullptr;
			this->button_AdminRoom->IconMarginLeft = 0;
			this->button_AdminRoom->IconMarginRight = 0;
			this->button_AdminRoom->IconRightVisible = true;
			this->button_AdminRoom->IconRightZoom = 0;
			this->button_AdminRoom->IconVisible = true;
			this->button_AdminRoom->IconZoom = 100;
			this->button_AdminRoom->IsTab = false;
			this->button_AdminRoom->Location = System::Drawing::Point(0, 601);
			this->button_AdminRoom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_AdminRoom->Name = L"button_AdminRoom";
			this->button_AdminRoom->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AdminRoom->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_AdminRoom->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_AdminRoom->selected = false;
			this->button_AdminRoom->Size = System::Drawing::Size(248, 70);
			this->button_AdminRoom->TabIndex = 11;
			this->button_AdminRoom->Text = L"Admin Room";
			this->button_AdminRoom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_AdminRoom->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_AdminRoom->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_AdminRoom->Click += gcnew System::EventHandler(this, &SignIn::button_AdminRoom_Click);
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
			this->button_Home->Iconimage_right_Selected = nullptr;
			this->button_Home->Iconimage_Selected = nullptr;
			this->button_Home->IconMarginLeft = 0;
			this->button_Home->IconMarginRight = 0;
			this->button_Home->IconRightVisible = false;
			this->button_Home->IconRightZoom = 0;
			this->button_Home->IconVisible = true;
			this->button_Home->IconZoom = 100;
			this->button_Home->IsTab = false;
			this->button_Home->Location = System::Drawing::Point(0, 218);
			this->button_Home->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_Home->Name = L"button_Home";
			this->button_Home->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_Home->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_Home->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_Home->selected = false;
			this->button_Home->Size = System::Drawing::Size(248, 70);
			this->button_Home->TabIndex = 11;
			this->button_Home->Text = L"Home";
			this->button_Home->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_Home->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Home->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_Home->Click += gcnew System::EventHandler(this, &SignIn::button_Home_Click);
			// 
			// button_MyBills
			// 
			this->button_MyBills->Activecolor = System::Drawing::Color::Maroon;
			this->button_MyBills->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_MyBills->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_MyBills->BorderRadius = 0;
			this->button_MyBills->ButtonText = L"My Bills";
			this->button_MyBills->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_MyBills->DisabledColor = System::Drawing::Color::Transparent;
			this->button_MyBills->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_MyBills->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_MyBills->Iconcolor = System::Drawing::Color::Transparent;
			this->button_MyBills->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_MyBills.Iconimage")));
			this->button_MyBills->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_MyBills.Iconimage_right")));
			this->button_MyBills->Iconimage_right_Selected = nullptr;
			this->button_MyBills->Iconimage_Selected = nullptr;
			this->button_MyBills->IconMarginLeft = 0;
			this->button_MyBills->IconMarginRight = 0;
			this->button_MyBills->IconRightVisible = true;
			this->button_MyBills->IconRightZoom = 0;
			this->button_MyBills->IconVisible = true;
			this->button_MyBills->IconZoom = 100;
			this->button_MyBills->IsTab = false;
			this->button_MyBills->Location = System::Drawing::Point(0, 514);
			this->button_MyBills->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_MyBills->Name = L"button_MyBills";
			this->button_MyBills->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_MyBills->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_MyBills->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_MyBills->selected = false;
			this->button_MyBills->Size = System::Drawing::Size(248, 70);
			this->button_MyBills->TabIndex = 11;
			this->button_MyBills->Text = L"My Bills";
			this->button_MyBills->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_MyBills->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_MyBills->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// button_AllOffers
			// 
			this->button_AllOffers->Activecolor = System::Drawing::Color::Maroon;
			this->button_AllOffers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllOffers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_AllOffers->BorderRadius = 0;
			this->button_AllOffers->ButtonText = L"All Offers";
			this->button_AllOffers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_AllOffers->DisabledColor = System::Drawing::Color::Transparent;
			this->button_AllOffers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_AllOffers->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_AllOffers->Iconcolor = System::Drawing::Color::Transparent;
			this->button_AllOffers->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AllOffers.Iconimage")));
			this->button_AllOffers->Iconimage_right = nullptr;
			this->button_AllOffers->Iconimage_right_Selected = nullptr;
			this->button_AllOffers->Iconimage_Selected = nullptr;
			this->button_AllOffers->IconMarginLeft = 0;
			this->button_AllOffers->IconMarginRight = 0;
			this->button_AllOffers->IconRightVisible = true;
			this->button_AllOffers->IconRightZoom = 0;
			this->button_AllOffers->IconVisible = true;
			this->button_AllOffers->IconZoom = 100;
			this->button_AllOffers->IsTab = false;
			this->button_AllOffers->Location = System::Drawing::Point(0, 440);
			this->button_AllOffers->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_AllOffers->Name = L"button_AllOffers";
			this->button_AllOffers->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllOffers->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_AllOffers->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_AllOffers->selected = false;
			this->button_AllOffers->Size = System::Drawing::Size(248, 70);
			this->button_AllOffers->TabIndex = 11;
			this->button_AllOffers->Text = L"All Offers";
			this->button_AllOffers->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_AllOffers->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_AllOffers->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// button_AllFoods
			// 
			this->button_AllFoods->Activecolor = System::Drawing::Color::Maroon;
			this->button_AllFoods->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllFoods->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_AllFoods->BorderRadius = 0;
			this->button_AllFoods->ButtonText = L"Foods";
			this->button_AllFoods->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_AllFoods->DisabledColor = System::Drawing::Color::Transparent;
			this->button_AllFoods->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_AllFoods->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_AllFoods->Iconcolor = System::Drawing::Color::Transparent;
			this->button_AllFoods->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AllFoods.Iconimage")));
			this->button_AllFoods->Iconimage_right = nullptr;
			this->button_AllFoods->Iconimage_right_Selected = nullptr;
			this->button_AllFoods->Iconimage_Selected = nullptr;
			this->button_AllFoods->IconMarginLeft = 0;
			this->button_AllFoods->IconMarginRight = 0;
			this->button_AllFoods->IconRightVisible = true;
			this->button_AllFoods->IconRightZoom = 0;
			this->button_AllFoods->IconVisible = true;
			this->button_AllFoods->IconZoom = 100;
			this->button_AllFoods->IsTab = false;
			this->button_AllFoods->Location = System::Drawing::Point(0, 366);
			this->button_AllFoods->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_AllFoods->Name = L"button_AllFoods";
			this->button_AllFoods->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllFoods->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_AllFoods->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_AllFoods->selected = false;
			this->button_AllFoods->Size = System::Drawing::Size(248, 70);
			this->button_AllFoods->TabIndex = 11;
			this->button_AllFoods->Text = L"Foods";
			this->button_AllFoods->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_AllFoods->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_AllFoods->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// button_AllRestuarants
			// 
			this->button_AllRestuarants->Activecolor = System::Drawing::Color::Maroon;
			this->button_AllRestuarants->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllRestuarants->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_AllRestuarants->BorderRadius = 0;
			this->button_AllRestuarants->ButtonText = L"All Restaurants";
			this->button_AllRestuarants->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_AllRestuarants->DisabledColor = System::Drawing::Color::Transparent;
			this->button_AllRestuarants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_AllRestuarants->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_AllRestuarants->Iconcolor = System::Drawing::Color::Transparent;
			this->button_AllRestuarants->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AllRestuarants.Iconimage")));
			this->button_AllRestuarants->Iconimage_right = nullptr;
			this->button_AllRestuarants->Iconimage_right_Selected = nullptr;
			this->button_AllRestuarants->Iconimage_Selected = nullptr;
			this->button_AllRestuarants->IconMarginLeft = 0;
			this->button_AllRestuarants->IconMarginRight = 0;
			this->button_AllRestuarants->IconRightVisible = true;
			this->button_AllRestuarants->IconRightZoom = 0;
			this->button_AllRestuarants->IconVisible = true;
			this->button_AllRestuarants->IconZoom = 100;
			this->button_AllRestuarants->IsTab = false;
			this->button_AllRestuarants->Location = System::Drawing::Point(0, 292);
			this->button_AllRestuarants->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_AllRestuarants->Name = L"button_AllRestuarants";
			this->button_AllRestuarants->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllRestuarants->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_AllRestuarants->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_AllRestuarants->selected = false;
			this->button_AllRestuarants->Size = System::Drawing::Size(248, 70);
			this->button_AllRestuarants->TabIndex = 11;
			this->button_AllRestuarants->Text = L"All Restaurants";
			this->button_AllRestuarants->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_AllRestuarants->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_AllRestuarants->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 52.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label2->Location = System::Drawing::Point(26, 23);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 105);
			this->label2->TabIndex = 10;
			this->label2->Text = L"OTlob";
			// 
			// SignIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1207, 671);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Panel_Header);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"SignIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignIn";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel1->ResumeLayout(false);
			this->Panel_Header->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Button_SignUp_Click(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::signup->Show();
		this->Hide();
		 }
private: System::Void button_SubmitSI_Click(System::Object^  sender, System::EventArgs^  e) {
	Customer^ customer = gcnew Customer();
	customer->SignIn_Data(TextBox_Username->Text, Textbox_Password->Text);
    String^ return_val = customer->SignIn("Users.json");
    if (return_val == "LogIn")
    {
        TextBox_Username->Text = "";
        Textbox_Password->Text = "";
        GlobalClass::home->Show();
        this->Hide();
    }
    else
    {
        MessageBox::Show(return_val, "Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Asterisk);
    }
}
private: System::Void Textbox_Password_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {


    Textbox_Password->isPassword = (!checkBox_ShPass->Checked);

}
private: System::Void checkBox_ShPass_OnChange(System::Object^  sender, System::EventArgs^  e) {

    Textbox_Password->isPassword = (!checkBox_ShPass->Checked);

}
private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	if (GlobalClass::LogIn == true) {
		button_SignIn->Visible = false;
		Button_SignUp->Visible = false;
	}
}
private: System::Void button_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
	TextBox_Username->Text = "";
	Textbox_Password->Text = "";
}
private: System::Void button_Home_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::home->Show();
	this->Hide();
}
	private: System::Void Panel_Header_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void Panel_Header_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging)
		{
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void Panel_Header_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
private: System::Void button_AdminRoom_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AdminFormLogIn->Show();
	this->Hide();
}
/*private: System::Void button_AllRestaurants_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AllRestaurants->ShowDialog();
}
private: System::Void buttton_Foods_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::FoodsName->ShowDialog();
}
private: System::Void buttton_AllOffers_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AllOffers->ShowDialog();
}
private: System::Void button_MyBills_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::MyBills->ShowDialog();
}*/
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
