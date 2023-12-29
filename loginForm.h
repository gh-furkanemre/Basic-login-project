#pragma once
#include "registerForm.h"

namespace LoginGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ sign;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1318, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &loginForm::label2_Click);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &loginForm::label2_MouseLeave);
			this->label2->MouseHover += gcnew System::EventHandler(this, &loginForm::label2_MouseHover);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(235, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 39);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(242, 233);
			this->textBox1->MaxLength = 24;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 32);
			this->textBox1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(235, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 39);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->Location = System::Drawing::Point(242, 325);
			this->textBox2->MaxLength = 16;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(320, 32);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(242, 375);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(159, 28);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Remember me";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// sign
			// 
			this->sign->BackColor = System::Drawing::Color::Black;
			this->sign->Cursor = System::Windows::Forms::Cursors::Default;
			this->sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->sign->ForeColor = System::Drawing::Color::White;
			this->sign->Location = System::Drawing::Point(242, 433);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(141, 44);
			this->sign->TabIndex = 7;
			this->sign->Text = L"Sign";
			this->sign->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 735);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(475, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"If you don\'t have account, register locally. (Creating File)";
			this->label5->Click += gcnew System::EventHandler(this, &loginForm::label5_Click);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &loginForm::label5_MouseLeave);
			this->label5->MouseHover += gcnew System::EventHandler(this, &loginForm::label5_MouseHover);
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1366, 768);
			this->MinimumSize = System::Drawing::Size(1366, 768);
			this->Name = L"loginForm";
			this->Text = L"Login";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &loginForm::loginForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &loginForm::loginForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &loginForm::loginForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool mousedown;
		Point lastlocation;
	private: System::Void loginForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mousedown = true;
		lastlocation = e->Location;
	}
	private: System::Void loginForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (mousedown) {
			this->Location = Point(
				(this->Location.X - lastlocation.X) + e->X,
				(this->Location.Y - lastlocation.Y) + e->Y);
			this->Update();
		}
	}
	private: System::Void loginForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mousedown = false;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (MessageBox::Show("Do you want to exit?", "Exit", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes) {
			//Application::Exit();
		//}
		Application::Exit();
	}
	private: System::Void label2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
	}
	private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label2->ForeColor = System::Drawing::Color::White;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		registerForm^ newrg = gcnew registerForm();
		newrg->Show();
	}
	private: System::Void label5_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		this->label5->ForeColor = System::Drawing::Color::DeepSkyBlue;
	}
	private: System::Void label5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->label5->ForeColor = System::Drawing::Color::White;
	}
};
}
