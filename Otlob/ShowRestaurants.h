#pragma once
#include "Global.h"
#include <list>
#include <cliext\list>
#include <cliext\vector>
#include "Restraunt.h"
#include "Home.h"
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using bunifuButton = Bunifu::Framework::UI::BunifuFlatButton;
	using bunifuPerc = Bunifu::Framework::UI::BunifuCircleProgressbar;
	using namespace Globals;
	/// <summary>
	/// Summary for ShowRestaurants
	/// </summary>
	public ref class ShowRestaurants : public System::Windows::Forms::Form
	{
	public:
		ShowRestaurants(void)
		{
			InitializeComponent();

			if (GlobalClass::LogIn) {
				label_UsernameN->Visible = true;
				button_SignIn->Visible = false;
				Button_SignUp->Visible = false;
				label_Username->Text = GlobalClass::username;
				Button_Profile->Visible = true;
				button_SignOut->Visible = true;
			}
			/*Restraunt^ tmp;
			ifstream i("Restraunt.json");
			json file;
			i >> file;
			tmp->fill_MainMeal(file["Cairo"]["6th of October Hosary and Ahyaa"]["Chilis Mall Of Arabia"]["Food"]["Main Meal"], "Chilis Mall Of Arabia");*/
			//tmp.fill_MainMeal(file["Cairo"]["6th of October Hosary and Ahyaa"]["Chilis Mall Of Arabia"]["Food"]["Main Meal"], "Chilis Mall Of Arabia");
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ShowRestaurants()
		{
			if (components)
			{
				delete components;
			}
		}
	private: cliext::vector<Restraunt^> rests;
	//::GlobalClass::restraunt_List;
	public: int index;
	//public: bunifuButton^ buttonRestaurant = gcnew bunifuButton();
	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label_Username;
	private: System::Windows::Forms::Label^  label_UsernameN;
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
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^  flowPanelRestaurants;


	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: Bunifu::Framework::UI::BunifuCircleProgressbar^  Progress;


	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel3;
	private: System::Windows::Forms::Label^  label_Address;
	private: System::Windows::Forms::Label^  label_Location;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignOut;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_Profile;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ShowRestaurants::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->flowPanelRestaurants = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Progress = (gcnew Bunifu::Framework::UI::BunifuCircleProgressbar());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->label_Address = (gcnew System::Windows::Forms::Label());
			this->label_Location = (gcnew System::Windows::Forms::Label());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->Button_Profile = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SignOut = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_UsernameN = (gcnew System::Windows::Forms::Label());
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
			this->flowPanelRestaurants->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->bunifuGradientPanel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->Panel_Header->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Controls->Add(this->flowPanelRestaurants);
			this->panel3->Controls->Add(this->bunifuGradientPanel3);
			this->panel3->Controls->Add(this->bunifuGradientPanel2);
			this->panel3->Controls->Add(this->bunifuGradientPanel1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 18;
			// 
			// flowPanelRestaurants
			// 
			this->flowPanelRestaurants->AutoScroll = true;
			this->flowPanelRestaurants->Controls->Add(this->Progress);
			this->flowPanelRestaurants->Controls->Add(this->bunifuFlatButton5);
			this->flowPanelRestaurants->Controls->Add(this->pictureBox2);
			this->flowPanelRestaurants->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowPanelRestaurants->Location = System::Drawing::Point(0, 80);
			this->flowPanelRestaurants->Name = L"flowPanelRestaurants";
			this->flowPanelRestaurants->Size = System::Drawing::Size(872, 490);
			this->flowPanelRestaurants->TabIndex = 3;
			this->flowPanelRestaurants->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::flowPanelRestaurants_Paint);
			// 
			// Progress
			// 
			this->Progress->animated = false;
			this->Progress->animationIterval = 5;
			this->Progress->animationSpeed = 300;
			this->Progress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Progress->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Progress.BackgroundImage")));
			this->Progress->Dock = System::Windows::Forms::DockStyle::Left;
			this->Progress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Progress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Progress->LabelVisible = true;
			this->Progress->LineProgressThickness = 8;
			this->Progress->LineThickness = 8;
			this->Progress->Location = System::Drawing::Point(5, 5);
			this->Progress->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->Progress->MaxValue = 100;
			this->Progress->Name = L"Progress";
			this->Progress->ProgressBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Progress->ProgressColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Progress->Size = System::Drawing::Size(81, 81);
			this->Progress->TabIndex = 5;
			this->Progress->Value = 50;
			this->Progress->Visible = false;
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"Restaurant 1";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = nullptr;
			this->bunifuFlatButton5->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = false;
			this->bunifuFlatButton5->IconZoom = 80;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(97, 6);
			this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(6);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(620, 79);
			this->bunifuFlatButton5->TabIndex = 0;
			this->bunifuFlatButton5->Text = L"Restaurant 1";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->Visible = false;
			this->bunifuFlatButton5->Click += gcnew System::EventHandler(this, &ShowRestaurants::bunifuFlatButton5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(726, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(124, 85);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// bunifuGradientPanel3
			// 
			this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
			this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel3->Controls->Add(this->label_Address);
			this->bunifuGradientPanel3->Controls->Add(this->label_Location);
			this->bunifuGradientPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuGradientPanel3->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel3->Location = System::Drawing::Point(0, 27);
			this->bunifuGradientPanel3->Name = L"bunifuGradientPanel3";
			this->bunifuGradientPanel3->Quality = 10;
			this->bunifuGradientPanel3->Size = System::Drawing::Size(872, 53);
			this->bunifuGradientPanel3->TabIndex = 1;
			this->bunifuGradientPanel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::bunifuGradientPanel2_Paint);
			// 
			// label_Address
			// 
			this->label_Address->AutoSize = true;
			this->label_Address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Address->Location = System::Drawing::Point(462, 13);
			this->label_Address->Name = L"label_Address";
			this->label_Address->Size = System::Drawing::Size(109, 29);
			this->label_Address->TabIndex = 0;
			this->label_Address->Text = L"Address";
			// 
			// label_Location
			// 
			this->label_Location->AutoSize = true;
			this->label_Location->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Location->Location = System::Drawing::Point(211, 13);
			this->label_Location->Name = L"label_Location";
			this->label_Location->Size = System::Drawing::Size(112, 29);
			this->label_Location->TabIndex = 0;
			this->label_Location->Text = L"Location";
			// 
			// bunifuGradientPanel2
			// 
			this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
			this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel2->Location = System::Drawing::Point(0, 0);
			this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
			this->bunifuGradientPanel2->Quality = 10;
			this->bunifuGradientPanel2->Size = System::Drawing::Size(872, 27);
			this->bunifuGradientPanel2->TabIndex = 1;
			this->bunifuGradientPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::bunifuGradientPanel2_Paint);
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuGradientPanel1->Location = System::Drawing::Point(872, 0);
			this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
			this->bunifuGradientPanel1->Quality = 10;
			this->bunifuGradientPanel1->Size = System::Drawing::Size(88, 570);
			this->bunifuGradientPanel1->TabIndex = 1;
			this->bunifuGradientPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::bunifuGradientPanel1_Paint);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->Button_Profile);
			this->panel1->Controls->Add(this->button_SignOut);
			this->panel1->Controls->Add(this->label_Username);
			this->panel1->Controls->Add(this->label_UsernameN);
			this->panel1->Controls->Add(this->button_SignIn);
			this->panel1->Controls->Add(this->Button_SignUp);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 17;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::panel1_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(465, 11);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(47, 39);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(397, 11);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(47, 39);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(331, 11);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(47, 39);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
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
			this->Button_Profile->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Button_Profile->Name = L"Button_Profile";
			this->Button_Profile->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_Profile->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_Profile->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_Profile->selected = false;
			this->Button_Profile->Size = System::Drawing::Size(156, 58);
			this->Button_Profile->TabIndex = 13;
			this->Button_Profile->Text = L"Profile";
			this->Button_Profile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_Profile->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_Profile->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_Profile->Visible = false;
			this->Button_Profile->Click += gcnew System::EventHandler(this, &ShowRestaurants::Button_Profile_Click);
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
			this->button_SignOut->Location = System::Drawing::Point(42, -1);
			this->button_SignOut->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignOut->Name = L"button_SignOut";
			this->button_SignOut->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignOut->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignOut->selected = false;
			this->button_SignOut->Size = System::Drawing::Size(234, 58);
			this->button_SignOut->TabIndex = 12;
			this->button_SignOut->Text = L"Sign Out";
			this->button_SignOut->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignOut->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignOut->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SignOut->Visible = false;
			this->button_SignOut->Click += gcnew System::EventHandler(this, &ShowRestaurants::button_SignOut_Click);
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_Username->Location = System::Drawing::Point(812, 18);
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
			this->button_SignIn->Click += gcnew System::EventHandler(this, &ShowRestaurants::button_SignIn_Click);
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
			this->Button_SignUp->Click += gcnew System::EventHandler(this, &ShowRestaurants::Button_SignUp_Click);
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
			this->Panel_Header->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::Panel_Header_Paint);
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
			this->button_Close->Click += gcnew System::EventHandler(this, &ShowRestaurants::button_Close_Click);
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
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ShowRestaurants::panel2_Paint);
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
			this->button_AdminRoom->Click += gcnew System::EventHandler(this, &ShowRestaurants::button_AdminRoom_Click);
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
			this->button_Home->Click += gcnew System::EventHandler(this, &ShowRestaurants::button_Home_Click);
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
			// ShowRestaurants
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
			this->Name = L"ShowRestaurants";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ShowRestaurants";
			this->Load += gcnew System::EventHandler(this, &ShowRestaurants::ShowRestaurants_Load);
			this->panel3->ResumeLayout(false);
			this->flowPanelRestaurants->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->bunifuGradientPanel3->ResumeLayout(false);
			this->bunifuGradientPanel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->Panel_Header->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion





