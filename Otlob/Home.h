#pragma once
#include "Global.h"
#include "Profile.h"
#include <fstream>      
#include <cstdlib>
#include "Convert_strings.h"
#include "Restraunt.h"
#include "MainMeal.h"
#include"ShowRestaurants.h"
namespace Otlob {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			this->dragging = false;
			GlobalClass::home = this;
			if (GlobalClass::LogIn) {
				label_UsernameN->Visible = true;
				button_SignIn->Visible = false;
				Button_SignUp->Visible = false;
				label_Username->Text = GlobalClass::username;
				Button_Profile->Visible = true;
				button_SignOut->Visible = true;
			}			//GlobalClass::profile = p;
						//
						//TODO: Add the constructor code here
						//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: bool dragging;
	private: Point offset;













	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_ShowRs;
	private: System::Windows::Forms::ComboBox^  comboBox_Address;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_UsernameN;






	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignIn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_MyBills;

	private: Bunifu::Framework::UI::BunifuFlatButton^  buttton_AllOffers;

	private: Bunifu::Framework::UI::BunifuFlatButton^  buttton_Foods;

	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AllRestaurants;

	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_SignUp;
	private: System::Windows::Forms::Label^  label_Username;

	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox8;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox7;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox6;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox5;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox4;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox3;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox2;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_Profile;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignOut;















	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_MyBills = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->buttton_AllOffers = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->buttton_Foods = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_AllRestaurants = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Button_SignUp = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Panel_Header = (gcnew System::Windows::Forms::Panel());
			this->button_Close = (gcnew System::Windows::Forms::Button());
			this->button_Minimize = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button_SignOut = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_UsernameN = (gcnew System::Windows::Forms::Label());
			this->Button_Profile = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bunifuCheckbox8 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox7 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox6 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox5 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox4 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox3 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox2 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox1 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Button_ShowRs = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->comboBox_Address = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Panel_Header->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->bunifuFlatButton5);
			this->panel2->Controls->Add(this->button_MyBills);
			this->panel2->Controls->Add(this->buttton_AllOffers);
			this->panel2->Controls->Add(this->buttton_Foods);
			this->panel2->Controls->Add(this->button_AllRestaurants);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(247, 671);
			this->panel2->TabIndex = 7;
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
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"Admin Room";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage_right")));
			this->bunifuFlatButton5->Iconimage_right_Selected = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage_right_Selected")));
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = true;
			this->bunifuFlatButton5->IconZoom = 80;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(0, 576);
			this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(6);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(248, 70);
			this->bunifuFlatButton5->TabIndex = 11;
			this->bunifuFlatButton5->Text = L"Admin Room";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->bunifuFlatButton5->Click += gcnew System::EventHandler(this, &Home::bunifuFlatButton5_Click);
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
			this->button_MyBills->IconZoom = 80;
			this->button_MyBills->IsTab = false;
			this->button_MyBills->Location = System::Drawing::Point(0, 439);
			this->button_MyBills->Margin = System::Windows::Forms::Padding(6);
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
			this->button_MyBills->Click += gcnew System::EventHandler(this, &Home::button_MyBills_Click);
			// 
			// buttton_AllOffers
			// 
			this->buttton_AllOffers->Activecolor = System::Drawing::Color::Maroon;
			this->buttton_AllOffers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttton_AllOffers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttton_AllOffers->BorderRadius = 0;
			this->buttton_AllOffers->ButtonText = L"All Offers";
			this->buttton_AllOffers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttton_AllOffers->DisabledColor = System::Drawing::Color::Transparent;
			this->buttton_AllOffers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttton_AllOffers->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->buttton_AllOffers->Iconcolor = System::Drawing::Color::Transparent;
			this->buttton_AllOffers->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttton_AllOffers.Iconimage")));
			this->buttton_AllOffers->Iconimage_right = nullptr;
			this->buttton_AllOffers->Iconimage_right_Selected = nullptr;
			this->buttton_AllOffers->Iconimage_Selected = nullptr;
			this->buttton_AllOffers->IconMarginLeft = 0;
			this->buttton_AllOffers->IconMarginRight = 0;
			this->buttton_AllOffers->IconRightVisible = true;
			this->buttton_AllOffers->IconRightZoom = 0;
			this->buttton_AllOffers->IconVisible = true;
			this->buttton_AllOffers->IconZoom = 80;
			this->buttton_AllOffers->IsTab = false;
			this->buttton_AllOffers->Location = System::Drawing::Point(0, 366);
			this->buttton_AllOffers->Margin = System::Windows::Forms::Padding(6);
			this->buttton_AllOffers->Name = L"buttton_AllOffers";
			this->buttton_AllOffers->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttton_AllOffers->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->buttton_AllOffers->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttton_AllOffers->selected = false;
			this->buttton_AllOffers->Size = System::Drawing::Size(248, 70);
			this->buttton_AllOffers->TabIndex = 11;
			this->buttton_AllOffers->Text = L"All Offers";
			this->buttton_AllOffers->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttton_AllOffers->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->buttton_AllOffers->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->buttton_AllOffers->Click += gcnew System::EventHandler(this, &Home::buttton_AllOffers_Click);
			// 
			// buttton_Foods
			// 
			this->buttton_Foods->Activecolor = System::Drawing::Color::Maroon;
			this->buttton_Foods->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttton_Foods->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttton_Foods->BorderRadius = 0;
			this->buttton_Foods->ButtonText = L"Foods";
			this->buttton_Foods->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttton_Foods->DisabledColor = System::Drawing::Color::Transparent;
			this->buttton_Foods->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttton_Foods->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->buttton_Foods->Iconcolor = System::Drawing::Color::Transparent;
			this->buttton_Foods->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttton_Foods.Iconimage")));
			this->buttton_Foods->Iconimage_right = nullptr;
			this->buttton_Foods->Iconimage_right_Selected = nullptr;
			this->buttton_Foods->Iconimage_Selected = nullptr;
			this->buttton_Foods->IconMarginLeft = 0;
			this->buttton_Foods->IconMarginRight = 0;
			this->buttton_Foods->IconRightVisible = true;
			this->buttton_Foods->IconRightZoom = 0;
			this->buttton_Foods->IconVisible = true;
			this->buttton_Foods->IconZoom = 80;
			this->buttton_Foods->IsTab = false;
			this->buttton_Foods->Location = System::Drawing::Point(0, 291);
			this->buttton_Foods->Margin = System::Windows::Forms::Padding(6);
			this->buttton_Foods->Name = L"buttton_Foods";
			this->buttton_Foods->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttton_Foods->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->buttton_Foods->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttton_Foods->selected = false;
			this->buttton_Foods->Size = System::Drawing::Size(248, 70);
			this->buttton_Foods->TabIndex = 11;
			this->buttton_Foods->Text = L"Foods";
			this->buttton_Foods->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->buttton_Foods->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->buttton_Foods->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->buttton_Foods->Click += gcnew System::EventHandler(this, &Home::buttton_Foods_Click);
			// 
			// button_AllRestaurants
			// 
			this->button_AllRestaurants->Activecolor = System::Drawing::Color::Maroon;
			this->button_AllRestaurants->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllRestaurants->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_AllRestaurants->BorderRadius = 0;
			this->button_AllRestaurants->ButtonText = L"All Restaurants";
			this->button_AllRestaurants->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_AllRestaurants->DisabledColor = System::Drawing::Color::Transparent;
			this->button_AllRestaurants->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_AllRestaurants->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_AllRestaurants->Iconcolor = System::Drawing::Color::Transparent;
			this->button_AllRestaurants->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_AllRestaurants.Iconimage")));
			this->button_AllRestaurants->Iconimage_right = nullptr;
			this->button_AllRestaurants->Iconimage_right_Selected = nullptr;
			this->button_AllRestaurants->Iconimage_Selected = nullptr;
			this->button_AllRestaurants->IconMarginLeft = 0;
			this->button_AllRestaurants->IconMarginRight = 0;
			this->button_AllRestaurants->IconRightVisible = true;
			this->button_AllRestaurants->IconRightZoom = 0;
			this->button_AllRestaurants->IconVisible = true;
			this->button_AllRestaurants->IconZoom = 80;
			this->button_AllRestaurants->IsTab = false;
			this->button_AllRestaurants->Location = System::Drawing::Point(0, 216);
			this->button_AllRestaurants->Margin = System::Windows::Forms::Padding(6);
			this->button_AllRestaurants->Name = L"button_AllRestaurants";
			this->button_AllRestaurants->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_AllRestaurants->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_AllRestaurants->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_AllRestaurants->selected = false;
			this->button_AllRestaurants->Size = System::Drawing::Size(248, 70);
			this->button_AllRestaurants->TabIndex = 11;
			this->button_AllRestaurants->Text = L"All Restaurants";
			this->button_AllRestaurants->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_AllRestaurants->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_AllRestaurants->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_AllRestaurants->Click += gcnew System::EventHandler(this, &Home::button_AllRestaurants_Click);
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
			this->label2->Size = System::Drawing::Size(155, 83);
			this->label2->TabIndex = 10;
			this->label2->Text = L"OTlob";
			this->label2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->label2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->label2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
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
			this->Button_SignUp->IconZoom = 50;
			this->Button_SignUp->IsTab = false;
			this->Button_SignUp->Location = System::Drawing::Point(550, -1);
			this->Button_SignUp->Margin = System::Windows::Forms::Padding(6);
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
			this->Button_SignUp->Click += gcnew System::EventHandler(this, &Home::Button_SignUp_Click);
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
			this->button_SignIn->IconZoom = 50;
			this->button_SignIn->IsTab = false;
			this->button_SignIn->Location = System::Drawing::Point(718, -1);
			this->button_SignIn->Margin = System::Windows::Forms::Padding(6);
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
			this->button_SignIn->Click += gcnew System::EventHandler(this, &Home::button_SignIn_Click);
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
			this->Panel_Header->TabIndex = 8;
			this->Panel_Header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->Panel_Header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->Panel_Header->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
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
			this->button_Close->Click += gcnew System::EventHandler(this, &Home::button_Close_Click);
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
			this->button_Minimize->Click += gcnew System::EventHandler(this, &Home::button_Minimize_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->button_SignOut);
			this->panel1->Controls->Add(this->label_Username);
			this->panel1->Controls->Add(this->label_UsernameN);
			this->panel1->Controls->Add(this->button_SignIn);
			this->panel1->Controls->Add(this->Button_SignUp);
			this->panel1->Controls->Add(this->Button_Profile);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel1_Paint);
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
			this->button_SignOut->Location = System::Drawing::Point(66, -1);
			this->button_SignOut->Margin = System::Windows::Forms::Padding(6);
			this->button_SignOut->Name = L"button_SignOut";
			this->button_SignOut->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignOut->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignOut->selected = false;
			this->button_SignOut->Size = System::Drawing::Size(234, 58);
			this->button_SignOut->TabIndex = 13;
			this->button_SignOut->Text = L"Sign Out";
			this->button_SignOut->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignOut->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignOut->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SignOut->Visible = false;
			this->button_SignOut->Click += gcnew System::EventHandler(this, &Home::button_SignOut_Click);
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_Username->Location = System::Drawing::Point(812, 18);
			this->label_Username->Name = L"label_Username";
			this->label_Username->Size = System::Drawing::Size(0, 20);
			this->label_Username->TabIndex = 0;
			// 
			// label_UsernameN
			// 
			this->label_UsernameN->AutoSize = true;
			this->label_UsernameN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_UsernameN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_UsernameN->Location = System::Drawing::Point(709, 18);
			this->label_UsernameN->Name = L"label_UsernameN";
			this->label_UsernameN->Size = System::Drawing::Size(98, 20);
			this->label_UsernameN->TabIndex = 0;
			this->label_UsernameN->Text = L"username :";
			this->label_UsernameN->Visible = false;
			// 
			// Button_Profile
			// 
			this->Button_Profile->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button_Profile->BorderRadius = 0;
			this->Button_Profile->ButtonText = L"Profile";
			this->Button_Profile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_Profile->DisabledColor = System::Drawing::Color::Gray;
			this->Button_Profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Profile->ForeColor = System::Drawing::Color::Tan;
			this->Button_Profile->Iconcolor = System::Drawing::Color::Transparent;
			this->Button_Profile->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Profile.Iconimage")));
			this->Button_Profile->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Profile.Iconimage_right")));
			this->Button_Profile->Iconimage_right_Selected = nullptr;
			this->Button_Profile->Iconimage_Selected = nullptr;
			this->Button_Profile->IconMarginLeft = 0;
			this->Button_Profile->IconMarginRight = 0;
			this->Button_Profile->IconRightVisible = false;
			this->Button_Profile->IconRightZoom = 0;
			this->Button_Profile->IconVisible = true;
			this->Button_Profile->IconZoom = 70;
			this->Button_Profile->IsTab = false;
			this->Button_Profile->Location = System::Drawing::Point(550, -1);
			this->Button_Profile->Margin = System::Windows::Forms::Padding(6);
			this->Button_Profile->Name = L"Button_Profile";
			this->Button_Profile->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_Profile->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_Profile->selected = false;
			this->Button_Profile->Size = System::Drawing::Size(156, 58);
			this->Button_Profile->TabIndex = 9;
			this->Button_Profile->Text = L"Profile";
			this->Button_Profile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_Profile->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_Profile->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_Profile->Click += gcnew System::EventHandler(this, &Home::Button_Proflie_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->bunifuCheckbox8);
			this->panel3->Controls->Add(this->bunifuCheckbox7);
			this->panel3->Controls->Add(this->bunifuCheckbox6);
			this->panel3->Controls->Add(this->bunifuCheckbox5);
			this->panel3->Controls->Add(this->bunifuCheckbox4);
			this->panel3->Controls->Add(this->bunifuCheckbox3);
			this->panel3->Controls->Add(this->bunifuCheckbox2);
			this->panel3->Controls->Add(this->bunifuCheckbox1);
			this->panel3->Controls->Add(this->pictureBox18);
			this->panel3->Controls->Add(this->pictureBox14);
			this->panel3->Controls->Add(this->pictureBox17);
			this->panel3->Controls->Add(this->pictureBox16);
			this->panel3->Controls->Add(this->pictureBox13);
			this->panel3->Controls->Add(this->pictureBox15);
			this->panel3->Controls->Add(this->pictureBox12);
			this->panel3->Controls->Add(this->pictureBox11);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->Button_ShowRs);
			this->panel3->Controls->Add(this->comboBox_Address);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 10;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Home::panel3_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(473, 515);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(95, 20);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Sandwiches";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(473, 485);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 20);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Fast Food";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(473, 455);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Shawermas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(473, 425);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 20);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Japan Food";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(255, 515);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Oriental";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(255, 485);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Pizza";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(255, 455);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Sea food";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(255, 425);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Grill";
			// 
			// bunifuCheckbox8
			// 
			this->bunifuCheckbox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox8->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox8->Checked = false;
			this->bunifuCheckbox8->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox8->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox8->Location = System::Drawing::Point(439, 428);
			this->bunifuCheckbox8->Margin = System::Windows::Forms::Padding(72, 83, 72, 83);
			this->bunifuCheckbox8->Name = L"bunifuCheckbox8";
			this->bunifuCheckbox8->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox8->TabIndex = 14;
			// 
			// bunifuCheckbox7
			// 
			this->bunifuCheckbox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox7->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox7->Checked = false;
			this->bunifuCheckbox7->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox7->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox7->Location = System::Drawing::Point(439, 458);
			this->bunifuCheckbox7->Margin = System::Windows::Forms::Padding(48, 53, 48, 53);
			this->bunifuCheckbox7->Name = L"bunifuCheckbox7";
			this->bunifuCheckbox7->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox7->TabIndex = 14;
			// 
			// bunifuCheckbox6
			// 
			this->bunifuCheckbox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox6->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox6->Checked = false;
			this->bunifuCheckbox6->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox6->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox6->Location = System::Drawing::Point(439, 488);
			this->bunifuCheckbox6->Margin = System::Windows::Forms::Padding(32, 34, 32, 34);
			this->bunifuCheckbox6->Name = L"bunifuCheckbox6";
			this->bunifuCheckbox6->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox6->TabIndex = 14;
			// 
			// bunifuCheckbox5
			// 
			this->bunifuCheckbox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox5->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox5->Checked = false;
			this->bunifuCheckbox5->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox5->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox5->Location = System::Drawing::Point(439, 518);
			this->bunifuCheckbox5->Margin = System::Windows::Forms::Padding(21, 22, 21, 22);
			this->bunifuCheckbox5->Name = L"bunifuCheckbox5";
			this->bunifuCheckbox5->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox5->TabIndex = 14;
			// 
			// bunifuCheckbox4
			// 
			this->bunifuCheckbox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox4->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox4->Checked = false;
			this->bunifuCheckbox4->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox4->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox4->Location = System::Drawing::Point(225, 518);
			this->bunifuCheckbox4->Margin = System::Windows::Forms::Padding(14);
			this->bunifuCheckbox4->Name = L"bunifuCheckbox4";
			this->bunifuCheckbox4->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox4->TabIndex = 14;
			// 
			// bunifuCheckbox3
			// 
			this->bunifuCheckbox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox3->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox3->Checked = false;
			this->bunifuCheckbox3->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox3->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox3->Location = System::Drawing::Point(225, 488);
			this->bunifuCheckbox3->Margin = System::Windows::Forms::Padding(9);
			this->bunifuCheckbox3->Name = L"bunifuCheckbox3";
			this->bunifuCheckbox3->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox3->TabIndex = 14;
			// 
			// bunifuCheckbox2
			// 
			this->bunifuCheckbox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox2->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox2->Checked = false;
			this->bunifuCheckbox2->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox2->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox2->Location = System::Drawing::Point(225, 458);
			this->bunifuCheckbox2->Margin = System::Windows::Forms::Padding(6);
			this->bunifuCheckbox2->Name = L"bunifuCheckbox2";
			this->bunifuCheckbox2->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox2->TabIndex = 14;
			// 
			// bunifuCheckbox1
			// 
			this->bunifuCheckbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox1->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox1->Checked = false;
			this->bunifuCheckbox1->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox1->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox1->Location = System::Drawing::Point(225, 428);
			this->bunifuCheckbox1->Margin = System::Windows::Forms::Padding(6);
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox1->TabIndex = 13;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(591, 486);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(35, 26);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 12;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(342, 487);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(35, 26);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 12;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(591, 518);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(35, 26);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 12;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(591, 422);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(35, 26);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 12;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(342, 519);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(35, 26);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(591, 454);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(35, 26);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 12;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(342, 423);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(35, 26);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(342, 455);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(35, 26);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 12;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(677, 221);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(67, 50);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(677, 165);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(67, 50);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(750, 221);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(67, 50);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(750, 165);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(67, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(750, 109);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(67, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(677, 109);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(67, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(603, 221);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(67, 50);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(603, 165);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(67, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(603, 109);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// Button_ShowRs
			// 
			this->Button_ShowRs->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_ShowRs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_ShowRs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button_ShowRs->BorderRadius = 0;
			this->Button_ShowRs->ButtonText = L"Show Restaurants";
			this->Button_ShowRs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_ShowRs->DisabledColor = System::Drawing::Color::Gray;
			this->Button_ShowRs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_ShowRs->ForeColor = System::Drawing::Color::Tan;
			this->Button_ShowRs->Iconcolor = System::Drawing::Color::Transparent;
			this->Button_ShowRs->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_ShowRs.Iconimage")));
			this->Button_ShowRs->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_ShowRs.Iconimage_right")));
			this->Button_ShowRs->Iconimage_right_Selected = nullptr;
			this->Button_ShowRs->Iconimage_Selected = nullptr;
			this->Button_ShowRs->IconMarginLeft = 0;
			this->Button_ShowRs->IconMarginRight = 0;
			this->Button_ShowRs->IconRightVisible = true;
			this->Button_ShowRs->IconRightZoom = 0;
			this->Button_ShowRs->IconVisible = true;
			this->Button_ShowRs->IconZoom = 50;
			this->Button_ShowRs->IsTab = false;
			this->Button_ShowRs->Location = System::Drawing::Point(583, 352);
			this->Button_ShowRs->Margin = System::Windows::Forms::Padding(6);
			this->Button_ShowRs->Name = L"Button_ShowRs";
			this->Button_ShowRs->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_ShowRs->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_ShowRs->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_ShowRs->selected = false;
			this->Button_ShowRs->Size = System::Drawing::Size(288, 34);
			this->Button_ShowRs->TabIndex = 9;
			this->Button_ShowRs->Text = L"Show Restaurants";
			this->Button_ShowRs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_ShowRs->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_ShowRs->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_ShowRs->Click += gcnew System::EventHandler(this, &Home::Button_ShowRs_Click);
			// 
			// comboBox_Address
			// 
			this->comboBox_Address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox_Address->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox_Address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox_Address->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->comboBox_Address->FormattingEnabled = true;
			this->comboBox_Address->Location = System::Drawing::Point(327, 352);
			this->comboBox_Address->Name = L"comboBox_Address";
			this->comboBox_Address->Size = System::Drawing::Size(227, 30);
			this->comboBox_Address->TabIndex = 7;
			this->comboBox_Address->Text = L"Address/ Area";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Cairo", L"Alexandria" });
			this->comboBox1->Location = System::Drawing::Point(75, 352);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(227, 30);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"Governorate";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 109.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(161, 78);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 175);
			this->label1->TabIndex = 6;
			this->label1->Text = L"OTlob";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
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
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Panel_Header->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
		WindowState = FormWindowState::Minimized;
	}

	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
	private: System::Void Button_SignUp_Click(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::signup->Show();
		this->Hide();
	}
	private: System::Void Button_Proflie_Click(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::profile->Show();
		this->Hide();
	}
	private: System::Void button_SignIn_Click(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::signin->Show();
		this->Hide();
	}
	private: System::Void Home_Load(System::Object^  sender, System::EventArgs^  e) {
		if (GlobalClass::LogIn == true) {
			label_UsernameN->Visible = true;
			button_SignIn->Visible = false;
			Button_SignUp->Visible = false;
			label_Username->Text = GlobalClass::username;
		}
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		if (GlobalClass::LogIn) {
			label_UsernameN->Visible = true;
			button_SignIn->Visible = false;
			Button_SignUp->Visible = false;
			label_Username->Text = GlobalClass::username;
			Button_Profile->Visible = true;
			button_SignOut->Visible = true;
		}
		else {
			label_UsernameN->Visible = false;
			button_SignIn->Visible = true;
			Button_SignUp->Visible = true;
			label_Username->Text = GlobalClass::username;
			Button_Profile->Visible = false;
			button_SignOut->Visible = false;
		}
	}
	cliext::vector<Restraunt^> restraunt_;
	private: System::Void Button_ShowRs_Click(System::Object^  sender, System::EventArgs^  e)
	{
        GlobalClass::showRestaurant = gcnew Otlob::ShowRestaurants();
		if (comboBox_Address->Text != "Address/ Area")
		{
			Globals::GlobalClass::governate = comboBox1->Text;
			Globals::GlobalClass::address = comboBox_Address->Text;
			Globals::GlobalClass::showRestaurant->Show();
            this->Hide();
		}
	}
	private: System::Void bunifuFlatButton5_Click(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::AdminFormLogIn->Show();
		this->Hide();
	}
	private: System::Void button_SignOut_Click(System::Object^  sender, System::EventArgs^  e) {
		GlobalClass::username = "";
		GlobalClass::LogIn = false;
		label_UsernameN->Visible = false;
		button_SignIn->Visible = true;
		Button_SignUp->Visible = true;
		label_Username->Text = GlobalClass::username;
		Button_Profile->Visible = false;
		button_SignOut->Visible = false;
	}
	private: System::Void button_AllRestaurants_Click(System::Object^  sender, System::EventArgs^  e) {
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
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		String^ Governate = comboBox1->Text;
		std::ifstream i("Restraunt.json");
		json file;
		i >> file;
		Convert_strings temp;
		json area = file[temp.Convert_System_to_std(Governate)];
		String^ address;
		comboBox_Address->Text = "Address/ Area";
		comboBox_Address->Items->Clear();
		for (json::iterator it = area.begin(); it != area.end(); it++) {
			address = temp.Convert_std_to_System(it.key());
			comboBox_Address->Items->Add((address));
		}
	}
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
