#include "mainForm.h"
#include "loginForm.h"
#include "registerForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginGUI::mainForm form;
	LoginGUI::loginForm form2;
	LoginGUI::registerForm form3;
	Application::Run(% form2);
}