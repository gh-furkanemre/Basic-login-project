#include "mainForm.h"
#include "loginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginGUI::mainForm form;
	LoginGUI::loginForm form2;
	Application::Run(% form2);
}