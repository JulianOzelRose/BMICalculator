/*
	BMICalculator.cpp
	Julian Rose
	11-8-2022
*/

#include "BMICalculator.h"
#include <iostream>
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	BMICalculator::BMICalculator bmiCalc;
	Application::Run(% bmiCalc);

	return 0;
}
