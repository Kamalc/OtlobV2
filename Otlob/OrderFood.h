#pragma once
#include "Global.h"
#include "Bill.h"
#include "Restraunt.h"
#include <fstream>      
#include "json.hpp"
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	using namespace std;
	using label_Food = System::Windows::Forms::Label;
	using numericUpDown = System::Windows::Forms::NumericUpDown;
	using checkBox = Bunifu::Framework::UI::BunifuCheckbox;
	/// <summary>
	/// Summary for OrderFood
	/// </summary>
	public ref class OrderFood : public System::Windows::Forms::Form
	{
	public:
		OrderFood(void)
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
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OrderFood()
		{
			if (components)
			{
				delete components;
			}
		}
	private: cliext::vector<Restraunt^>^ rests = gcnew cliext::vector<Restraunt^>();

	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel3;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel2;
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

	private: System::Windows::Forms::Label^  label_RestaurantName;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::FlowLayoutPanel^  Panel_MainMeal;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;








	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignOut;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_Profile;


	private: Bunifu::Framework::UI::BunifuFlatButton^  button_MakeOrder;








	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox2;
private: System::Windows::Forms::FlowLayoutPanel^  Panel_Desert;
private: System::Windows::Forms::FlowLayoutPanel^  Panel_Appetizers;

private: System::Windows::Forms::FlowLayoutPanel^  Panel_SidePlates;
private: System::Windows::Forms::FlowLayoutPanel^  Panel_Drinks;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;


























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderFood::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Panel_Appetizers = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel_SidePlates = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel_Drinks = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel_Desert = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_MakeOrder = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Panel_MainMeal = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->bunifuCheckbox3 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bunifuCheckbox1 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->bunifuCheckbox2 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->label_RestaurantName = (gcnew System::Windows::Forms::Label());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->Button_Profile = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_UsernameN = (gcnew System::Windows::Forms::Label());
			this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SignOut = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
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
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel3->SuspendLayout();
			this->Panel_MainMeal->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->bunifuGradientPanel3->SuspendLayout();
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
			this->panel3->Controls->Add(this->Panel_Appetizers);
			this->panel3->Controls->Add(this->Panel_SidePlates);
			this->panel3->Controls->Add(this->Panel_Drinks);
			this->panel3->Controls->Add(this->Panel_Desert);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->button_MakeOrder);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->Panel_MainMeal);
			this->panel3->Controls->Add(this->bunifuGradientPanel3);
			this->panel3->Controls->Add(this->bunifuGradientPanel2);
			this->panel3->Controls->Add(this->bunifuGradientPanel1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 22;
			// 
			// Panel_Appetizers
			// 
			this->Panel_Appetizers->AutoScroll = true;
			this->Panel_Appetizers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->Panel_Appetizers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Panel_Appetizers->Location = System::Drawing::Point(576, 320);
			this->Panel_Appetizers->Name = L"Panel_Appetizers";
			this->Panel_Appetizers->Size = System::Drawing::Size(243, 163);
			this->Panel_Appetizers->TabIndex = 12;
			// 
			// Panel_SidePlates
			// 
			this->Panel_SidePlates->AutoScroll = true;
			this->Panel_SidePlates->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->Panel_SidePlates->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Panel_SidePlates->Location = System::Drawing::Point(576, 117);
			this->Panel_SidePlates->Name = L"Panel_SidePlates";
			this->Panel_SidePlates->Size = System::Drawing::Size(243, 163);
			this->Panel_SidePlates->TabIndex = 12;
			// 
			// Panel_Drinks
			// 
			this->Panel_Drinks->AutoScroll = true;
			this->Panel_Drinks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->Panel_Drinks->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Panel_Drinks->Location = System::Drawing::Point(276, 320);
			this->Panel_Drinks->Name = L"Panel_Drinks";
			this->Panel_Drinks->Size = System::Drawing::Size(243, 163);
			this->Panel_Drinks->TabIndex = 12;
			// 
			// Panel_Desert
			// 
			this->Panel_Desert->AutoScroll = true;
			this->Panel_Desert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->Panel_Desert->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Panel_Desert->Location = System::Drawing::Point(276, 118);
			this->Panel_Desert->Name = L"Panel_Desert";
			this->Panel_Desert->Size = System::Drawing::Size(243, 163);
			this->Panel_Desert->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(271, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Drinks";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(571, 294);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Appetizers";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(571, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Side Plates";
			// 
			// button_MakeOrder
			// 
			this->button_MakeOrder->Activecolor = System::Drawing::Color::Maroon;
			this->button_MakeOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_MakeOrder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_MakeOrder->BorderRadius = 0;
			this->button_MakeOrder->ButtonText = L"Order";
			this->button_MakeOrder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_MakeOrder->DisabledColor = System::Drawing::Color::Transparent;
			this->button_MakeOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_MakeOrder->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_MakeOrder->Iconcolor = System::Drawing::Color::Transparent;
			this->button_MakeOrder->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_MakeOrder.Iconimage")));
			this->button_MakeOrder->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_MakeOrder.Iconimage_right")));
			this->button_MakeOrder->Iconimage_right_Selected = nullptr;
			this->button_MakeOrder->Iconimage_Selected = nullptr;
			this->button_MakeOrder->IconMarginLeft = 0;
			this->button_MakeOrder->IconMarginRight = 0;
			this->button_MakeOrder->IconRightVisible = true;
			this->button_MakeOrder->IconRightZoom = 0;
			this->button_MakeOrder->IconVisible = true;
			this->button_MakeOrder->IconZoom = 80;
			this->button_MakeOrder->IsTab = false;
			this->button_MakeOrder->Location = System::Drawing::Point(194, 505);
			this->button_MakeOrder->Margin = System::Windows::Forms::Padding(6);
			this->button_MakeOrder->Name = L"button_MakeOrder";
			this->button_MakeOrder->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_MakeOrder->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_MakeOrder->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_MakeOrder->selected = false;
			this->button_MakeOrder->Size = System::Drawing::Size(488, 56);
			this->button_MakeOrder->TabIndex = 11;
			this->button_MakeOrder->Text = L"Order";
			this->button_MakeOrder->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_MakeOrder->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_MakeOrder->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_MakeOrder->Click += gcnew System::EventHandler(this, &OrderFood::button_MakeOrder_Click_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(271, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Desert";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Main Meal";
			// 
			// Panel_MainMeal
			// 
			this->Panel_MainMeal->AutoScroll = true;
			this->Panel_MainMeal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->Panel_MainMeal->Controls->Add(this->flowLayoutPanel2);
			this->Panel_MainMeal->Controls->Add(this->flowLayoutPanel3);
			this->Panel_MainMeal->Controls->Add(this->flowLayoutPanel1);
			this->Panel_MainMeal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Panel_MainMeal->Location = System::Drawing::Point(10, 117);
			this->Panel_MainMeal->Name = L"Panel_MainMeal";
			this->Panel_MainMeal->Size = System::Drawing::Size(241, 366);
			this->Panel_MainMeal->TabIndex = 2;
			this->Panel_MainMeal->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OrderFood::Panel_MainMeal_Paint);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoSize = true;
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel2->Controls->Add(this->label9);
			this->flowLayoutPanel2->Controls->Add(this->numericUpDown3);
			this->flowLayoutPanel2->Controls->Add(this->label10);
			this->flowLayoutPanel2->Controls->Add(this->bunifuCheckbox3);
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(217, 52);
			this->flowLayoutPanel2->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 25);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Pizza";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(69, 3);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(53, 30);
			this->numericUpDown3->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Maroon;
			this->label10->Location = System::Drawing::Point(128, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 25);
			this->label10->TabIndex = 7;
			this->label10->Text = L"5$";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuCheckbox3->Location = System::Drawing::Point(179, 14);
			this->bunifuCheckbox3->Margin = System::Windows::Forms::Padding(14);
			this->bunifuCheckbox3->Name = L"bunifuCheckbox3";
			this->bunifuCheckbox3->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox3->TabIndex = 3;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoSize = true;
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel3->Controls->Add(this->label7);
			this->flowLayoutPanel3->Controls->Add(this->numericUpDown1);
			this->flowLayoutPanel3->Controls->Add(this->label12);
			this->flowLayoutPanel3->Controls->Add(this->bunifuCheckbox1);
			this->flowLayoutPanel3->Location = System::Drawing::Point(3, 61);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(199, 77);
			this->flowLayoutPanel3->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Chilis Mall Of Arabia";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(3, 28);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(49, 30);
			this->numericUpDown1->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Maroon;
			this->label12->Location = System::Drawing::Point(58, 25);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 25);
			this->label12->TabIndex = 7;
			this->label12->Text = L"5$";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuCheckbox1->Location = System::Drawing::Point(109, 39);
			this->bunifuCheckbox1->Margin = System::Windows::Forms::Padding(14);
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox1->TabIndex = 3;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->label8);
			this->flowLayoutPanel1->Controls->Add(this->numericUpDown2);
			this->flowLayoutPanel1->Controls->Add(this->label11);
			this->flowLayoutPanel1->Controls->Add(this->bunifuCheckbox2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 144);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(198, 102);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 50);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Mashed Potato with Black Pepper Gravy";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(3, 53);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(49, 30);
			this->numericUpDown2->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(58, 50);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 25);
			this->label11->TabIndex = 7;
			this->label11->Text = L"5$";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->bunifuCheckbox2->Location = System::Drawing::Point(109, 64);
			this->bunifuCheckbox2->Margin = System::Windows::Forms::Padding(14);
			this->bunifuCheckbox2->Name = L"bunifuCheckbox2";
			this->bunifuCheckbox2->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox2->TabIndex = 3;
			// 
			// bunifuGradientPanel3
			// 
			this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
			this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel3->Controls->Add(this->bunifuFlatButton1);
			this->bunifuGradientPanel3->Controls->Add(this->label_RestaurantName);
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
			this->bunifuGradientPanel3->Size = System::Drawing::Size(872, 34);
			this->bunifuGradientPanel3->TabIndex = 1;
			// 
			// label_RestaurantName
			// 
			this->label_RestaurantName->AutoSize = true;
			this->label_RestaurantName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_RestaurantName->ForeColor = System::Drawing::Color::Maroon;
			this->label_RestaurantName->Location = System::Drawing::Point(271, 3);
			this->label_RestaurantName->Name = L"label_RestaurantName";
			this->label_RestaurantName->Size = System::Drawing::Size(172, 25);
			this->label_RestaurantName->TabIndex = 0;
			this->label_RestaurantName->Text = L"RestaurantName";
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
			this->Button_Profile->TabIndex = 10;
			this->Button_Profile->Text = L"Profile";
			this->Button_Profile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_Profile->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_Profile->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_Profile->Visible = false;
			this->Button_Profile->Click += gcnew System::EventHandler(this, &OrderFood::Button_Profile_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->Button_Profile);
			this->panel1->Controls->Add(this->label_Username);
			this->panel1->Controls->Add(this->label_UsernameN);
			this->panel1->Controls->Add(this->button_SignIn);
			this->panel1->Controls->Add(this->button_SignOut);
			this->panel1->Controls->Add(this->Button_SignUp);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 21;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OrderFood::panel1_Paint);
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
			this->button_SignIn->Click += gcnew System::EventHandler(this, &OrderFood::button_SignIn_Click);
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
			this->button_SignOut->Location = System::Drawing::Point(35, -1);
			this->button_SignOut->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignOut->Name = L"button_SignOut";
			this->button_SignOut->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignOut->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignOut->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignOut->selected = false;
			this->button_SignOut->Size = System::Drawing::Size(234, 58);
			this->button_SignOut->TabIndex = 11;
			this->button_SignOut->Text = L"Sign Out";
			this->button_SignOut->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignOut->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignOut->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->button_SignOut->Visible = false;
			this->button_SignOut->Click += gcnew System::EventHandler(this, &OrderFood::button_SignOut_Click);
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
			this->Button_SignUp->Click += gcnew System::EventHandler(this, &OrderFood::Button_SignUp_Click);
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
			this->button_Close->Click += gcnew System::EventHandler(this, &OrderFood::button_Close_Click);
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
			this->button_Minimize->Click += gcnew System::EventHandler(this, &OrderFood::button_Minimize_Click);
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
			this->button_AdminRoom->Click += gcnew System::EventHandler(this, &OrderFood::button_AdminRoom_Click);
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
			this->button_Home->Click += gcnew System::EventHandler(this, &OrderFood::button_Home_Click);
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
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"FeedBack";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage_right")));
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 60;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(642, 3);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(221, 28);
			this->bunifuFlatButton1->TabIndex = 13;
			this->bunifuFlatButton1->Text = L"FeedBack";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			// 
			// OrderFood
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
			this->Name = L"OrderFood";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OrderFood";
			this->Load += gcnew System::EventHandler(this, &OrderFood::OrderFood_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->Panel_MainMeal->ResumeLayout(false);
			this->Panel_MainMeal->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->bunifuGradientPanel3->ResumeLayout(false);
			this->bunifuGradientPanel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Panel_Header->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
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
private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
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

private: System::Void button_MakeOrder_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::Bill->ShowDialog();
}
private: System::Void button_MakeOrder_Click_1(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::Bill->ShowDialog();
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



private: System::Void Panel_MainMeal_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {


}

private: System::Void OrderFood_Load(System::Object^  sender, System::EventArgs^  e) {
	//Restraunt^ temp;
	//Convert_strings tmp;
	//	temp = gcnew Restraunt("Restaurant", "Cairo", "6th of October Hosary and Ahyaa", 60);
	//	ifstream i("Restraunt.json");
	//	json file;
	//	i >> file;
	//	json area = file["Cairo"]["6th of October Hosary and Ahyaa"];
	//		json path = area["Food"]["Main Meal"];
	//		temp->fill_MainMeal(path, /*tmp.Convert_std_to_System*/(temp->name));
	//		//MessageBox::Show(temp->mainMeal[1]->name + " " + temp->mainMeal[1]->name);
	for (int i = 0; i < 10; ++i) {
		FlowLayoutPanel^ panelEachFood = gcnew FlowLayoutPanel();
		panelEachFood->AutoSize = true;
		panelEachFood->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		panelEachFood->Location = System::Drawing::Point(3, 49);
		//this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		panelEachFood->Size = System::Drawing::Size(231, 44);
		panelEachFood->TabIndex = 5;
		label_Food^ label_f = gcnew label_Food();
		numericUpDown^ numeric_Updown = gcnew numericUpDown();
		label_Food^ label_price = gcnew label_Food();
		checkBox^ check_b = gcnew checkBox();
		//label_f->Text = L"Pizza";
		label_f->Text = "pizza";
		label_price->Text = L"6$";
		label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		numeric_Updown->Size = System::Drawing::Size(53, 30);
		check_b->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		check_b->Checked = false;
		check_b->CheckedOnColor = System::Drawing::Color::Maroon;
		panelEachFood->Controls->Add(label_f);
		panelEachFood->Controls->Add(numeric_Updown);
		panelEachFood->Controls->Add(label_price);
		panelEachFood->Controls->Add(check_b);
		this->Panel_MainMeal->Controls->Add(panelEachFood);
	}
	for (int i = 0; i < 10; ++i) {
		FlowLayoutPanel^ panelEachFood = gcnew FlowLayoutPanel();
		panelEachFood->AutoSize = true;
		panelEachFood->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		panelEachFood->Location = System::Drawing::Point(3, 49);
		//this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		panelEachFood->Size = System::Drawing::Size(231, 44);
		panelEachFood->TabIndex = 5;
		label_Food^ label_f = gcnew label_Food();
		numericUpDown^ numeric_Updown = gcnew numericUpDown();
		label_Food^ label_price = gcnew label_Food();
		checkBox^ check_b = gcnew checkBox();
		label_f->Text = L"Pizza";
		label_price->Text = L"6$";
		label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		numeric_Updown->Size = System::Drawing::Size(53, 30);
		check_b->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		check_b->Checked = false;
		check_b->CheckedOnColor = System::Drawing::Color::Maroon;
		panelEachFood->Controls->Add(label_f);
		panelEachFood->Controls->Add(numeric_Updown);
		panelEachFood->Controls->Add(label_price);
		panelEachFood->Controls->Add(check_b);
		this->Panel_Desert->Controls->Add(panelEachFood);
	}
	for (int i = 0; i < 10; ++i) {
		FlowLayoutPanel^ panelEachFood = gcnew FlowLayoutPanel();
		panelEachFood->AutoSize = true;
		panelEachFood->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		panelEachFood->Location = System::Drawing::Point(3, 49);
		//this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		panelEachFood->Size = System::Drawing::Size(231, 44);
		panelEachFood->TabIndex = 5;
		label_Food^ label_f = gcnew label_Food();
		numericUpDown^ numeric_Updown = gcnew numericUpDown();
		label_Food^ label_price = gcnew label_Food();
		checkBox^ check_b = gcnew checkBox();
		label_f->Text = L"Pizza";
		label_price->Text = L"6$";
		label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		numeric_Updown->Size = System::Drawing::Size(53, 30);
		check_b->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		check_b->Checked = false;
		check_b->CheckedOnColor = System::Drawing::Color::Maroon;
		panelEachFood->Controls->Add(label_f);
		panelEachFood->Controls->Add(numeric_Updown);
		panelEachFood->Controls->Add(label_price);
		panelEachFood->Controls->Add(check_b);
		this->Panel_SidePlates->Controls->Add(panelEachFood);
	}
	for (int i = 0; i < 10; ++i) {
		FlowLayoutPanel^ panelEachFood = gcnew FlowLayoutPanel();
		panelEachFood->AutoSize = true;
		panelEachFood->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		panelEachFood->Location = System::Drawing::Point(3, 49);
		//this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		panelEachFood->Size = System::Drawing::Size(231, 44);
		panelEachFood->TabIndex = 5;
		label_Food^ label_f = gcnew label_Food();
		numericUpDown^ numeric_Updown = gcnew numericUpDown();
		label_Food^ label_price = gcnew label_Food();
		checkBox^ check_b = gcnew checkBox();
		label_f->Text = L"Pizza";
		label_price->Text = L"6$";
		label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		numeric_Updown->Size = System::Drawing::Size(53, 30);
		check_b->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		check_b->Checked = false;
		check_b->CheckedOnColor = System::Drawing::Color::Maroon;
		panelEachFood->Controls->Add(label_f);
		panelEachFood->Controls->Add(numeric_Updown);
		panelEachFood->Controls->Add(label_price);
		panelEachFood->Controls->Add(check_b);
		this->Panel_Drinks->Controls->Add(panelEachFood);
	}
	for (int i = 0; i < 10; ++i) {
		FlowLayoutPanel^ panelEachFood = gcnew FlowLayoutPanel();
		panelEachFood->AutoSize = true;
		panelEachFood->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		panelEachFood->Location = System::Drawing::Point(3, 49);
		//this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
		panelEachFood->Size = System::Drawing::Size(231, 44);
		panelEachFood->TabIndex = 5;
		label_Food^ label_f = gcnew label_Food();
		numericUpDown^ numeric_Updown = gcnew numericUpDown();
		label_Food^ label_price = gcnew label_Food();
		checkBox^ check_b = gcnew checkBox();
		label_f->Text = L"Pizza";
		label_price->Text = L"6$";
		label_price->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
		numeric_Updown->Size = System::Drawing::Size(53, 30);
		check_b->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
		check_b->Checked = false;
		check_b->CheckedOnColor = System::Drawing::Color::Maroon;
		panelEachFood->Controls->Add(label_f);
		panelEachFood->Controls->Add(numeric_Updown);
		panelEachFood->Controls->Add(label_price);
		panelEachFood->Controls->Add(check_b);
		this->Panel_Appetizers->Controls->Add(panelEachFood);
	}
}

};
}
