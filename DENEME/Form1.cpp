#include "Form1.h"
#include <Windows.h>
using namespace DENEME; // Change this to your project name

int Main()
{
    // Enabling Windows XP visual effects before any controls are created
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Create the main window and run it
    Application::Run(gcnew Form1()); //Form1 is the name of the form created. 
    return 0;
}
