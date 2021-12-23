#include "libraries.h"

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	LR3::MainForm form;
	Application::Run(% form);
	return 0;
}
