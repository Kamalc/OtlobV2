#pragma once
#include<iostream>
#include <fstream>      
#include "json.hpp"
#include <msclr\marshal_cppstd.h>
#include "Global.h"
#include "Convert_strings.h"
#include"Customer.h"
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
	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
		{
			InitializeComponent();
			GlobalClass::profile = this;
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label_Username;
	private: System::Windows::Forms::Label^  label_UsernameN;

	private: bool dragging;
	private: Point offset;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AdminRoom;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Home;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_MyBills;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllOffers;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllRestuarants;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel3;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuCheckbox^  checkBox_ShPass;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label1;

	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SubmitSU;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Phone;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Textbox_Password;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Email;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_FirstName;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_username;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_LastName;
	private: System::Windows::Forms::Label^  label_SignUp;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignOut;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllFoods;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_SignOut = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_UsernameN = (gcnew System::Windows::Forms::Label());
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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->checkBox_ShPass = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_SubmitSU = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_Phone = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->Textbox_Password = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_Email = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_FirstName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_username = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->textBox_LastName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label_SignUp = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->Panel_Header->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->button_SignOut);
			this->panel1->Controls->Add(this->label_Username);
			this->panel1->Controls->Add(this->label_UsernameN);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 21;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Profile::panel1_Paint);
			// 
			// button_SignOut
			// 
			this->button_SignOut->Activecolor = System::Drawing::Color::Maroon;
			this->button_SignOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SignOut->BorderRadius = 0;
			this->button_SignOut->ButtonText = L"Sign Out";
			this->button_SignOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SignOut->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SignOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_SignOut->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SignOut->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SignOut->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignOut.Iconimage")));
			this->button_SignOut->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SignOut.Iconimage_right")));
			this->button_SignOut->Iconimage_right_Selected = nullptr;
			this->button_SignOut->Iconimage_Selected = nullptr;
			this->button_SignOut->IconMarginLeft = 0;
			this->button_SignOut->IconMarginRight = 0;
			this->button_SignOut->IconRightVisible = true;
			this->button_SignOut->IconRightZoom = 70;
			this->button_SignOut->IconVisible = true;
			this->button_SignOut->IconZoom = 90;
			this->button_SignOut->IsTab = false;
			this->button_SignOut->Location = System::Drawing::Point(363, -1);
			this->button_SignOut->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignOut->Name = L"button_SignOut";
			this->button_SignOut->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignOut->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignOut->selected = false;
			this->button_SignOut->Size = System::Drawing::Size(234, 58);
			this->button_SignOut->TabIndex = 14;
			this->button_SignOut->Text = L"Sign Out";
			this->button_SignOut->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignOut->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignOut->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SignOut->Visible = false;
			this->button_SignOut->Click += gcnew System::EventHandler(this, &Profile::button_SignOut_Click);
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_Username->Location = System::Drawing::Point(808, 18);
			this->label_Username->Name = L"label_Username";
			this->label_Username->Size = System::Drawing::Size(0, 25);
			this->label_Username->TabIndex = 0;
			// 
			// label_UsernameN
			// 
			this->label_UsernameN->AutoSize = true;
			this->label_UsernameN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_UsernameN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_UsernameN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_UsernameN.Image")));
			this->label_UsernameN->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_UsernameN->Location = System::Drawing::Point(709, 18);
			this->label_UsernameN->Name = L"label_UsernameN";
			this->label_UsernameN->Size = System::Drawing::Size(120, 25);
			this->label_UsernameN->TabIndex = 0;
			this->label_UsernameN->Text = L"username :";
			this->label_UsernameN->Visible = false;
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
			this->Panel_Header->TabIndex = 20;
			this->Panel_Header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseDown);
			this->Panel_Header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseMove);
			this->Panel_Header->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseUp);
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
			this->button_Close->Click += gcnew System::EventHandler(this, &Profile::button_Close_Click);
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
			this->button_Minimize->Click += gcnew System::EventHandler(this, &Profile::button_Minimize_Click);
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
			this->panel2->TabIndex = 19;
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
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseUp);
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
			this->button_AdminRoom->Click += gcnew System::EventHandler(this, &Profile::button_AdminRoom_Click);
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
			this->button_Home->Click += gcnew System::EventHandler(this, &Profile::button_Home_Click);
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
			//this->button_MyBills->Click += gcnew System::EventHandler(this, &Profile::button_MyBills_Click);
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
			//this->button_AllOffers->Click += gcnew System::EventHandler(this, &Profile::button_AllOffers_Click);
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
//			this->button_AllFoods->Click += gcnew System::EventHandler(this, &Profile::button_AllFoods_Click);
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
			//this->button_AllRestuarants->Click += gcnew System::EventHandler(this, &Profile::button_AllRestuarants_Click);
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
			this->label2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseDown);
			this->label2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseMove);
			this->label2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::Panel_Header_MouseUp);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Controls->Add(this->bunifuDatepicker1);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->checkBox_ShPass);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button_SubmitSU);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->textBox_Phone);
			this->panel3->Controls->Add(this->Textbox_Password);
			this->panel3->Controls->Add(this->textBox_Email);
			this->panel3->Controls->Add(this->textBox_FirstName);
			this->panel3->Controls->Add(this->textBox_username);
			this->panel3->Controls->Add(this->textBox_LastName);
			this->panel3->Controls->Add(this->label_SignUp);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 22;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Profile::panel3_Paint);
			// 
			// bunifuDatepicker1
			// 
			this->bunifuDatepicker1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuDatepicker1->BorderRadius = 0;
			this->bunifuDatepicker1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker1->FormatCustom = nullptr;
			this->bunifuDatepicker1->Location = System::Drawing::Point(338, 399);
			this->bunifuDatepicker1->Margin = System::Windows::Forms::Padding(6);
			this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
			this->bunifuDatepicker1->Size = System::Drawing::Size(370, 44);
			this->bunifuDatepicker1->TabIndex = 24;
			this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 20, 15, 37, 7, 630);
			this->bunifuDatepicker1->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(95, 1);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(103, 77);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(809, 353);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(33, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 22;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(148, 478);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(33, 25);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 22;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(148, 354);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(33, 25);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(148, 287);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(33, 25);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(148, 414);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(33, 25);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(148, 225);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(33, 25);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(148, 162);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 25);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(148, 94);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(708, 354);
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
			this->checkBox_ShPass->Location = System::Drawing::Point(688, 354);
			this->checkBox_ShPass->Margin = System::Windows::Forms::Padding(6);
			this->checkBox_ShPass->Name = L"checkBox_ShPass";
			this->checkBox_ShPass->Size = System::Drawing::Size(20, 20);
			this->checkBox_ShPass->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(193, 479);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Phone";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(193, 355);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 25);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(193, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(193, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 25);
			this->label1->TabIndex = 19;
			this->label1->Text = L"First Name";
			// 
			// button_SubmitSU
			// 
			this->button_SubmitSU->Activecolor = System::Drawing::Color::Maroon;
			this->button_SubmitSU->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SubmitSU->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SubmitSU->BorderRadius = 0;
			this->button_SubmitSU->ButtonText = L"Submit";
			this->button_SubmitSU->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SubmitSU->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SubmitSU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_SubmitSU->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SubmitSU->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SubmitSU->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_SubmitSU.Iconimage")));
			this->button_SubmitSU->Iconimage_right = nullptr;
			this->button_SubmitSU->Iconimage_right_Selected = nullptr;
			this->button_SubmitSU->Iconimage_Selected = nullptr;
			this->button_SubmitSU->IconMarginLeft = 0;
			this->button_SubmitSU->IconMarginRight = 0;
			this->button_SubmitSU->IconRightVisible = true;
			this->button_SubmitSU->IconRightZoom = 0;
			this->button_SubmitSU->IconVisible = true;
			this->button_SubmitSU->IconZoom = 80;
			this->button_SubmitSU->IsTab = false;
			this->button_SubmitSU->Location = System::Drawing::Point(387, 525);
			this->button_SubmitSU->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SubmitSU->Name = L"button_SubmitSU";
			this->button_SubmitSU->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SubmitSU->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SubmitSU->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SubmitSU->selected = false;
			this->button_SubmitSU->Size = System::Drawing::Size(230, 39);
			this->button_SubmitSU->TabIndex = 11;
			this->button_SubmitSU->Text = L"Submit";
			this->button_SubmitSU->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SubmitSU->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SubmitSU->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SubmitSU->Click += gcnew System::EventHandler(this, &Profile::button_SubmitSU_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(193, 415);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(118, 25);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Date of Birth";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(193, 226);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 25);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(193, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Last Name";
			// 
			// textBox_Phone
			// 
			this->textBox_Phone->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Phone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_Phone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_Phone->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_Phone->HintText = L"Enter Your number";
			this->textBox_Phone->isPassword = false;
			this->textBox_Phone->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_Phone->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_Phone->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_Phone->LineThickness = 3;
			this->textBox_Phone->Location = System::Drawing::Point(338, 459);
			this->textBox_Phone->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Phone->Name = L"textBox_Phone";
			this->textBox_Phone->Size = System::Drawing::Size(370, 44);
			this->textBox_Phone->TabIndex = 18;
			this->textBox_Phone->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->Textbox_Password->Location = System::Drawing::Point(338, 335);
			this->Textbox_Password->Margin = System::Windows::Forms::Padding(4);
			this->Textbox_Password->Name = L"Textbox_Password";
			this->Textbox_Password->Size = System::Drawing::Size(370, 44);
			this->Textbox_Password->TabIndex = 18;
			this->Textbox_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBox_Email
			// 
			this->textBox_Email->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_Email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_Email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_Email->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_Email->HintText = L"ex: Email1992@gmail.com";
			this->textBox_Email->isPassword = false;
			this->textBox_Email->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_Email->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_Email->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_Email->LineThickness = 3;
			this->textBox_Email->Location = System::Drawing::Point(338, 268);
			this->textBox_Email->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Email->Name = L"textBox_Email";
			this->textBox_Email->Size = System::Drawing::Size(370, 44);
			this->textBox_Email->TabIndex = 18;
			this->textBox_Email->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBox_FirstName
			// 
			this->textBox_FirstName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_FirstName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_FirstName->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_FirstName->HintText = L"";
			this->textBox_FirstName->isPassword = false;
			this->textBox_FirstName->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_FirstName->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_FirstName->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_FirstName->LineThickness = 3;
			this->textBox_FirstName->Location = System::Drawing::Point(338, 75);
			this->textBox_FirstName->Margin = System::Windows::Forms::Padding(4);
			this->textBox_FirstName->Name = L"textBox_FirstName";
			this->textBox_FirstName->Size = System::Drawing::Size(370, 44);
			this->textBox_FirstName->TabIndex = 18;
			this->textBox_FirstName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBox_username
			// 
			this->textBox_username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_username->Enabled = false;
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_username->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_username->HintText = L"Choose something unique";
			this->textBox_username->isPassword = false;
			this->textBox_username->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_username->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_username->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_username->LineThickness = 3;
			this->textBox_username->Location = System::Drawing::Point(338, 206);
			this->textBox_username->Margin = System::Windows::Forms::Padding(4);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(370, 44);
			this->textBox_username->TabIndex = 18;
			this->textBox_username->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// textBox_LastName
			// 
			this->textBox_LastName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_LastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->textBox_LastName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_LastName->HintForeColor = System::Drawing::Color::Empty;
			this->textBox_LastName->HintText = L"";
			this->textBox_LastName->isPassword = false;
			this->textBox_LastName->LineFocusedColor = System::Drawing::Color::Maroon;
			this->textBox_LastName->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox_LastName->LineMouseHoverColor = System::Drawing::Color::Maroon;
			this->textBox_LastName->LineThickness = 3;
			this->textBox_LastName->Location = System::Drawing::Point(338, 143);
			this->textBox_LastName->Margin = System::Windows::Forms::Padding(4);
			this->textBox_LastName->Name = L"textBox_LastName";
			this->textBox_LastName->Size = System::Drawing::Size(370, 44);
			this->textBox_LastName->TabIndex = 18;
			this->textBox_LastName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label_SignUp
			// 
			this->label_SignUp->AutoSize = true;
			this->label_SignUp->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_SignUp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_SignUp->Location = System::Drawing::Point(201, 14);
			this->label_SignUp->Name = L"label_SignUp";
			this->label_SignUp->Size = System::Drawing::Size(167, 50);
			this->label_SignUp->TabIndex = 16;
			this->label_SignUp->Text = L"Profile";
			// 
			// Profile
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
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Panel_Header->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_SubmitSU_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ifstream i("Users.json");
		json j;
		i >> j;
		Convert_strings temp;
	    String^Day= temp.Convert_std_to_System(j[temp.Convert_System_to_std(textBox_username->Text)]["Date Birth"]["Day"]);
		String^Month = temp.Convert_std_to_System(j[temp.Convert_System_to_std(textBox_username->Text)]["Date Birth"]["Month"]);
		String^Year = temp.Convert_std_to_System(j[temp.Convert_System_to_std(textBox_username->Text)]["Date Birth"]["Year"]);
		Customer^ newCustomer = gcnew Customer(textBox_username->Text, Textbox_Password->Text, textBox_Email->Text, Day, Month, Year, textBox_FirstName->Text, textBox_LastName->Text, textBox_Phone->Text);
		newCustomer->SignUp("Users.json");
	}