private: System::Void flowPanelRestaurants_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	//Bunifu::Framework::UI::BunifuFlatButton^  button;

	/*list<bunifuButton^> buttons; //= gcnew cliext::list<bunifuButton^>();
	for (int i = 0; i < 5; i++)
	{
		buttons.push_back(gcnew bunifuButton());
		// set some properties on the button, such as text, size & position, and click handler.
		//buttons.Add(button);
		flowPanelRestaurants->Controls->Add(button);

	}*/

}

private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void bunifuFlatButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(rests[index]->getName() + " " + index);
	GlobalClass::order->Show();
	this->Hide();
	/*for (int i = 0; i < 20; ++i) {
		bunifuButton^ button = gcnew bunifuButton();
		PictureBox^ pic = gcnew PictureBox();
		bunifuPerc^ perc = gcnew bunifuPerc();
		this->flowPanelRestaurants->Controls->Add(perc);
		this->flowPanelRestaurants->Controls->Add(button);
		this->flowPanelRestaurants->Controls->Add(pic);
		button->Size = System::Drawing::Size(630, 79);
		button->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		button->ButtonText = L"Restaurant 1";
		this->bunifuFlatButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		this->bunifuFlatButton5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
		button->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		button->OnHovercolor = System::Drawing::Color::Maroon;
		button->OnHoverTextColor = System::Drawing::Color::White;
		button->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		button->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
		button->TextFont = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		button->IconVisible = false;

		pic->Size = System::Drawing::Size(124, 80);
		pic->TabIndex = 1;
		pic->TabStop = false;
		pic->Load("KFCLogo.png");
		pic->SizeMode = PictureBoxSizeMode::Zoom;
		//pic->Dock = System::Windows::Forms::DockStyle::Right;

		perc->Size = System::Drawing::Size(78, 78);
		perc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		perc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		perc->ProgressBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
		perc->ProgressColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		perc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
			static_cast<System::Int32>(static_cast<System::Byte>(102)));
		perc->Value = 100;
		perc->LineProgressThickness = 8;
		perc->LineThickness = 8;
		perc->Dock = System::Windows::Forms::DockStyle::Left;
	}*/
}
private: System::Void Panel_Header_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
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
private: System::Void bunifuGradientPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void bunifuGradientPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button_Home_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::home->Show();
	this->Hide();
	
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
private: System::Void Button_Profile_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::profile->Show();
	this->Hide();
}
private: System::Void button_SignIn_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::signin->Show();
	this->Hide();
}
private: System::Void Button_SignUp_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::signup->Show();
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

