#include "Logowanie.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Klinika::Logowanie form;
	Application::Run(% form);
	return 0;
}