private: System::Void button_Home_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::home->Show();
	this->Hide();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	if (GlobalClass::LogIn) {
		label_UsernameN->Visible = true;
		label_Username->Text = GlobalClass::username;
		button_SignOut->Visible = true;
	}
	else {
		label_UsernameN->Visible = false;
		label_Username->Text = GlobalClass::username;
		button_SignOut->Visible = false;
	}
}
private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
	private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
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
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
		ifstream i("Users.json");
		json j;
		i >> j;
		String ^User_name_system = GlobalClass::username;
		string Username = marshal_as<string>(User_name_system);
		Convert_strings tmp;
		String^ First = tmp.Convert_std_to_System(j[Username]["Name"]["First"]);
		String^ Last = tmp.Convert_std_to_System(j[Username]["Name"]["Last"]);
		String^ Email = tmp.Convert_std_to_System(j[Username]["Email"]);
		String^ Password = tmp.Convert_std_to_System(j[Username]["Password"]);
/*		String^ Day= convert_string_std_to_system(j[Username]["Date Birth"]["Day"]);
		String^ Month= convert_string_std_to_system(j[Username]["Date Birth"]["Month"]) ;
		String^ Year= convert_string_std_to_system(j[Username]["Date Birth"]["Year"]);*/
		String^ Phone = tmp.Convert_std_to_System(j[Username]["Phone"]);
		
		textBox_username->Text = GlobalClass::username;
		textBox_FirstName->Text = First;
		textBox_LastName->Text = Last;
		textBox_Email->Text = Email;
		Textbox_Password->Text = Password;

		textBox_Phone->Text = Phone;
		
		
	}


private: System::Void button_SignOut_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::LogIn = false;
	GlobalClass::username = "";
	GlobalClass::home->Show();
	this->Hide();
}
private: System::Void button_AdminRoom_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AdminFormLogIn->Show();
	this->Hide();
}
/*private: System::Void buttton_Foods_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::FoodsName->ShowDialog();
}
private: System::Void buttton_AllOffers_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AllOffers->ShowDialog();
}
private: System::Void button_MyBills_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::MyBills->ShowDialog();
}
private: System::Void button_AllRestaurants_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AllRestaurants->ShowDialog();
}*/
};
}
