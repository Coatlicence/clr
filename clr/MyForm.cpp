#include "MyForm.h"
#include <cassert>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	// тестирование
	assert(testCompCreate1());
	assert(testCompCreate2());
	assert(testCompCreate3());
	assert(testCompCreate4());

	assert(testCompMove1());
	assert(testCompMove2());

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	clr::MyForm form;
	Application::Run(% form);

	return 0;
}

Panel^ clr::CreateInputBox(String^ Name)
{
	Panel^ panel = gcnew Panel();
	panel->Text = String::Empty;
	panel->Dock = System::Windows::Forms::DockStyle::Top;
	panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	panel->Padding = System::Windows::Forms::Padding(3);
	panel->Size = System::Drawing::Size(166, 30);
	panel->Name = "InputPanel" + Name;


	Label^ label = gcnew Label();
	label->AutoSize = true;
	label->Dock = System::Windows::Forms::DockStyle::Left;
	label->Text = Name;
	label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

	NumericUpDown^ textbox = gcnew NumericUpDown();
	textbox->AutoSize = true;
	textbox->Dock = System::Windows::Forms::DockStyle::Fill;
	textbox->Name = "Inputbox" + Name;
	textbox->Minimum = -9999;
	textbox->Maximum = 9999;

	Panel^ panelTextbox = gcnew Panel();
	panelTextbox->Dock = System::Windows::Forms::DockStyle::Fill;

	panelTextbox->Controls->Add(textbox);

	panel->Controls->Add(panelTextbox);
	panel->Controls->Add(label);

	return panel;
}
