#include "MyForm.h"
using namespace System;
using namespace MedicalRecordSystem;

//	array<String ^>^args

[STAThread]	// ���[open file�|���
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	
	return 0;
}

