#include "MyForm.h"

using namespace formes_geo;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Cr�er la fen�tre principale et l'ex�cuter
	Application::Run(gcnew MyForm());
	return 0;
}