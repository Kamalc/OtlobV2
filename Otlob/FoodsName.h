#pragma once

namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FoodsName
	/// </summary>
	public ref class FoodsName : public System::Windows::Forms::Form
	{
	public:
		FoodsName(void)
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
		~FoodsName()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel1;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel4;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel3;
	private: Bunifu::Framework::UI::BunifuGradientPanel^  bunifuGradientPanel2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FoodsName::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuGradientPanel1 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuGradientPanel4 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel3 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel2 = (gcnew Bunifu::Framework::UI::BunifuGradientPanel());
			this->bunifuGradientPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 443);
			this->panel1->TabIndex = 6;
			// 
			// bunifuGradientPanel1
			// 
			this->bunifuGradientPanel1->BackColor = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel1.BackgroundImage")));
			this->bunifuGradientPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel1->Controls->Add(this->bunifuImageButton1);
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
			this->bunifuGradientPanel1->Size = System::Drawing::Size(884, 44);
			this->bunifuGradientPanel1->TabIndex = 5;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Maroon;
			this->bunifuImageButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.ImageActive")));
			this->bunifuImageButton1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButton1.InitialImage")));
			this->bunifuImageButton1->Location = System::Drawing::Point(845, 5);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(36, 36);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 0;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &FoodsName::bunifuImageButton1_Click);
			// 
			// bunifuGradientPanel4
			// 
			this->bunifuGradientPanel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel4.BackgroundImage")));
			this->bunifuGradientPanel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bunifuGradientPanel4->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->bunifuGradientPanel4->GradientBottomRight = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel4->GradientTopLeft = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel4->GradientTopRight = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel4->Location = System::Drawing::Point(11, 476);
			this->bunifuGradientPanel4->Name = L"bunifuGradientPanel4";
			this->bunifuGradientPanel4->Quality = 10;
			this->bunifuGradientPanel4->Size = System::Drawing::Size(862, 11);
			this->bunifuGradientPanel4->TabIndex = 7;
			// 
			// bunifuGradientPanel3
			// 
			this->bunifuGradientPanel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel3.BackgroundImage")));
			this->bunifuGradientPanel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->bunifuGradientPanel3->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->bunifuGradientPanel3->GradientBottomRight = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel3->GradientTopLeft = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel3->GradientTopRight = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel3->Location = System::Drawing::Point(873, 44);
			this->bunifuGradientPanel3->Name = L"bunifuGradientPanel3";
			this->bunifuGradientPanel3->Quality = 10;
			this->bunifuGradientPanel3->Size = System::Drawing::Size(11, 443);
			this->bunifuGradientPanel3->TabIndex = 8;
			// 
			// bunifuGradientPanel2
			// 
			this->bunifuGradientPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuGradientPanel2.BackgroundImage")));
			this->bunifuGradientPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuGradientPanel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->bunifuGradientPanel2->GradientBottomLeft = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->bunifuGradientPanel2->GradientBottomRight = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel2->GradientTopLeft = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel2->GradientTopRight = System::Drawing::Color::Maroon;
			this->bunifuGradientPanel2->Location = System::Drawing::Point(0, 44);
			this->bunifuGradientPanel2->Name = L"bunifuGradientPanel2";
			this->bunifuGradientPanel2->Quality = 10;
			this->bunifuGradientPanel2->Size = System::Drawing::Size(11, 443);
			this->bunifuGradientPanel2->TabIndex = 9;
			// 
			// FoodsName
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 487);
			this->Controls->Add(this->bunifuGradientPanel4);
			this->Controls->Add(this->bunifuGradientPanel3);
			this->Controls->Add(this->bunifuGradientPanel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->bunifuGradientPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FoodsName";
			this->Text = L"FoodsName";
			this->bunifuGradientPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButton1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
	}
};
}
