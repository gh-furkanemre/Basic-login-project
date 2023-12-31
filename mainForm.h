#pragma once

namespace LoginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(183, 317);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(932, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You\'re logged, thank you.";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(1318, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"X";
			this->label3->Click += gcnew System::EventHandler(this, &mainForm::label3_Click);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &mainForm::label3_MouseLeave);
			this->label3->MouseHover += gcnew System::EventHandler(this, &mainForm::label3_MouseHover);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(582, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 45);
			this->button1->TabIndex = 3;
			this->button1->Text = L"My Github";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1366, 768);
			this->MinimumSize = System::Drawing::Size(1366, 768);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::mainForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::mainForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &mainForm::mainForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//GLOBAL
		bool mousedown;
		Point lastlocation;
	//METHODS
	private: System::Void mainForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void mainForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void mainForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
