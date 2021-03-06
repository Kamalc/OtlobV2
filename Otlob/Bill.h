#pragma once
#include "Global.h"
#include "json.hpp"
#include <fstream>     

namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
	using label_Food = System::Windows::Forms::Label;
    using json = nlohmann::json;

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
		{
			InitializeComponent();
			this->dragging = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel1;
	protected:
	private: bool dragging;
	private: Point offset;

	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel2;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel3;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_BuySub;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Cancel;
	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
    private: Bunifu::Framework::UI::BunifuCheckbox^  Credit_Card;

	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox1;
	private: System::Windows::Forms::Label^  label5;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_UseVoucher;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::FlowLayoutPanel^  Panel_Delivery;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::FlowLayoutPanel^  Panel_customerData;
	private: System::Windows::Forms::FlowLayoutPanel^  Panel_ListOfFood;


	private: System::Windows::Forms::Label^  label8;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  textBox_TotalPrice;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  textBox_DeliveryCharges;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::FlowLayoutPanel^  Panel_ListOfPrices;

	private: System::Windows::Forms::Label^  label12;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::Label^  label13;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox6;


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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Bill::typeid));
            this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
            this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
            this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->Credit_Card = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
            this->bunifuCheckbox1 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
            this->button_Cancel = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->Button_BuySub = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->bunifuMetroTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
            this->textBox_DeliveryCharges = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
            this->textBox_TotalPrice = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->Panel_ListOfPrices = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->Panel_ListOfFood = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->Panel_Delivery = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->Panel_customerData = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button_UseVoucher = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuGradientPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->bunifuGradientPanel2->SuspendLayout();
            this->bunifuGradientPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // bunifuGradientPanel1
            // 
            this->bunifuGradientPanel1->BackColor = System::Drawing::Color::Maroon;
            this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
            this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuGradientPanel1->Controls->Add(this->label1);
            this->bunifuGradientPanel1->Controls->Add(this->bunifuImageButton1);
            this->bunifuGradientPanel1->Controls->Add(this->pictureBox5);
            this->bunifuGradientPanel1->Controls->Add(this->pictureBox4);
            this->bunifuGradientPanel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->bunifuGradientPanel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel1->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
                static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
            this->bunifuGradientPanel1->GradientBottomRight = System::Drawing::Color::Maroon;
            this->bunifuGradientPanel1->GradientTopLeft = System::Drawing::Color::Maroon;
            this->bunifuGradientPanel1->GradientTopRight = System::Drawing::Color::Maroon;
            this->bunifuGradientPanel1->Location = System::Drawing::Point(0, 0);
            this->bunifuGradientPanel1->Name = L"bunifuGradientPanel1";
            this->bunifuGradientPanel1->Quality = 10;
            this->bunifuGradientPanel1->Size = System::Drawing::Size(720, 44);
            this->bunifuGradientPanel1->TabIndex = 0;
            this->bunifuGradientPanel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Bill::bunifuGradientPanel1_MouseDown);
            this->bunifuGradientPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Bill::bunifuGradientPanel1_MouseMove);
            this->bunifuGradientPanel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Bill::bunifuGradientPanel1_MouseUp);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(330, 5);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(51, 24);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Bill";
            // 
            // bunifuImageButton1
            // 
            this->bunifuImageButton1->BackColor = System::Drawing::Color::Transparent;
            this->bunifuImageButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
            this->bunifuImageButton1->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.ImageActive")));
            this->bunifuImageButton1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.InitialImage")));
            this->bunifuImageButton1->Location = System::Drawing::Point(681, 5);
            this->bunifuImageButton1->Name = L"bunifuImageButton1";
            this->bunifuImageButton1->Size = System::Drawing::Size(36, 36);
            this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->bunifuImageButton1->TabIndex = 0;
            this->bunifuImageButton1->TabStop = false;
            this->bunifuImageButton1->Zoom = 10;
            this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &Bill::bunifuImageButton1_Click);
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(439, 3);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(41, 37);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 7;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(238, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(41, 37);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 7;
            this->pictureBox4->TabStop = false;
            // 
            // bunifuGradientPanel2
            // 
            this->bunifuGradientPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
            this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuGradientPanel2->Controls->Add(this->bunifuSeparator1);
            this->bunifuGradientPanel2->Controls->Add(this->bunifuMaterialTextbox1);
            this->bunifuGradientPanel2->Controls->Add(this->label4);
            this->bunifuGradientPanel2->Controls->Add(this->label3);
            this->bunifuGradientPanel2->Controls->Add(this->Credit_Card);
            this->bunifuGradientPanel2->Controls->Add(this->bunifuCheckbox1);
            this->bunifuGradientPanel2->Controls->Add(this->button_Cancel);
            this->bunifuGradientPanel2->Controls->Add(this->Button_BuySub);
            this->bunifuGradientPanel2->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->bunifuGradientPanel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
                static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
            this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel2->Location = System::Drawing::Point(0, 405);
            this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
            this->bunifuGradientPanel2->Quality = 10;
            this->bunifuGradientPanel2->Size = System::Drawing::Size(720, 100);
            this->bunifuGradientPanel2->TabIndex = 1;
            // 
            // bunifuSeparator1
            // 
            this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
            this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuSeparator1->LineThickness = 414;
            this->bunifuSeparator1->Location = System::Drawing::Point(460, 27);
            this->bunifuSeparator1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuSeparator1->Name = L"bunifuSeparator1";
            this->bunifuSeparator1->Size = System::Drawing::Size(260, 10);
            this->bunifuSeparator1->TabIndex = 3;
            this->bunifuSeparator1->Transparency = 255;
            this->bunifuSeparator1->Vertical = false;
            // 
            // bunifuMaterialTextbox1
            // 
            this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox1->HintText = L"No.";
            this->bunifuMaterialTextbox1->isPassword = false;
            this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineThickness = 3;
            this->bunifuMaterialTextbox1->Location = System::Drawing::Point(495, 70);
            this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox1->Size = System::Drawing::Size(181, 28);
            this->bunifuMaterialTextbox1->TabIndex = 1;
            this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->ForeColor = System::Drawing::Color::Maroon;
            this->label4->Location = System::Drawing::Point(497, 43);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(135, 20);
            this->label4->TabIndex = 2;
            this->label4->Text = L"No. of Credit Card";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->ForeColor = System::Drawing::Color::Maroon;
            this->label3->Location = System::Drawing::Point(512, 8);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(46, 20);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Cash";
            // 
            // Credit_Card
            // 
            this->Credit_Card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Credit_Card->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Credit_Card->Checked = false;
            this->Credit_Card->CheckedOnColor = System::Drawing::Color::Maroon;
            this->Credit_Card->ForeColor = System::Drawing::Color::White;
            this->Credit_Card->Location = System::Drawing::Point(473, 78);
            this->Credit_Card->Margin = System::Windows::Forms::Padding(9);
            this->Credit_Card->Name = L"Credit_Card";
            this->Credit_Card->Size = System::Drawing::Size(20, 20);
            this->Credit_Card->TabIndex = 1;
            this->Credit_Card->OnChange += gcnew System::EventHandler(this, &Bill::Credit_Card_OnChange);
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
            this->bunifuCheckbox1->Location = System::Drawing::Point(473, 9);
            this->bunifuCheckbox1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
            this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
            this->bunifuCheckbox1->TabIndex = 1;
            this->bunifuCheckbox1->OnChange += gcnew System::EventHandler(this, &Bill::bunifuCheckbox1_OnChange);
            // 
            // button_Cancel
            // 
            this->button_Cancel->Activecolor = System::Drawing::Color::Maroon;
            this->button_Cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_Cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_Cancel->BorderRadius = 0;
            this->button_Cancel->ButtonText = L"Cancel";
            this->button_Cancel->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_Cancel->DisabledColor = System::Drawing::Color::Gray;
            this->button_Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_Cancel->Iconcolor = System::Drawing::Color::Transparent;
            this->button_Cancel->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Cancel.Iconimage")));
            this->button_Cancel->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Cancel.Iconimage_right")));
            this->button_Cancel->Iconimage_right_Selected = nullptr;
            this->button_Cancel->Iconimage_Selected = nullptr;
            this->button_Cancel->IconMarginLeft = 0;
            this->button_Cancel->IconMarginRight = 0;
            this->button_Cancel->IconRightVisible = true;
            this->button_Cancel->IconRightZoom = 80;
            this->button_Cancel->IconVisible = true;
            this->button_Cancel->IconZoom = 70;
            this->button_Cancel->IsTab = false;
            this->button_Cancel->Location = System::Drawing::Point(6, 27);
            this->button_Cancel->Margin = System::Windows::Forms::Padding(6);
            this->button_Cancel->Name = L"button_Cancel";
            this->button_Cancel->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_Cancel->OnHovercolor = System::Drawing::Color::Maroon;
            this->button_Cancel->OnHoverTextColor = System::Drawing::Color::White;
            this->button_Cancel->selected = false;
            this->button_Cancel->Size = System::Drawing::Size(220, 58);
            this->button_Cancel->TabIndex = 0;
            this->button_Cancel->Text = L"Cancel";
            this->button_Cancel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_Cancel->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_Cancel->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_Cancel->Click += gcnew System::EventHandler(this, &Bill::button_Cancel_Click);
            // 
            // Button_BuySub
            // 
            this->Button_BuySub->Activecolor = System::Drawing::Color::Maroon;
            this->Button_BuySub->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Button_BuySub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Button_BuySub->BorderRadius = 0;
            this->Button_BuySub->ButtonText = L"Submit Bill";
            this->Button_BuySub->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Button_BuySub->DisabledColor = System::Drawing::Color::Gray;
            this->Button_BuySub->Enabled = false;
            this->Button_BuySub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Button_BuySub->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Button_BuySub->Iconcolor = System::Drawing::Color::Transparent;
            this->Button_BuySub->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_BuySub.Iconimage")));
            this->Button_BuySub->Iconimage_right = nullptr;
            this->Button_BuySub->Iconimage_right_Selected = nullptr;
            this->Button_BuySub->Iconimage_Selected = nullptr;
            this->Button_BuySub->IconMarginLeft = 0;
            this->Button_BuySub->IconMarginRight = 0;
            this->Button_BuySub->IconRightVisible = true;
            this->Button_BuySub->IconRightZoom = 0;
            this->Button_BuySub->IconVisible = true;
            this->Button_BuySub->IconZoom = 80;
            this->Button_BuySub->IsTab = false;
            this->Button_BuySub->Location = System::Drawing::Point(238, 27);
            this->Button_BuySub->Margin = System::Windows::Forms::Padding(6);
            this->Button_BuySub->Name = L"Button_BuySub";
            this->Button_BuySub->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Button_BuySub->OnHovercolor = System::Drawing::Color::Maroon;
            this->Button_BuySub->OnHoverTextColor = System::Drawing::Color::White;
            this->Button_BuySub->selected = false;
            this->Button_BuySub->Size = System::Drawing::Size(220, 58);
            this->Button_BuySub->TabIndex = 0;
            this->Button_BuySub->Text = L"Submit Bill";
            this->Button_BuySub->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->Button_BuySub->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(181)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Button_BuySub->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Button_BuySub->Click += gcnew System::EventHandler(this, &Bill::Button_BuySub_Click);
            // 
            // bunifuGradientPanel3
            // 
            this->bunifuGradientPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
            this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuGradientPanel3->Controls->Add(this->label13);
            this->bunifuGradientPanel3->Controls->Add(this->bunifuDatepicker1);
            this->bunifuGradientPanel3->Controls->Add(this->pictureBox6);
            this->bunifuGradientPanel3->Controls->Add(this->pictureBox3);
            this->bunifuGradientPanel3->Controls->Add(this->pictureBox2);
            this->bunifuGradientPanel3->Controls->Add(this->pictureBox1);
            this->bunifuGradientPanel3->Controls->Add(this->bunifuMetroTextbox3);
            this->bunifuGradientPanel3->Controls->Add(this->textBox_DeliveryCharges);
            this->bunifuGradientPanel3->Controls->Add(this->textBox_TotalPrice);
            this->bunifuGradientPanel3->Controls->Add(this->label11);
            this->bunifuGradientPanel3->Controls->Add(this->label10);
            this->bunifuGradientPanel3->Controls->Add(this->label9);
            this->bunifuGradientPanel3->Controls->Add(this->Panel_ListOfPrices);
            this->bunifuGradientPanel3->Controls->Add(this->label12);
            this->bunifuGradientPanel3->Controls->Add(this->Panel_ListOfFood);
            this->bunifuGradientPanel3->Controls->Add(this->label8);
            this->bunifuGradientPanel3->Controls->Add(this->label7);
            this->bunifuGradientPanel3->Controls->Add(this->Panel_Delivery);
            this->bunifuGradientPanel3->Controls->Add(this->label6);
            this->bunifuGradientPanel3->Controls->Add(this->Panel_customerData);
            this->bunifuGradientPanel3->Controls->Add(this->label5);
            this->bunifuGradientPanel3->Controls->Add(this->label2);
            this->bunifuGradientPanel3->Controls->Add(this->button_UseVoucher);
            this->bunifuGradientPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->bunifuGradientPanel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuGradientPanel3->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel3->GradientBottomRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
                static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
            this->bunifuGradientPanel3->GradientTopLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuGradientPanel3->GradientTopRight = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuGradientPanel3->Location = System::Drawing::Point(0, 44);
            this->bunifuGradientPanel3->Name = L"bunifuGradientPanel3";
            this->bunifuGradientPanel3->Quality = 10;
            this->bunifuGradientPanel3->Size = System::Drawing::Size(720, 361);
            this->bunifuGradientPanel3->TabIndex = 2;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Transparent;
            this->label13->ForeColor = System::Drawing::Color::Maroon;
            this->label13->Location = System::Drawing::Point(1, 300);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(43, 20);
            this->label13->TabIndex = 9;
            this->label13->Text = L"Time";
            // 
            // bunifuDatepicker1
            // 
            this->bunifuDatepicker1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuDatepicker1->BorderRadius = 0;
            this->bunifuDatepicker1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
            this->bunifuDatepicker1->FormatCustom = nullptr;
            this->bunifuDatepicker1->Location = System::Drawing::Point(3, 237);
            this->bunifuDatepicker1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
            this->bunifuDatepicker1->Size = System::Drawing::Size(175, 44);
            this->bunifuDatepicker1->TabIndex = 8;
            this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 27, 20, 5, 54, 279);
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(532, 201);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(108, 68);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 7;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(238, 232);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(41, 37);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 7;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(271, 194);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(41, 37);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 7;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(212, 194);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(41, 37);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 7;
            this->pictureBox1->TabStop = false;
            // 
            // bunifuMetroTextbox3
            // 
            this->bunifuMetroTextbox3->BorderColorFocused = System::Drawing::Color::Maroon;
            this->bunifuMetroTextbox3->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox3->BorderColorMouseHover = System::Drawing::Color::Maroon;
            this->bunifuMetroTextbox3->BorderThickness = 3;
            this->bunifuMetroTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMetroTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox3->isPassword = false;
            this->bunifuMetroTextbox3->Location = System::Drawing::Point(64, 291);
            this->bunifuMetroTextbox3->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMetroTextbox3->Name = L"bunifuMetroTextbox3";
            this->bunifuMetroTextbox3->Size = System::Drawing::Size(114, 34);
            this->bunifuMetroTextbox3->TabIndex = 6;
            this->bunifuMetroTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // textBox_DeliveryCharges
            // 
            this->textBox_DeliveryCharges->BorderColorFocused = System::Drawing::Color::Maroon;
            this->textBox_DeliveryCharges->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_DeliveryCharges->BorderColorMouseHover = System::Drawing::Color::Maroon;
            this->textBox_DeliveryCharges->BorderThickness = 3;
            this->textBox_DeliveryCharges->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox_DeliveryCharges->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_DeliveryCharges->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_DeliveryCharges->isPassword = false;
            this->textBox_DeliveryCharges->Location = System::Drawing::Point(323, 235);
            this->textBox_DeliveryCharges->Margin = System::Windows::Forms::Padding(4);
            this->textBox_DeliveryCharges->Name = L"textBox_DeliveryCharges";
            this->textBox_DeliveryCharges->Size = System::Drawing::Size(100, 34);
            this->textBox_DeliveryCharges->TabIndex = 6;
            this->textBox_DeliveryCharges->Text = L"5";
            this->textBox_DeliveryCharges->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // textBox_TotalPrice
            // 
            this->textBox_TotalPrice->BorderColorFocused = System::Drawing::Color::Maroon;
            this->textBox_TotalPrice->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_TotalPrice->BorderColorMouseHover = System::Drawing::Color::Maroon;
            this->textBox_TotalPrice->BorderThickness = 3;
            this->textBox_TotalPrice->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->textBox_TotalPrice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox_TotalPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->textBox_TotalPrice->isPassword = false;
            this->textBox_TotalPrice->Location = System::Drawing::Point(212, 301);
            this->textBox_TotalPrice->Margin = System::Windows::Forms::Padding(4);
            this->textBox_TotalPrice->Name = L"textBox_TotalPrice";
            this->textBox_TotalPrice->Size = System::Drawing::Size(194, 34);
            this->textBox_TotalPrice->TabIndex = 6;
            this->textBox_TotalPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::Color::Transparent;
            this->label11->ForeColor = System::Drawing::Color::Maroon;
            this->label11->Location = System::Drawing::Point(318, 206);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(128, 20);
            this->label11->TabIndex = 5;
            this->label11->Text = L"Delivery Charges";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::Transparent;
            this->label10->ForeColor = System::Drawing::Color::Maroon;
            this->label10->Location = System::Drawing::Point(214, 272);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(83, 20);
            this->label10->TabIndex = 5;
            this->label10->Text = L"Total Price";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::Transparent;
            this->label9->ForeColor = System::Drawing::Color::Maroon;
            this->label9->Location = System::Drawing::Point(3, 206);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(103, 20);
            this->label9->TabIndex = 5;
            this->label9->Text = L"Delivery Date";
            // 
            // Panel_ListOfPrices
            // 
            this->Panel_ListOfPrices->AutoScroll = true;
            this->Panel_ListOfPrices->Location = System::Drawing::Point(581, 31);
            this->Panel_ListOfPrices->Name = L"Panel_ListOfPrices";
            this->Panel_ListOfPrices->Size = System::Drawing::Size(127, 164);
            this->Panel_ListOfPrices->TabIndex = 4;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->BackColor = System::Drawing::Color::Transparent;
            this->label12->ForeColor = System::Drawing::Color::Maroon;
            this->label12->Location = System::Drawing::Point(581, 3);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(102, 20);
            this->label12->TabIndex = 3;
            this->label12->Text = L"List Of Prices";
            // 
            // Panel_ListOfFood
            // 
            this->Panel_ListOfFood->AutoScroll = true;
            this->Panel_ListOfFood->Location = System::Drawing::Point(389, 31);
            this->Panel_ListOfFood->Name = L"Panel_ListOfFood";
            this->Panel_ListOfFood->Size = System::Drawing::Size(186, 164);
            this->Panel_ListOfFood->TabIndex = 4;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::Transparent;
            this->label8->ForeColor = System::Drawing::Color::Maroon;
            this->label8->Location = System::Drawing::Point(389, 3);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(96, 20);
            this->label8->TabIndex = 3;
            this->label8->Text = L"List Of Food";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Transparent;
            this->label7->ForeColor = System::Drawing::Color::Maroon;
            this->label7->Location = System::Drawing::Point(184, 3);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(157, 20);
            this->label7->TabIndex = 3;
            this->label7->Text = L"The delivery boy data";
            // 
            // Panel_Delivery
            // 
            this->Panel_Delivery->AutoScroll = true;
            this->Panel_Delivery->Location = System::Drawing::Point(184, 31);
            this->Panel_Delivery->Name = L"Panel_Delivery";
            this->Panel_Delivery->Size = System::Drawing::Size(199, 164);
            this->Panel_Delivery->TabIndex = 2;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Transparent;
            this->label6->ForeColor = System::Drawing::Color::Maroon;
            this->label6->Location = System::Drawing::Point(3, 3);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(142, 20);
            this->label6->TabIndex = 3;
            this->label6->Text = L"The customer data";
            // 
            // Panel_customerData
            // 
            this->Panel_customerData->AutoScroll = true;
            this->Panel_customerData->Location = System::Drawing::Point(3, 31);
            this->Panel_customerData->Name = L"Panel_customerData";
            this->Panel_customerData->Size = System::Drawing::Size(175, 164);
            this->Panel_customerData->TabIndex = 2;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::Maroon;
            this->label5->Location = System::Drawing::Point(454, 277);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(229, 17);
            this->label5->TabIndex = 1;
            this->label5->Text = L"Congrats, You have Voucher today";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Maroon;
            this->label2->Location = System::Drawing::Point(110, 341);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(409, 17);
            this->label2->TabIndex = 0;
            this->label2->Text = L"You can Cancel the order in 10 mins from buying it from My Bills";
            // 
            // button_UseVoucher
            // 
            this->button_UseVoucher->Activecolor = System::Drawing::Color::Maroon;
            this->button_UseVoucher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_UseVoucher->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_UseVoucher->BorderRadius = 0;
            this->button_UseVoucher->ButtonText = L"Use voucher";
            this->button_UseVoucher->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button_UseVoucher->DisabledColor = System::Drawing::Color::Gray;
            this->button_UseVoucher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_UseVoucher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_UseVoucher->Iconcolor = System::Drawing::Color::Transparent;
            this->button_UseVoucher->Iconimage = nullptr;
            this->button_UseVoucher->Iconimage_right = nullptr;
            this->button_UseVoucher->Iconimage_right_Selected = nullptr;
            this->button_UseVoucher->Iconimage_Selected = nullptr;
            this->button_UseVoucher->IconMarginLeft = 0;
            this->button_UseVoucher->IconMarginRight = 0;
            this->button_UseVoucher->IconRightVisible = true;
            this->button_UseVoucher->IconRightZoom = 65;
            this->button_UseVoucher->IconVisible = true;
            this->button_UseVoucher->IconZoom = 65;
            this->button_UseVoucher->IsTab = false;
            this->button_UseVoucher->Location = System::Drawing::Point(454, 300);
            this->button_UseVoucher->Margin = System::Windows::Forms::Padding(6);
            this->button_UseVoucher->Name = L"button_UseVoucher";
            this->button_UseVoucher->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_UseVoucher->OnHovercolor = System::Drawing::Color::Maroon;
            this->button_UseVoucher->OnHoverTextColor = System::Drawing::Color::White;
            this->button_UseVoucher->selected = false;
            this->button_UseVoucher->Size = System::Drawing::Size(266, 40);
            this->button_UseVoucher->TabIndex = 0;
            this->button_UseVoucher->Text = L"Use voucher";
            this->button_UseVoucher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_UseVoucher->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_UseVoucher->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_UseVoucher->Click += gcnew System::EventHandler(this, &Bill::button_UseVoucher_Click);
            // 
            // Bill
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(720, 505);
            this->Controls->Add(this->bunifuGradientPanel3);
            this->Controls->Add(this->bunifuGradientPanel2);
            this->Controls->Add(this->bunifuGradientPanel1);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"Bill";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Bill";
            this->Load += gcnew System::EventHandler(this, &Bill::Bill_Load);
            this->bunifuGradientPanel1->ResumeLayout(false);
            this->bunifuGradientPanel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->bunifuGradientPanel2->ResumeLayout(false);
            this->bunifuGradientPanel2->PerformLayout();
            this->bunifuGradientPanel3->ResumeLayout(false);
            this->bunifuGradientPanel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