private: System::Void ShowRestaurants_Load(System::Object^  sender, System::EventArgs^  e) {
	Convert_strings temp;
	string Governate = temp.Convert_System_to_std(Globals::GlobalClass::governate);
	string Address = temp.Convert_System_to_std(Globals::GlobalClass::address);
	ifstream i("Restraunt.json");
	json file;
	i >> file;
	json area = file[Governate][Address];
	for (json::iterator it = area.begin(); it != area.end(); ++it)
	{
		std::string resturnt = it.key();
		Restraunt^ r = gcnew Restraunt(temp.Convert_std_to_System(resturnt), temp.Convert_std_to_System(Governate), temp.Convert_std_to_System(Address), area[resturnt]["Deliver Time"]);
		json mmPath = area[resturnt]["Food"]["Main Meal"];
		json appPath = area[resturnt]["Food"]["Appetizers"];
		json desPath = area[resturnt]["Food"]["Desert"];
		json dPath = area[resturnt]["Food"]["Drinks"];
		json ssPath = area[resturnt]["Food"]["Side Dishes"];
		String^ rest_name = temp.Convert_std_to_System(resturnt);
		json deliveryPath = area[resturnt]["Delivery boy"];
		json ratePath = area[resturnt]["Rate"];
		r->mainMeal = r->fill_MainMeal(mmPath, rest_name);
		r->appetizers = r->fill_Appetizers(appPath, rest_name);
		r->desserts = r->fill_Desserts(desPath, rest_name);
		r->drinks = r->fill_Drinks(dPath, rest_name);
		r->sidedishes = r->fill_SideDishes(ssPath, rest_name);
		r->deliveryBoys = r->fill_Delivery(deliveryPath);
		r->setRate(ratePath);
		rests.push_back(r);
	}
	for (int i = 0; i < rests.size(); ++i) {
		bunifuButton^ button = gcnew bunifuButton();
		PictureBox^ pic = gcnew PictureBox();
		bunifuPerc^ perc = gcnew bunifuPerc();

		//button->ButtonText = L"Restaurant 123";	//Name of Restaurant
		//pic->Load("KFCLogo.png");			//Picture of Restaurant
		//perc->Value = 75;			//Rating by percentage

		button->ButtonText = rests[i]->getName();	//Name of Restaurant
		pic->Load("KFCLogo.png");			//Picture of Restaurant
		double percentage = (rests[i]->getRate() / 5) * 100;
		perc->Value = percentage;			//Rating by percentage

		this->flowPanelRestaurants->Controls->Add(perc);
		this->flowPanelRestaurants->Controls->Add(button);
		this->flowPanelRestaurants->Controls->Add(pic);
		button->Size = System::Drawing::Size(630, 79);
		button->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		button->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		button->OnHovercolor = System::Drawing::Color::Maroon;
		button->OnHoverTextColor = System::Drawing::Color::White;
		button->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		button->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
		button->TextFont = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		button->IconVisible = false;

		pic->Size = System::Drawing::Size(124, 80);
		pic->TabIndex = 1;
		pic->TabStop = false;
		pic->SizeMode = PictureBoxSizeMode::Zoom;
		//pic->Dock = System::Windows::Forms::DockStyle::Right;

		perc->Size = System::Drawing::Size(78, 78);
		perc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		perc->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		perc->ProgressBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
		perc->ProgressColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		perc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
			static_cast<System::Int32>(static_cast<System::Byte>(102)));
		perc->LineProgressThickness = 8;
		perc->LineThickness = 8;
		perc->Dock = System::Windows::Forms::DockStyle::Left;
		index = i;
		//MessageBox::Show(System::Convert::ToString(i));
		button->Click += gcnew System::EventHandler(this, &ShowRestaurants::bunifuFlatButton5_Click);
	}
}
};
}