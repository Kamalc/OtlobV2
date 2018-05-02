#pragma once
#include "Global.h"
#include<string>
#include <fstream>    
#include"json.hpp"
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Globals;
    using namespace std;
    using json = nlohmann::json;

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
    private: Bunifu::Framework::UI::BunifuMaterialTextbox^  FirstName;



	private: System::Windows::Forms::Label^  label8;
    private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Restaurant_Name;

	private: System::Windows::Forms::Label^  label7;
    private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Phone;

	private: System::Windows::Forms::Label^  label6;
    private: Bunifu::Framework::UI::BunifuMaterialTextbox^  LastName;

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
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Panel^  panel4;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker2;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::Label^  label13;
	private: Bunifu::Framework::UI::BunifuCheckbox^  checkBox_ShPass;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_Clear;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SubmitSU;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Phone;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  Textbox_Password;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_Email;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_FirstName;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox7;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  textBox_LastName;
	private: System::Windows::Forms::Label^  label_SignUp;



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
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->Restaurant_Name = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->Phone = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->LastName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->FirstName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
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
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->bunifuDatepicker2 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->checkBox_ShPass = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->button_Clear = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->button_SubmitSU = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBox_Phone = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->Textbox_Password = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->textBox_Email = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->textBox_FirstName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->bunifuMaterialTextbox7 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->textBox_LastName = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
            this->label_SignUp = (gcnew System::Windows::Forms::Label());
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
            this->tabPage5->SuspendLayout();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
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
            this->tabControl1->Controls->Add(this->tabPage5);
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
            this->tabPage1->Controls->Add(this->Restaurant_Name);
            this->tabPage1->Controls->Add(this->label7);
            this->tabPage1->Controls->Add(this->Phone);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->LastName);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->FirstName);
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
            // Restaurant_Name
            // 
            this->Restaurant_Name->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->Restaurant_Name->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->Restaurant_Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Restaurant_Name->HintForeColor = System::Drawing::Color::Empty;
            this->Restaurant_Name->HintText = L"";
            this->Restaurant_Name->isPassword = false;
            this->Restaurant_Name->LineFocusedColor = System::Drawing::Color::Maroon;
            this->Restaurant_Name->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Restaurant_Name->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->Restaurant_Name->LineThickness = 3;
            this->Restaurant_Name->Location = System::Drawing::Point(445, 479);
            this->Restaurant_Name->Margin = System::Windows::Forms::Padding(4);
            this->Restaurant_Name->Name = L"Restaurant_Name";
            this->Restaurant_Name->Size = System::Drawing::Size(183, 38);
            this->Restaurant_Name->TabIndex = 15;
            this->Restaurant_Name->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
            // Phone
            // 
            this->Phone->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->Phone->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->Phone->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->Phone->HintForeColor = System::Drawing::Color::Empty;
            this->Phone->HintText = L"";
            this->Phone->isPassword = false;
            this->Phone->LineFocusedColor = System::Drawing::Color::Maroon;
            this->Phone->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Phone->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->Phone->LineThickness = 3;
            this->Phone->Location = System::Drawing::Point(445, 362);
            this->Phone->Margin = System::Windows::Forms::Padding(4);
            this->Phone->Name = L"Phone";
            this->Phone->Size = System::Drawing::Size(183, 38);
            this->Phone->TabIndex = 15;
            this->Phone->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->Phone->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::Phone_OnValueChanged);
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
            // LastName
            // 
            this->LastName->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->LastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->LastName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->LastName->HintForeColor = System::Drawing::Color::Empty;
            this->LastName->HintText = L"";
            this->LastName->isPassword = false;
            this->LastName->LineFocusedColor = System::Drawing::Color::Maroon;
            this->LastName->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->LastName->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->LastName->LineThickness = 3;
            this->LastName->Location = System::Drawing::Point(124, 479);
            this->LastName->Margin = System::Windows::Forms::Padding(4);
            this->LastName->Name = L"LastName";
            this->LastName->Size = System::Drawing::Size(183, 38);
            this->LastName->TabIndex = 15;
            this->LastName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->LastName->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::LastName_OnValueChanged);
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
            // FirstName
            // 
            this->FirstName->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->FirstName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->FirstName->HintForeColor = System::Drawing::Color::Empty;
            this->FirstName->HintText = L"";
            this->FirstName->isPassword = false;
            this->FirstName->LineFocusedColor = System::Drawing::Color::Maroon;
            this->FirstName->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->FirstName->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->FirstName->LineThickness = 3;
            this->FirstName->Location = System::Drawing::Point(124, 415);
            this->FirstName->Margin = System::Windows::Forms::Padding(4);
            this->FirstName->Name = L"FirstName";
            this->FirstName->Size = System::Drawing::Size(183, 38);
            this->FirstName->TabIndex = 15;
            this->FirstName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
            this->FirstName->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::FirstName_OnValueChanged);
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
            this->bunifuSeparator2->LineThickness = 110;
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
            this->bunifuSeparator1->LineThickness = 153;
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
            dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->DataGrid_Employee->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle7;
            this->DataGrid_Employee->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->DataGrid_Employee->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->DataGrid_Employee->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle8->BackColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle8->ForeColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->DataGrid_Employee->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
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
            this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &AdminForm::bunifuFlatButton1_Click);
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
            dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
            this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle10->BackColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle10->ForeColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
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
            dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
            this->bunifuCustomDataGrid2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle11;
            this->bunifuCustomDataGrid2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuCustomDataGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->bunifuCustomDataGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
            dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle12->BackColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle12->ForeColor = System::Drawing::Color::SeaGreen;
            dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->bunifuCustomDataGrid2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle12;
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
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->panel4);
            this->tabPage5->Location = System::Drawing::Point(4, 30);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Padding = System::Windows::Forms::Padding(3);
            this->tabPage5->Size = System::Drawing::Size(952, 536);
            this->tabPage5->TabIndex = 4;
            this->tabPage5->Text = L"Add Admin";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // panel4
            // 
            this->panel4->AutoScroll = true;
            this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->panel4->Controls->Add(this->bunifuDatepicker2);
            this->panel4->Controls->Add(this->pictureBox10);
            this->panel4->Controls->Add(this->pictureBox11);
            this->panel4->Controls->Add(this->pictureBox12);
            this->panel4->Controls->Add(this->pictureBox13);
            this->panel4->Controls->Add(this->pictureBox14);
            this->panel4->Controls->Add(this->pictureBox15);
            this->panel4->Controls->Add(this->pictureBox16);
            this->panel4->Controls->Add(this->pictureBox17);
            this->panel4->Controls->Add(this->pictureBox18);
            this->panel4->Controls->Add(this->label13);
            this->panel4->Controls->Add(this->checkBox_ShPass);
            this->panel4->Controls->Add(this->label14);
            this->panel4->Controls->Add(this->label15);
            this->panel4->Controls->Add(this->label16);
            this->panel4->Controls->Add(this->label17);
            this->panel4->Controls->Add(this->button_Clear);
            this->panel4->Controls->Add(this->button_SubmitSU);
            this->panel4->Controls->Add(this->label18);
            this->panel4->Controls->Add(this->label19);
            this->panel4->Controls->Add(this->label20);
            this->panel4->Controls->Add(this->textBox_Phone);
            this->panel4->Controls->Add(this->Textbox_Password);
            this->panel4->Controls->Add(this->textBox_Email);
            this->panel4->Controls->Add(this->textBox_FirstName);
            this->panel4->Controls->Add(this->bunifuMaterialTextbox7);
            this->panel4->Controls->Add(this->textBox_LastName);
            this->panel4->Controls->Add(this->label_SignUp);
            this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->panel4->Location = System::Drawing::Point(3, 3);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(946, 530);
            this->panel4->TabIndex = 15;
            // 
            // bunifuDatepicker2
            // 
            this->bunifuDatepicker2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuDatepicker2->BorderRadius = 0;
            this->bunifuDatepicker2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->bunifuDatepicker2->Format = System::Windows::Forms::DateTimePickerFormat::Long;
            this->bunifuDatepicker2->FormatCustom = nullptr;
            this->bunifuDatepicker2->Location = System::Drawing::Point(338, 399);
            this->bunifuDatepicker2->Margin = System::Windows::Forms::Padding(6);
            this->bunifuDatepicker2->Name = L"bunifuDatepicker2";
            this->bunifuDatepicker2->Size = System::Drawing::Size(370, 44);
            this->bunifuDatepicker2->TabIndex = 24;
            this->bunifuDatepicker2->Value = System::DateTime(2018, 4, 20, 15, 37, 7, 630);
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(95, 1);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(103, 77);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 23;
            this->pictureBox10->TabStop = false;
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(809, 353);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(33, 25);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 22;
            this->pictureBox11->TabStop = false;
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(148, 478);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(33, 25);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox12->TabIndex = 22;
            this->pictureBox12->TabStop = false;
            // 
            // pictureBox13
            // 
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(148, 354);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(33, 25);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox13->TabIndex = 22;
            this->pictureBox13->TabStop = false;
            // 
            // pictureBox14
            // 
            this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
            this->pictureBox14->Location = System::Drawing::Point(148, 287);
            this->pictureBox14->Name = L"pictureBox14";
            this->pictureBox14->Size = System::Drawing::Size(33, 25);
            this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox14->TabIndex = 22;
            this->pictureBox14->TabStop = false;
            // 
            // pictureBox15
            // 
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(148, 414);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(33, 25);
            this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox15->TabIndex = 22;
            this->pictureBox15->TabStop = false;
            // 
            // pictureBox16
            // 
            this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
            this->pictureBox16->Location = System::Drawing::Point(148, 225);
            this->pictureBox16->Name = L"pictureBox16";
            this->pictureBox16->Size = System::Drawing::Size(33, 25);
            this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox16->TabIndex = 22;
            this->pictureBox16->TabStop = false;
            // 
            // pictureBox17
            // 
            this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
            this->pictureBox17->Location = System::Drawing::Point(148, 162);
            this->pictureBox17->Name = L"pictureBox17";
            this->pictureBox17->Size = System::Drawing::Size(33, 25);
            this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox17->TabIndex = 22;
            this->pictureBox17->TabStop = false;
            // 
            // pictureBox18
            // 
            this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
            this->pictureBox18->Location = System::Drawing::Point(148, 94);
            this->pictureBox18->Name = L"pictureBox18";
            this->pictureBox18->Size = System::Drawing::Size(33, 25);
            this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox18->TabIndex = 22;
            this->pictureBox18->TabStop = false;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(708, 354);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(107, 17);
            this->label13->TabIndex = 21;
            this->label13->Text = L"Show Password";
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
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(193, 479);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(57, 21);
            this->label14->TabIndex = 19;
            this->label14->Text = L"Phone";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(193, 355);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(78, 21);
            this->label15->TabIndex = 19;
            this->label15->Text = L"Password";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(193, 288);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(56, 21);
            this->label16->TabIndex = 19;
            this->label16->Text = L"Email";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(193, 95);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(92, 21);
            this->label17->TabIndex = 19;
            this->label17->Text = L"First Name";
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
            this->button_Clear->IconRightVisible = false;
            this->button_Clear->IconRightZoom = 0;
            this->button_Clear->IconVisible = false;
            this->button_Clear->IconZoom = 80;
            this->button_Clear->IsTab = false;
            this->button_Clear->Location = System::Drawing::Point(338, 528);
            this->button_Clear->Margin = System::Windows::Forms::Padding(6);
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
            // 
            // button_SubmitSU
            // 
            this->button_SubmitSU->Activecolor = System::Drawing::Color::Maroon;
            this->button_SubmitSU->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_SubmitSU->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->button_SubmitSU->BorderRadius = 0;
            this->button_SubmitSU->ButtonText = L"Sign Up";
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
            this->button_SubmitSU->IconRightVisible = false;
            this->button_SubmitSU->IconRightZoom = 0;
            this->button_SubmitSU->IconVisible = false;
            this->button_SubmitSU->IconZoom = 80;
            this->button_SubmitSU->IsTab = false;
            this->button_SubmitSU->Location = System::Drawing::Point(552, 528);
            this->button_SubmitSU->Margin = System::Windows::Forms::Padding(6);
            this->button_SubmitSU->Name = L"button_SubmitSU";
            this->button_SubmitSU->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_SubmitSU->OnHovercolor = System::Drawing::Color::AntiqueWhite;
            this->button_SubmitSU->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
            this->button_SubmitSU->selected = false;
            this->button_SubmitSU->Size = System::Drawing::Size(156, 39);
            this->button_SubmitSU->TabIndex = 11;
            this->button_SubmitSU->Text = L"Sign Up";
            this->button_SubmitSU->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->button_SubmitSU->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
                static_cast<System::Int32>(static_cast<System::Byte>(102)));
            this->button_SubmitSU->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(193, 415);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(108, 21);
            this->label18->TabIndex = 19;
            this->label18->Text = L"Date of Birth";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(193, 226);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(82, 21);
            this->label19->TabIndex = 19;
            this->label19->Text = L"Username";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(193, 163);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(88, 21);
            this->label20->TabIndex = 19;
            this->label20->Text = L"Last Name";
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
            // bunifuMaterialTextbox7
            // 
            this->bunifuMaterialTextbox7->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->bunifuMaterialTextbox7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
            this->bunifuMaterialTextbox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->bunifuMaterialTextbox7->HintForeColor = System::Drawing::Color::Empty;
            this->bunifuMaterialTextbox7->HintText = L"Choose something unique";
            this->bunifuMaterialTextbox7->isPassword = false;
            this->bunifuMaterialTextbox7->LineFocusedColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox7->LineIdleColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->bunifuMaterialTextbox7->LineMouseHoverColor = System::Drawing::Color::Maroon;
            this->bunifuMaterialTextbox7->LineThickness = 3;
            this->bunifuMaterialTextbox7->Location = System::Drawing::Point(338, 206);
            this->bunifuMaterialTextbox7->Margin = System::Windows::Forms::Padding(4);
            this->bunifuMaterialTextbox7->Name = L"bunifuMaterialTextbox7";
            this->bunifuMaterialTextbox7->Size = System::Drawing::Size(370, 44);
            this->bunifuMaterialTextbox7->TabIndex = 18;
            this->bunifuMaterialTextbox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
            this->label_SignUp->Size = System::Drawing::Size(205, 40);
            this->label_SignUp->TabIndex = 16;
            this->label_SignUp->Text = L"Add Admin";
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
            this->tabPage5->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
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
private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {

    Convert_strings temp;
    std::string First_Name = temp.Convert_System_to_std(FirstName->Text);
    std::string Last_Name  = temp.Convert_System_to_std(LastName->Text);
    std::string phone = temp.Convert_System_to_std(Phone->Text);
    std::string  RestaurantName = temp.Convert_System_to_std(Restaurant_Name->Text);
  
    ifstream i("Restraunt.json");
    json file;
    i >> file;
bool find=0;
for (json::iterator it = file.begin(); it != file.end(); it++)
    {
        json  Gov = file[it.key()];
        for (json::iterator it_2 = Gov.begin(); it_2 != Gov.end(); it_2++)
        {
            json Area = Gov[it_2.key()];
            for (json::iterator it_3 = Area.begin(); it_3 != Area.end(); it_3++)
            {
                if (it_3.key() == RestaurantName)
                {
                    json Delivery_Boys = Area[it_3.key()]["Delivery boy"];
                    std::string ssize = temp.Convert_System_to_std(Convert::ToString((Delivery_Boys.size()) + 1));
                    MessageBox::Show(temp.Convert_std_to_System(it.key())+" * "+ temp.Convert_std_to_System(it_2.key())+" * "+temp.Convert_std_to_System(it_3.key()));
                    file[it.key()][it_2.key()][it_3.key()]["Delivery boy"][ssize]["Name"]["First"]=First_Name;
                    file[it.key()][it_2.key()][it_3.key()]["Delivery boy"][ssize]["Name"]["Last"] = Last_Name;
                    file[it.key()][it_2.key()][it_3.key()]["Delivery boy"][ssize]["Phone"] = phone;
                    std::ofstream o("Restraunt.json");
                    o << std::setw(4) << file << std::endl;
                    find = 1;
                    break;
                }
            }
            if (find)
            {
                break;
            }
        }
        if (find)
        {
            break;
        }
    }
}
private: System::Void FirstName_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void LastName_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Phone_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
