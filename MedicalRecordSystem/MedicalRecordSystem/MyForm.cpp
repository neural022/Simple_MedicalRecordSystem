#include "MyForm.h"
using namespace System;
using namespace MedicalRecordSystem;

//	array<String ^>^args

[STAThread]	// 不加open file會當機
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	
	return 0;
}

