#include "loginForm.h"
#include <fstream>
#include <iostream>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace LoginGUI;

//FUNCTIONS

void loginForm::read(string name, string password) {
	ifstream filetxt("data.txt");
	bool found = false;
	if (filetxt.is_open()) {
		string line;
		while (getline(filetxt, line)) {
			if (line.find("NAME: " + name) != string::npos) {
				getline(filetxt, line);
				if (line.find("PASSWORD: " + password) != string::npos) {
					mainForm^ main = gcnew mainForm();
					main->Show();
					found = true;
					this->Hide();
					break;
				}
			}
		}
		filetxt.close();
	}
	if (!found) {
		MessageBox::Show("Something wrong, check your name or password or register locally.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

//NAMESPACE LOGINGUI

void loginForm::loginForm_MouseDown(Object^ sender, MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->mousedown = true;
		this->lastlocation = e->Location;
		this->Capture = true;
	}
}
void loginForm::loginForm_MouseMove(Object^ sender, MouseEventArgs^ e) {
	if (this->mousedown) {
		Point newLocation = Point(
			(this->Location.X - this->lastlocation.X) + e->X,
			(this->Location.Y - this->lastlocation.Y) + e->Y);
		this->Location = newLocation;
	}
}
void loginForm::loginForm_MouseUp(Object^ sender, MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		this->mousedown = false;
		this->Capture = false;
	}
}
void loginForm::label2_Click(Object^ sender, EventArgs^ e) {
	Application::Exit();
}
void loginForm::label2_MouseHover(Object^ sender, EventArgs^ e) {
	this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
}
void loginForm::label2_MouseLeave(Object^ sender, EventArgs^ e) {
	this->label2->ForeColor = System::Drawing::Color::White;
}
void loginForm::label5_Click(Object^ sender, EventArgs^ e) {
	registerForm^ newwindw = gcnew registerForm();
	newwindw->Show();
}
void loginForm::label5_MouseHover(Object^ sender, EventArgs^ e) {
	this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
}
void loginForm::label5_MouseLeave(Object^ sender, EventArgs^ e) {
	this->label2->ForeColor = System::Drawing::Color::White;
}
void loginForm::sign_Click(Object^ sender, EventArgs^ e) {
	String^ name = this->textBox1->Text;
	msclr::interop::marshal_context context;
	string nametxt = context.marshal_as<string>(name);

	String^ pass = this->textBox2->Text;
	msclr::interop::marshal_context context2;
	string passtxt = context2.marshal_as<string>(pass);

	if (nametxt == "" || passtxt == "") {
		MessageBox::Show("This form cannot remain empty.", "Login", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		read(nametxt, passtxt);
	}

}