#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace ooplab11;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ooplab11::MyForm form;
	Application::Run(% form);
	return 0;
}