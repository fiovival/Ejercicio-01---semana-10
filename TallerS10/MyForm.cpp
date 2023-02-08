#include "MyForm.h"
#include<time.h>

using namespace System;
using namespace System::Windows::Forms;
void main() {
	srand(time(0));
	Application::EnableVisualStyles();
	Application::Run(gcnew TallerS10::MyForm());

}
