#include "MyForm.h"
#include<windows.h>
#include<stdio.h>
#include<math.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form; //
    Application::Run(% form);

    return 0;
}

