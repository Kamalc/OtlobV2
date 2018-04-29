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
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel3;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label_Username;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_UsernameN;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_AdminRoom;

	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  DataGrid_Employee;
	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator2;
	private: Bunifu::Framework::UI::BunifuSeparator^  bunifuSeparator1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_RemoveEmp;

	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  TextBox_RemoveByID;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;


	private: System::Windows::Forms::Label^  label8;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox4;
	private: System::Windows::Forms::Label^  label7;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox3;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^  bunifuMetroTextbox2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::Label^  label10;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox5;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label11;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton7;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label12;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox6;



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
            System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->bunifuMaterialTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->TextBox_RemoveByID = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->bunifuSeparator2 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
            this->bunifuSeparator1 = (gcnew Bunifu::Framework::UI::BunifuSeparator());
            this->DataGrid_Employee = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
            this->Button_RemoveEmp = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuMetroTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
            this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuMetroTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
            this->bunifuCustomDataGrid2 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->bunifuFlatButton7 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->bunifuMaterialTextbox6 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuFlatButton6 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->label_Username = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label_UsernameN = (gcnew System::Windows::Forms::Label());
            this->Panel_Header = (gcnew System::Windows::Forms::Panel());
            this->button_Close = (gcnew System::Windows::Forms::Button());
            this->button_Minimize = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button_AdminRoom = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel3->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid_Employee))->BeginInit();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->BeginInit();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid2))->BeginInit();
            this->tabPage4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->Panel_Header->SuspendLayout();
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->panel3->Controls->Add(this->tabControl1);
            this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel3->Location = System::Drawing::Point(247, 101);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(960, 570);
            this->panel3->TabIndex = 26;
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabControl1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(960, 570);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->tabPage1->Controls->Add(this->pictureBox8);
            this->tabPage1->Controls->Add(this->pictureBox7);
            this->tabPage1->Controls->Add(this->label9);
            this->tabPage1->Controls->Add(this->label8);
            this->tabPage1->Controls->Add(this->bunifuMaterialTextbox4);
            this->tabPage1->Controls->Add(this->label7);
            this->tabPage1->Controls->Add(this->bunifuMaterialTextbox3);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->bunifuMaterialTextbox2);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->bunifuMaterialTextbox1);
            this->tabPage1->Controls->Add(this->TextBox_RemoveByID);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->bunifuSeparator2);
            this->tabPage1->Controls->Add(this->bunifuSeparator1);
            this->tabPage1->Controls->Add(this->DataGrid_Employee);
            this->tabPage1->Controls->Add(this->Button_RemoveEmp);
            this->tabPage1->Controls->Add(this->bunifuFlatButton1);
            this->tabPage1->Location = System::Drawing::Point(4, 30);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(952, 536);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Manage Employee";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(341, 5);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(45, 34);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 18;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(117, 6);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(45, 34);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 18;
            this->pictureBox7->TabStop = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(168, 10);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(148, 24);
            this->label9->TabIndex = 17;
            this->label9->Text = L"Delivery Boys";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(341, 460);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(135, 21);
            this->label8->TabIndex = 16;
            this->label8->Text = L"Restaurant Name";
            // 
            // bunifuMaterialTextbox4
            // 
            this->bunifuMaterialTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox4->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox4->HintText = L"";
            this->bunifuMaterialTextbox4->isPassword = false;
            this->bunifuMaterialTextbox4->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox4->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox4->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox4->LineThickness = 3;
            this->bunifuMaterialTextbox4->Location = System::Drawing::Point(445, 479);
            this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
            this->bunifuMaterialTextbox4->Size = System::Drawing::Size(183, 38);
            this->bunifuMaterialTextbox4->TabIndex = 15;
            this->bunifuMaterialTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(356, 376);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(57, 21);
            this->label7->TabIndex = 16;
            this->label7->Text = L"Phone";
            // 
            // bunifuMaterialTextbox3
            // 
            this->bunifuMaterialTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox3->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox3->HintText = L"";
            this->bunifuMaterialTextbox3->isPassword = false;
            this->bunifuMaterialTextbox3->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox3->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox3->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox3->LineThickness = 3;
            this->bunifuMaterialTextbox3->Location = System::Drawing::Point(445, 362);
            this->bunifuMaterialTextbox3->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox3->Name = L"bunifuMaterialTextbox3";
            this->bunifuMaterialTextbox3->Size = System::Drawing::Size(183, 38);
            this->bunifuMaterialTextbox3->TabIndex = 15;
            this->bunifuMaterialTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(6, 493);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(88, 21);
            this->label6->TabIndex = 16;
            this->label6->Text = L"Last Name";
            // 
            // bunifuMaterialTextbox2
            // 
            this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox2->HintText = L"";
            this->bunifuMaterialTextbox2->isPassword = false;
            this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox2->LineThickness = 3;
            this->bunifuMaterialTextbox2->Location = System::Drawing::Point(124, 479);
            this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
            this->bunifuMaterialTextbox2->Size = System::Drawing::Size(183, 38);
            this->bunifuMaterialTextbox2->TabIndex = 15;
            this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(6, 429);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(92, 21);
            this->label5->TabIndex = 16;
            this->label5->Text = L"First Name";
            // 
            // bunifuMaterialTextbox1
            // 
            this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox1->HintText = L"";
            this->bunifuMaterialTextbox1->isPassword = false;
            this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox1->LineThickness = 3;
            this->bunifuMaterialTextbox1->Location = System::Drawing::Point(124, 415);
            this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
            this->bunifuMaterialTextbox1->Size = System::Drawing::Size(183, 38);
            this->bunifuMaterialTextbox1->TabIndex = 15;
            this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // TextBox_RemoveByID
            // 
            this->TextBox_RemoveByID->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->TextBox_RemoveByID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->TextBox_RemoveByID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->TextBox_RemoveByID->HintForeColor = System::Drawing::Color::Empty;
            this->TextBox_RemoveByID->HintText = L"ex: 123";
            this->TextBox_RemoveByID->isPassword = false;
            this->TextBox_RemoveByID->LineFocusedColor = System::Drawing::Color::Maroon;
            this->TextBox_RemoveByID->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->TextBox_RemoveByID->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->TextBox_RemoveByID->LineThickness = 3;
            this->TextBox_RemoveByID->Location = System::Drawing::Point(680, 409);
            this->TextBox_RemoveByID->Margin = System::Windows::Forms::Padding(4);
            this->TextBox_RemoveByID->Name = L"TextBox_RemoveByID";
            this->TextBox_RemoveByID->Size = System::Drawing::Size(248, 38);
            this->TextBox_RemoveByID->TabIndex = 15;
            this->TextBox_RemoveByID->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(676, 368);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(115, 21);
            this->label4->TabIndex = 14;
            this->label4->Text = L"Remove By ID";
            // 
            // bunifuSeparator2
            // 
            this->bunifuSeparator2->BackColor = System::Drawing::Color::Transparent;
            this->bunifuSeparator2->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuSeparator2->LineThickness = 6;
            this->bunifuSeparator2->Location = System::Drawing::Point(0, 324);
            this->bunifuSeparator2->Margin = System::Windows::Forms::Padding(6);
            this->bunifuSeparator2->Name = L"bunifuSeparator2";
            this->bunifuSeparator2->Size = System::Drawing::Size(950, 10);
            this->bunifuSeparator2->TabIndex = 13;
            this->bunifuSeparator2->Transparency = 255;
            this->bunifuSeparator2->Vertical = false;
            // 
            // bunifuSeparator1
            // 
            this->bunifuSeparator1->BackColor = System::Drawing::Color::Transparent;
            this->bunifuSeparator1->LineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuSeparator1->LineThickness = 7;
            this->bunifuSeparator1->Location = System::Drawing::Point(647, 324);
            this->bunifuSeparator1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuSeparator1->Name = L"bunifuSeparator1";
            this->bunifuSeparator1->Size = System::Drawing::Size(10, 210);
            this->bunifuSeparator1->TabIndex = 12;
            this->bunifuSeparator1->Transparency = 255;
            this->bunifuSeparator1->Vertical = true;
            // 
            // DataGrid_Employee
            // 
            dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->DataGrid_Employee->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this->DataGrid_Employee->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->DataGrid_Employee->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->DataGrid_Employee->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->DataGrid_Employee->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->DataGrid_Employee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->DataGrid_Employee->DoubleBuffered = true;
            this->DataGrid_Employee->EnableHeadersVisualStyles = false;
            this->DataGrid_Employee->HeaderBgColor = System::Drawing::Color::SeaGreen;
            this->DataGrid_Employee->HeaderForeColor = System::Drawing::Color::SeaGreen;
            this->DataGrid_Employee->Location = System::Drawing::Point(48, 46);
            this->DataGrid_Employee->Name = L"DataGrid_Employee";
            this->DataGrid_Employee->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            this->DataGrid_Employee->RowTemplate->Height = 24;
            this->DataGrid_Employee->Size = System::Drawing::Size(868, 269);
            this->DataGrid_Employee->TabIndex = 0;
            // 
            // Button_RemoveEmp
            // 
            this->Button_RemoveEmp->Activecolor = System::Drawing::Color::Maroon;
            this->Button_RemoveEmp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Button_RemoveEmp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->Button_RemoveEmp->BorderRadius = 0;
            this->Button_RemoveEmp->ButtonText = L"Remove";
            this->Button_RemoveEmp->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Button_RemoveEmp->DisabledColor = System::Drawing::Color::Transparent;
            this->Button_RemoveEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Button_RemoveEmp->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->Button_RemoveEmp->Iconcolor = System::Drawing::Color::Transparent;
            this->Button_RemoveEmp->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_RemoveEmp.Iconimage")));
            this->Button_RemoveEmp->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_RemoveEmp.Iconimage_right")));
            this->Button_RemoveEmp->Iconimage_right_Selected = nullptr;
            this->Button_RemoveEmp->Iconimage_Selected = nullptr;
            this->Button_RemoveEmp->IconMarginLeft = 0;
            this->Button_RemoveEmp->IconMarginRight = 0;
            this->Button_RemoveEmp->IconRightVisible = false;
            this->Button_RemoveEmp->IconRightZoom = 85;
            this->Button_RemoveEmp->IconVisible = false;
            this->Button_RemoveEmp->IconZoom = 86;
            this->Button_RemoveEmp->IsTab = false;
            this->Button_RemoveEmp->Location = System::Drawing::Point(680, 469);
            this->Button_RemoveEmp->Margin = System::Windows::Forms::Padding(6);
            this->Button_RemoveEmp->Name = L"Button_RemoveEmp";
            this->Button_RemoveEmp->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Button_RemoveEmp->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->Button_RemoveEmp->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->Button_RemoveEmp->selected = false;
            this->Button_RemoveEmp->Size = System::Drawing::Size(248, 48);
            this->Button_RemoveEmp->TabIndex = 11;
            this->Button_RemoveEmp->Text = L"Remove";
            this->Button_RemoveEmp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->Button_RemoveEmp->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->Button_RemoveEmp->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // bunifuFlatButton1
            // 
            this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton1->BorderRadius = 0;
            this->bunifuFlatButton1->ButtonText = L"Add";
            this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
            this->bunifuFlatButton1->Iconimage_right = nullptr;
            this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton1->Iconimage_Selected = nullptr;
            this->bunifuFlatButton1->IconMarginLeft = 0;
            this->bunifuFlatButton1->IconMarginRight = 0;
            this->bunifuFlatButton1->IconRightVisible = false;
            this->bunifuFlatButton1->IconRightZoom = 0;
            this->bunifuFlatButton1->IconVisible = false;
            this->bunifuFlatButton1->IconZoom = 86;
            this->bunifuFlatButton1->IsTab = false;
            this->bunifuFlatButton1->Location = System::Drawing::Point(10, 346);
            this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
            this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton1->selected = false;
            this->bunifuFlatButton1->Size = System::Drawing::Size(248, 54);
            this->bunifuFlatButton1->TabIndex = 11;
            this->bunifuFlatButton1->Text = L"Add";
            this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton1->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // tabPage2
            // 
            this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->tabPage2->Controls->Add(this->bunifuDatepicker1);
            this->tabPage2->Controls->Add(this->label10);
            this->tabPage2->Controls->Add(this->bunifuFlatButton5);
            this->tabPage2->Controls->Add(this->bunifuMetroTextbox1);
            this->tabPage2->Controls->Add(this->bunifuCustomDataGrid1);
            this->tabPage2->Location = System::Drawing::Point(4, 30);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(952, 536);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"View Bills By Time";
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
            this->bunifuDatepicker1->Location = System::Drawing::Point(526, 42);
            this->bunifuDatepicker1->Margin = System::Windows::Forms::Padding(6);
            this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
            this->bunifuDatepicker1->Size = System::Drawing::Size(404, 44);
            this->bunifuDatepicker1->TabIndex = 7;
            this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 27, 23, 36, 44, 668);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(82, 116);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(162, 21);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Time by Hours & mins";
            // 
            // bunifuFlatButton5
            // 
            this->bunifuFlatButton5->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton5->BorderRadius = 0;
            this->bunifuFlatButton5->ButtonText = L"Time";
            this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Gray;
            this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
            this->bunifuFlatButton5->Iconimage_right = nullptr;
            this->bunifuFlatButton5->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton5->Iconimage_Selected = nullptr;
            this->bunifuFlatButton5->IconMarginLeft = 0;
            this->bunifuFlatButton5->IconMarginRight = 0;
            this->bunifuFlatButton5->IconRightVisible = false;
            this->bunifuFlatButton5->IconRightZoom = 0;
            this->bunifuFlatButton5->IconVisible = false;
            this->bunifuFlatButton5->IconZoom = 86;
            this->bunifuFlatButton5->IsTab = false;
            this->bunifuFlatButton5->Location = System::Drawing::Point(34, 27);
            this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(9);
            this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
            this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::White;
            this->bunifuFlatButton5->selected = false;
            this->bunifuFlatButton5->Size = System::Drawing::Size(321, 59);
            this->bunifuFlatButton5->TabIndex = 5;
            this->bunifuFlatButton5->Text = L"Time";
            this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton5->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            // 
            // bunifuMetroTextbox1
            // 
            this->bunifuMetroTextbox1->BorderColorFocused = System::Drawing::Color::Maroon;
            this->bunifuMetroTextbox1->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox1->BorderColorMouseHover = System::Drawing::Color::Maroon;
            this->bunifuMetroTextbox1->BorderThickness = 3;
            this->bunifuMetroTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMetroTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox1->isPassword = false;
            this->bunifuMetroTextbox1->Location = System::Drawing::Point(302, 96);
            this->bunifuMetroTextbox1->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMetroTextbox1->Name = L"bunifuMetroTextbox1";
            this->bunifuMetroTextbox1->Size = System::Drawing::Size(407, 44);
            this->bunifuMetroTextbox1->TabIndex = 2;
            this->bunifuMetroTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuCustomDataGrid1
            // 
            dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
            this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle4->BackColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle4->ForeColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
            this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bunifuCustomDataGrid1->DoubleBuffered = true;
            this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
            this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::SeaGreen;
            this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::SeaGreen;
            this->bunifuCustomDataGrid1->Location = System::Drawing::Point(34, 158);
            this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
            this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            this->bunifuCustomDataGrid1->RowTemplate->Height = 24;
            this->bunifuCustomDataGrid1->Size = System::Drawing::Size(896, 359);
            this->bunifuCustomDataGrid1->TabIndex = 1;
            // 
            // tabPage3
            // 
            this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->tabPage3->Controls->Add(this->bunifuFlatButton4);
            this->tabPage3->Controls->Add(this->bunifuMetroTextbox2);
            this->tabPage3->Controls->Add(this->bunifuCustomDataGrid2);
            this->tabPage3->Location = System::Drawing::Point(4, 30);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(3);
            this->tabPage3->Size = System::Drawing::Size(952, 536);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"View Bills By Customer";
            // 
            // bunifuFlatButton4
            // 
            this->bunifuFlatButton4->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton4->BorderRadius = 0;
            this->bunifuFlatButton4->ButtonText = L"Customer Username";
            this->bunifuFlatButton4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton4->DisabledColor = System::Drawing::Color::Gray;
            this->bunifuFlatButton4->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton4->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton4.Iconimage")));
            this->bunifuFlatButton4->Iconimage_right = nullptr;
            this->bunifuFlatButton4->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton4->Iconimage_Selected = nullptr;
            this->bunifuFlatButton4->IconMarginLeft = 0;
            this->bunifuFlatButton4->IconMarginRight = 0;
            this->bunifuFlatButton4->IconRightVisible = false;
            this->bunifuFlatButton4->IconRightZoom = 0;
            this->bunifuFlatButton4->IconVisible = false;
            this->bunifuFlatButton4->IconZoom = 86;
            this->bunifuFlatButton4->IsTab = false;
            this->bunifuFlatButton4->Location = System::Drawing::Point(34, 27);
            this->bunifuFlatButton4->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
            this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::Color::White;
            this->bunifuFlatButton4->selected = false;
            this->bunifuFlatButton4->Size = System::Drawing::Size(321, 59);
            this->bunifuFlatButton4->TabIndex = 4;
            this->bunifuFlatButton4->Text = L"Customer Username";
            this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton4->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            // 
            // bunifuMetroTextbox2
            // 
            this->bunifuMetroTextbox2->BorderColorFocused = System::Drawing::Color::Maroon;
            this->bunifuMetroTextbox2->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox2->BorderColorMouseHover = System::Drawing::Color::Maroon;
            this->bunifuMetroTextbox2->BorderThickness = 3;
            this->bunifuMetroTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMetroTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMetroTextbox2->isPassword = false;
            this->bunifuMetroTextbox2->Location = System::Drawing::Point(302, 96);
            this->bunifuMetroTextbox2->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMetroTextbox2->Name = L"bunifuMetroTextbox2";
            this->bunifuMetroTextbox2->Size = System::Drawing::Size(407, 44);
            this->bunifuMetroTextbox2->TabIndex = 3;
            this->bunifuMetroTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuCustomDataGrid2
            // 
            dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bunifuCustomDataGrid2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
            this->bunifuCustomDataGrid2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomDataGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->bunifuCustomDataGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle6->BackColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle6->ForeColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->bunifuCustomDataGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
            this->bunifuCustomDataGrid2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->bunifuCustomDataGrid2->DoubleBuffered = true;
            this->bunifuCustomDataGrid2->EnableHeadersVisualStyles = false;
            this->bunifuCustomDataGrid2->HeaderBgColor = System::Drawing::Color::SeaGreen;
            this->bunifuCustomDataGrid2->HeaderForeColor = System::Drawing::Color::SeaGreen;
            this->bunifuCustomDataGrid2->Location = System::Drawing::Point(34, 158);
            this->bunifuCustomDataGrid2->Name = L"bunifuCustomDataGrid2";
            this->bunifuCustomDataGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            this->bunifuCustomDataGrid2->RowTemplate->Height = 24;
            this->bunifuCustomDataGrid2->Size = System::Drawing::Size(896, 359);
            this->bunifuCustomDataGrid2->TabIndex = 1;
            // 
            // tabPage4
            // 
            this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->tabPage4->Controls->Add(this->bunifuFlatButton7);
            this->tabPage4->Controls->Add(this->pictureBox9);
            this->tabPage4->Controls->Add(this->label12);
            this->tabPage4->Controls->Add(this->label11);
            this->tabPage4->Controls->Add(this->comboBox2);
            this->tabPage4->Controls->Add(this->bunifuMaterialTextbox6);
            this->tabPage4->Controls->Add(this->bunifuMaterialTextbox5);
            this->tabPage4->Controls->Add(this->bunifuFlatButton6);
            this->tabPage4->Location = System::Drawing::Point(4, 30);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(3);
            this->tabPage4->Size = System::Drawing::Size(952, 536);
            this->tabPage4->TabIndex = 3;
            this->tabPage4->Text = L"Manage Quantity";
            // 
            // bunifuFlatButton7
            // 
            this->bunifuFlatButton7->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton7->BorderRadius = 0;
            this->bunifuFlatButton7->ButtonText = L"Change The Quantity";
            this->bunifuFlatButton7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton7->DisabledColor = System::Drawing::Color::Gray;
            this->bunifuFlatButton7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton7->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton7->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton7.Iconimage")));
            this->bunifuFlatButton7->Iconimage_right = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton7.Iconimage_right")));
            this->bunifuFlatButton7->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton7->Iconimage_Selected = nullptr;
            this->bunifuFlatButton7->IconMarginLeft = 0;
            this->bunifuFlatButton7->IconMarginRight = 0;
            this->bunifuFlatButton7->IconRightVisible = false;
            this->bunifuFlatButton7->IconRightZoom = 85;
            this->bunifuFlatButton7->IconVisible = false;
            this->bunifuFlatButton7->IconZoom = 85;
            this->bunifuFlatButton7->IsTab = false;
            this->bunifuFlatButton7->Location = System::Drawing::Point(282, 409);
            this->bunifuFlatButton7->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton7->Name = L"bunifuFlatButton7";
            this->bunifuFlatButton7->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton7->OnHovercolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton7->OnHoverTextColor = System::Drawing::Color::White;
            this->bunifuFlatButton7->selected = false;
            this->bunifuFlatButton7->Size = System::Drawing::Size(366, 59);
            this->bunifuFlatButton7->TabIndex = 12;
            this->bunifuFlatButton7->Text = L"Change The Quantity";
            this->bunifuFlatButton7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton7->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton7->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(393, 261);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(63, 50);
            this->pictureBox9->TabIndex = 11;
            this->pictureBox9->TabStop = false;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(186, 270);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(129, 34);
            this->label12->TabIndex = 10;
            this->label12->Text = L"Quantity";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(122, 137);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(182, 21);
            this->label11->TabIndex = 9;
            this->label11->Text = L"Choose Specific Product";
            // 
            // comboBox2
            // 
            this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Location = System::Drawing::Point(393, 127);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(359, 30);
            this->comboBox2->TabIndex = 8;
            this->comboBox2->Text = L"Food";
            // 
            // bunifuMaterialTextbox6
            // 
            this->bunifuMaterialTextbox6->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox6->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox6->HintText = L"";
            this->bunifuMaterialTextbox6->isPassword = false;
            this->bunifuMaterialTextbox6->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox6->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox6->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox6->LineThickness = 4;
            this->bunifuMaterialTextbox6->Location = System::Drawing::Point(483, 261);
            this->bunifuMaterialTextbox6->Margin = System::Windows::Forms::Padding(6);
            this->bunifuMaterialTextbox6->Name = L"bunifuMaterialTextbox6";
            this->bunifuMaterialTextbox6->Size = System::Drawing::Size(408, 58);
            this->bunifuMaterialTextbox6->TabIndex = 7;
            this->bunifuMaterialTextbox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuMaterialTextbox5
            // 
            this->bunifuMaterialTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox5->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox5->HintText = L"Name Of Restaurant";
            this->bunifuMaterialTextbox5->isPassword = false;
            this->bunifuMaterialTextbox5->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox5->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox5->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox5->LineThickness = 3;
            this->bunifuMaterialTextbox5->Location = System::Drawing::Point(393, 54);
            this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
            this->bunifuMaterialTextbox5->Size = System::Drawing::Size(359, 44);
            this->bunifuMaterialTextbox5->TabIndex = 7;
            this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            // 
            // bunifuFlatButton6
            // 
            this->bunifuFlatButton6->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton6->BorderRadius = 0;
            this->bunifuFlatButton6->ButtonText = L"Choose Restaurant";
            this->bunifuFlatButton6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton6->DisabledColor = System::Drawing::Color::Gray;
            this->bunifuFlatButton6->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton6->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton6.Iconimage")));
            this->bunifuFlatButton6->Iconimage_right = nullptr;
            this->bunifuFlatButton6->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton6->Iconimage_Selected = nullptr;
            this->bunifuFlatButton6->IconMarginLeft = 0;
            this->bunifuFlatButton6->IconMarginRight = 0;
            this->bunifuFlatButton6->IconRightVisible = false;
            this->bunifuFlatButton6->IconRightZoom = 0;
            this->bunifuFlatButton6->IconVisible = false;
            this->bunifuFlatButton6->IconZoom = 85;
            this->bunifuFlatButton6->IsTab = false;
            this->bunifuFlatButton6->Location = System::Drawing::Point(59, 44);
            this->bunifuFlatButton6->Margin = System::Windows::Forms::Padding(14);
            this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
            this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
            this->bunifuFlatButton6->selected = false;
            this->bunifuFlatButton6->Size = System::Drawing::Size(287, 55);
            this->bunifuFlatButton6->TabIndex = 6;
            this->bunifuFlatButton6->Text = L"Choose Restaurant";
            this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton6->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel1->Controls->Add(this->pictureBox2);
            this->panel1->Controls->Add(this->label_Username);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Controls->Add(this->label_UsernameN);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->panel1->Location = System::Drawing::Point(247, 45);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(960, 56);
            this->panel1->TabIndex = 25;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel1_Paint);
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(191, 5);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(71, 48);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // label_Username
            // 
            this->label_Username->AutoSize = true;
            this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label_Username->Location = System::Drawing::Point(832, 18);
            this->label_Username->Name = L"label_Username";
            this->label_Username->Size = System::Drawing::Size(0, 20);
            this->label_Username->TabIndex = 0;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
            this->label3->Location = System::Drawing::Point(278, 2);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(215, 36);
            this->label3->TabIndex = 0;
            this->label3->Text = L"Admin Room";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
            this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label1->Location = System::Drawing::Point(571, 7);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(126, 31);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Welcome";
            // 
            // label_UsernameN
            // 
            this->label_UsernameN->AutoSize = true;
            this->label_UsernameN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->label_UsernameN->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label_UsernameN.Image")));
            this->label_UsernameN->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label_UsernameN->Location = System::Drawing::Point(736, 18);
            this->label_UsernameN->Name = L"label_UsernameN";
            this->label_UsernameN->Size = System::Drawing::Size(80, 20);
            this->label_UsernameN->TabIndex = 0;
            this->label_UsernameN->Text = L"Manager :";
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
            this->Panel_Header->TabIndex = 24;
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
            this->button_Close->Click += gcnew System::EventHandler(this, &AdminForm::button_Close_Click);
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
            this->button_Minimize->Click += gcnew System::EventHandler(this, &AdminForm::button_Minimize_Click);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Maroon;
            this->panel2->Controls->Add(this->pictureBox4);
            this->panel2->Controls->Add(this->pictureBox6);
            this->panel2->Controls->Add(this->pictureBox5);
            this->panel2->Controls->Add(this->pictureBox3);
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->button_AdminRoom);
            this->panel2->Controls->Add(this->bunifuFlatButton3);
            this->panel2->Controls->Add(this->bunifuFlatButton2);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(247, 671);
            this->panel2->TabIndex = 23;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(152, 348);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(71, 48);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 1;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(152, 513);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(71, 48);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 1;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(24, 513);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(71, 48);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 1;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(24, 348);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(71, 48);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 1;
            this->pictureBox3->TabStop = false;
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
            this->button_AdminRoom->ButtonText = L"Sign Out";
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
            this->button_AdminRoom->IconRightZoom = 70;
            this->button_AdminRoom->IconVisible = true;
            this->button_AdminRoom->IconZoom = 80;
            this->button_AdminRoom->IsTab = false;
            this->button_AdminRoom->Location = System::Drawing::Point(0, 581);
            this->button_AdminRoom->Margin = System::Windows::Forms::Padding(6);
            this->button_AdminRoom->Name = L"button_AdminRoom";
            this->button_AdminRoom->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_AdminRoom->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_AdminRoom->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_AdminRoom->selected = false;
            this->button_AdminRoom->Size = System::Drawing::Size(248, 70);
            this->button_AdminRoom->TabIndex = 11;
            this->button_AdminRoom->Text = L"Sign Out";
            this->button_AdminRoom->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_AdminRoom->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_AdminRoom->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            this->button_AdminRoom->Click += gcnew System::EventHandler(this, &AdminForm::button_AdminRoom_Click);
            // 
            // bunifuFlatButton3
            // 
            this->bunifuFlatButton3->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton3->BorderRadius = 0;
            this->bunifuFlatButton3->ButtonText = L"Foods";
            this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton3->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
            this->bunifuFlatButton3->Iconimage_right = nullptr;
            this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton3->Iconimage_Selected = nullptr;
            this->bunifuFlatButton3->IconMarginLeft = 0;
            this->bunifuFlatButton3->IconMarginRight = 0;
            this->bunifuFlatButton3->IconRightVisible = true;
            this->bunifuFlatButton3->IconRightZoom = 0;
            this->bunifuFlatButton3->IconVisible = true;
            this->bunifuFlatButton3->IconZoom = 100;
            this->bunifuFlatButton3->IsTab = false;
            this->bunifuFlatButton3->Location = System::Drawing::Point(0, 416);
            this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
            this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton3->selected = false;
            this->bunifuFlatButton3->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton3->TabIndex = 11;
            this->bunifuFlatButton3->Text = L"Foods";
            this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton3->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            this->bunifuFlatButton3->Click += gcnew System::EventHandler(this, &AdminForm::bunifuFlatButton3_Click);
            // 
            // bunifuFlatButton2
            // 
            this->bunifuFlatButton2->Activecolor = System::Drawing::Color::Maroon;
            this->bunifuFlatButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->bunifuFlatButton2->BorderRadius = 0;
            this->bunifuFlatButton2->ButtonText = L"All Restaurants";
            this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bunifuFlatButton2->ForeColor = System::Drawing::Color::CornflowerBlue;
            this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
            this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
            this->bunifuFlatButton2->Iconimage_right = nullptr;
            this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
            this->bunifuFlatButton2->Iconimage_Selected = nullptr;
            this->bunifuFlatButton2->IconMarginLeft = 0;
            this->bunifuFlatButton2->IconMarginRight = 0;
            this->bunifuFlatButton2->IconRightVisible = true;
            this->bunifuFlatButton2->IconRightZoom = 0;
            this->bunifuFlatButton2->IconVisible = true;
            this->bunifuFlatButton2->IconZoom = 100;
            this->bunifuFlatButton2->IsTab = false;
            this->bunifuFlatButton2->Location = System::Drawing::Point(0, 257);
            this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(6);
            this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
            this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->bunifuFlatButton2->selected = false;
            this->bunifuFlatButton2->Size = System::Drawing::Size(248, 70);
            this->bunifuFlatButton2->TabIndex = 11;
            this->bunifuFlatButton2->Text = L"All Restaurants";
            this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->bunifuFlatButton2->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            this->bunifuFlatButton2->Click += gcnew System::EventHandler(this, &AdminForm::bunifuFlatButton2_Click);
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
            // 
            // AdminForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
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
            this->Name = L"AdminForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"AdminForm";
            this->panel3->ResumeLayout(false);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGrid_Employee))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->EndInit();
            this->tabPage3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid2))->EndInit();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->Panel_Header->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void button_AdminRoom_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::home->Show();
	this->Hide();
}
private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
	WindowState = FormWindowState::Minimized;
}
private: System::Void bunifuFlatButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::AllRestaurants->ShowDialog();

}
private: System::Void bunifuFlatButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	GlobalClass::FoodsName->ShowDialog();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
