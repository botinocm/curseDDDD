#include "Login_window.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

[STAThread]
void main (array <String^>^ argv) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	projectapplication::MyForm form;
	Application::Run(% form);
}
