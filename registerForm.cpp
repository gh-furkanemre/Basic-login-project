#include "registerForm.h"
#include <msclr/marshal_cppstd.h> // for Object String to normal string
#include <iostream>
#include <fstream>

using namespace std;
using namespace LoginGUI;

//FUNCTIONS

void registerFunc(string name, string pass) {
	ofstream filetxt;
	filetxt.open("txtdata\\data.txt");
	filetxt << "NAME: " << name << "\nPASSWORD: " << pass << endl;
	filetxt.close();
}

//NAMESPACE LOGINGUI

void registerForm::label2_MouseHover(Object^ sender, EventArgs^ e) { // if your mouse is on this label will be blue
	this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
}
void registerForm::label2_MouseLeave(Object^ sender, EventArgs^ e){ //if your mouse leave this label will be white
	this->label2->ForeColor = System::Drawing::Color::White;
}
void registerForm::label2_Click(Object^ sender, EventArgs^ e) { // close
	registerForm::Close();
}
void registerForm::button1_Click(Object^ sender, EventArgs^ e) { // register approve
	String^ name = this->textBox1->Text; //object to string
	msclr::interop::marshal_context context;
	string nametxt = context.marshal_as<string>(name);

	String^ pass = this->password_1->Text;
	msclr::interop::marshal_context context2;
	string passtxt = context2.marshal_as<string>(pass);

	String^ pass2 = this->password_2->Text;
	msclr::interop::marshal_context context3;
	string pass2txt = context2.marshal_as<string>(pass2);

	if(passtxt == "" || pass2txt == "" || nametxt == "") {
		MessageBox::Show("This form cannot remain empty.", "Register", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else if (passtxt == pass2txt) {
		registerFunc(nametxt, passtxt);
		MessageBox::Show("Created successfully.", "Welcome!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Close();
	}
	else {
		MessageBox::Show("Something wrong, check your passwords.", "Register", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
void registerForm::registerForm_MouseDown(Object^ sender, MouseEventArgs^ e) { // for move app
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		mousedown = true;
		lastlocation = e->Location;
		this->Capture = true;
	}
}
void registerForm::registerForm_MouseMove(Object^ sender, MouseEventArgs^ e) {
	if (mousedown) {
		Point newlocation = Point(
			this->Location.X - lastlocation.X + e->X,
			this->Location.Y - lastlocation.Y + e->Y);
		this->Location = newlocation;
	}
}
void registerForm::registerForm_MouseUp(Object^ sender, MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left) {
		mousedown = false;
		this->Capture = false;
	}
}
