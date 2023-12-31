#include "mainForm.h"
#include "loginForm.h"
#include "registerForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace LoginGUI;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginGUI::mainForm form;
	LoginGUI::loginForm form2;
	LoginGUI::registerForm form3;
	Application::Run(% form2);
}



//METHODS

void mainForm::mainForm_MouseDown(Object^ sender, MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->mousedown = true;
		this->lastlocation = e->Location;
		this->Capture = true;
	}
}
void mainForm::mainForm_MouseMove(Object^ sender, MouseEventArgs^ e) {
	if (this->mousedown) {
		Point newlocation = Point(
			(this->Location.X - this->lastlocation.X) + e->X,
			(this->Location.Y - this->lastlocation.Y) + e->Y);
		this->Location = newlocation;
	}
}
void mainForm::mainForm_MouseUp(Object^ sender, MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->mousedown = false;
		this->Capture = false;
	}
}
void mainForm::label3_Click(Object^ sender, EventArgs^ e) {
	Application::Exit();
}
void mainForm::label3_MouseHover(Object^ sender, EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
}
void mainForm::label3_MouseLeave(Object^ sender, EventArgs^ e) {
	this->label3->ForeColor = System::Drawing::Color::White;
}
void mainForm::button1_Click(Object^ sender, EventArgs^ e) {
	System::Diagnostics::Process::Start("https://github.com/gh-furkanemre");
}