private: System::Void bunifuGradientPanel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}

private: System::Void bunifuGradientPanel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void bunifuGradientPanel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = false;
}
private: System::Void Bill_Load(System::Object^  sender, System::EventArgs^  e) {
	Panel_ListOfFood->Controls->Clear();
	Panel_ListOfPrices->Controls->Clear();
	Panel_Delivery->Controls->Clear();
	Panel_customerData->Controls->Clear();	
	for (int i = 0; i < GlobalClass::makeOrder->numberOfFood; ++i) {
		label_Food^ labelName = gcnew label_Food;
		labelName->Text = Convert::ToString(GlobalClass::makeOrder->List_OfFood[i]);
		Panel_ListOfFood->Controls->Add(labelName);
	}
	double TotalPrice = 0.0;
	for (int i = 0; i < GlobalClass::makeOrder->numberOfFood; ++i) {
		label_Food^ labelName = gcnew label_Food;
		labelName->Text = Convert::ToString(GlobalClass::makeOrder->List_Prices[i]);
		Panel_ListOfPrices->Controls->Add(labelName);
		TotalPrice += GlobalClass::makeOrder->List_Prices[i];
	}
    Convert_strings temp;
	label_Food^ firstName_ = gcnew label_Food;
	label_Food^ lastName_ = gcnew label_Food;
	label_Food^ phone_ = gcnew label_Food;

    label_Food^ firstName_Customer = gcnew label_Food;
    label_Food^ lastName_Customer = gcnew label_Food;
    label_Food^ User_Name = gcnew label_Food;
   
    std::string UserName = temp.Convert_System_to_std(GlobalClass::username);

	firstName_->Text = GlobalClass::makeOrder->deliveryBoy->getFirstName();
	lastName_->Text = GlobalClass::makeOrder->deliveryBoy->getlastName();
	phone_->Text = GlobalClass::makeOrder->deliveryBoy->getPhone();
    
    ifstream i("Users.json");
    json file;
    i >> file;
    User_Name->Text = GlobalClass::username;
    firstName_Customer->Text = temp.Convert_std_to_System(file[UserName]["Name"]["First"]);
    lastName_Customer->Text = temp.Convert_std_to_System(file[UserName]["Name"]["Last"]); ;

	Panel_Delivery->Controls->Add(firstName_);
	Panel_Delivery->Controls->Add(lastName_);
	Panel_Delivery->Controls->Add(phone_);

    Panel_customerData->Controls->Add(User_Name);
    Panel_customerData->Controls->Add(firstName_Customer);
    Panel_customerData->Controls->Add(lastName_Customer);


	textBox_TotalPrice->Text = Convert::ToString(TotalPrice + Convert::ToDouble(textBox_DeliveryCharges->Text));
}
private: System::Void Button_BuySub_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	GlobalClass::home->Show();
}
private: System::Void button_Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
	Panel_ListOfFood->Controls->Clear();
	Panel_ListOfPrices->Controls->Clear();
	Panel_Delivery->Controls->Clear();
	Panel_customerData->Controls->Clear();
	this->Close();
}
private: System::Void button_UseVoucher_Click(System::Object^  sender, System::EventArgs^  e) {
	double voucher = Convert::ToDouble(textBox_TotalPrice->Text)-(Convert::ToDouble(textBox_TotalPrice->Text)*30)/100;
	textBox_TotalPrice->Text = Convert::ToString(voucher);
	this->button_UseVoucher->Visible = false;
	this->label5->Visible = false;
}
private: System::Void bunifuCheckbox1_OnChange(System::Object^  sender, System::EventArgs^  e) {

    Button_BuySub->Enabled = (bunifuCheckbox1->Checked|| Credit_Card->Checked);
}
private: System::Void Credit_Card_OnChange(System::Object^  sender, System::EventArgs^  e) {
    Button_BuySub->Enabled = (bunifuCheckbox1->Checked || Credit_Card->Checked);

}
};
}
