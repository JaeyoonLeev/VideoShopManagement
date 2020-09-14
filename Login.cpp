#include "Login.h"

using namespace System;

[STAThreadAttribute]

int main() {

	System::Windows::Forms::Application::Run(gcnew VideoShopManagement::Login());
	return 0;

}