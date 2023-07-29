#pragma once
#include <cliext/list>
#include <cliext/stack>

#include "PolygonFigure.h"
#include "Rhombus.h"
#include "ComplexFigure.h"

namespace clr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Вспомогательная функция построения интерфейса
	Panel^ CreateInputBox(String^ Name);

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		cliext::stack<Figure^, cliext::list<Figure^>> StackOfFigure;

		MyForm(void)
		{
			InitializeComponent();
			formGraphics = GroupBoxDrawingWindow->CreateGraphics();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}	

	private: System::Windows::Forms::Button^ buttonCreateFigure;
	private: System::Windows::Forms::GroupBox^ GroupBoxDrawingWindow;
	
	private: System::Windows::Forms::ListBox^ FigureType;
	private: System::Windows::Forms::ListBox^ ListBoxStackPresentation;
	private: System::Windows::Forms::Button^ buttonShowHide;
	private: System::Windows::Forms::Button^ buttonShowHideAll;
	private: System::Windows::Forms::Button^ buttonDeleteTop;

	private: System::Windows::Forms::Button^ buttonDeleteAll;

	private: System::Windows::Forms::Panel^ PanelFigureCreating;
	private: System::Windows::Forms::Label^ infoLabel;
	private: System::Windows::Forms::NumericUpDown^ InputboxMoveX;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ buttonMove;
	private: System::Windows::Forms::Panel^ panel;

	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;

	private: System::ComponentModel::IContainer^ components;
	
	public: 
	private: System::Windows::Forms::Panel^ PanelMoveFigure;
	private: System::Windows::Forms::Panel^ PanelMoveFigure;
		   /// <summary>
		/// Переменная, отвечающая за рисование 
		/// в объекте GroupBoxDrawingWindow
		/// </summary>
		Graphics^ formGraphics;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::Label^ label1;
			System::Windows::Forms::GroupBox^ groupBox1;
			System::Windows::Forms::GroupBox^ groupBox3;
			System::Windows::Forms::GroupBox^ groupBox5;
			System::Windows::Forms::GroupBox^ groupBox6;
			System::Windows::Forms::Label^ label2;
			this->PanelFigureCreating = (gcnew System::Windows::Forms::Panel());
			this->FigureType = (gcnew System::Windows::Forms::ListBox());
			this->buttonCreateFigure = (gcnew System::Windows::Forms::Button());
			this->ListBoxStackPresentation = (gcnew System::Windows::Forms::ListBox());
			this->PanelMoveFigure = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->InputboxMoveY = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->InputboxMoveX = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonMove = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteTop = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteAll = (gcnew System::Windows::Forms::Button());
			this->buttonShowHide = (gcnew System::Windows::Forms::Button());
			this->buttonShowHideAll = (gcnew System::Windows::Forms::Button());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->GroupBoxDrawingWindow = (gcnew System::Windows::Forms::GroupBox());
			label1 = (gcnew System::Windows::Forms::Label());
			groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			label2 = (gcnew System::Windows::Forms::Label());
			groupBox1->SuspendLayout();
			groupBox3->SuspendLayout();
			groupBox5->SuspendLayout();
			groupBox6->SuspendLayout();
			this->PanelMoveFigure->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputboxMoveY))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputboxMoveX))->BeginInit();
			this->GroupBoxDrawingWindow->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			label1->AutoSize = true;
			label1->Dock = System::Windows::Forms::DockStyle::Top;
			label1->Location = System::Drawing::Point(3, 16);
			label1->Margin = System::Windows::Forms::Padding(2);
			label1->Name = L"label1";
			label1->Padding = System::Windows::Forms::Padding(4);
			label1->Size = System::Drawing::Size(126, 21);
			label1->TabIndex = 0;
			label1->Text = L"Выберите тип фигуры";
			// 
			// groupBox1
			// 
			groupBox1->AutoSize = true;
			groupBox1->BackColor = System::Drawing::SystemColors::WindowText;
			groupBox1->Controls->Add(this->PanelFigureCreating);
			groupBox1->Controls->Add(groupBox3);
			groupBox1->Controls->Add(this->buttonCreateFigure);
			groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			groupBox1->Location = System::Drawing::Point(0, 0);
			groupBox1->Margin = System::Windows::Forms::Padding(12);
			groupBox1->Name = L"groupBox1";
			groupBox1->Padding = System::Windows::Forms::Padding(5);
			groupBox1->Size = System::Drawing::Size(176, 351);
			groupBox1->TabIndex = 2;
			groupBox1->TabStop = false;
			// 
			// PanelFigureCreating
			// 
			this->PanelFigureCreating->AutoScroll = true;
			this->PanelFigureCreating->AutoSize = true;
			this->PanelFigureCreating->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelFigureCreating->Location = System::Drawing::Point(5, 114);
			this->PanelFigureCreating->MinimumSize = System::Drawing::Size(166, 155);
			this->PanelFigureCreating->Name = L"PanelFigureCreating";
			this->PanelFigureCreating->Padding = System::Windows::Forms::Padding(3);
			this->PanelFigureCreating->Size = System::Drawing::Size(166, 190);
			this->PanelFigureCreating->TabIndex = 0;
			// 
			// groupBox3
			// 
			groupBox3->AutoSize = true;
			groupBox3->Controls->Add(label1);
			groupBox3->Controls->Add(this->FigureType);
			groupBox3->Dock = System::Windows::Forms::DockStyle::Top;
			groupBox3->Location = System::Drawing::Point(5, 18);
			groupBox3->Name = L"groupBox3";
			groupBox3->Size = System::Drawing::Size(166, 96);
			groupBox3->TabIndex = 3;
			groupBox3->TabStop = false;
			// 
			// FigureType
			// 
			this->FigureType->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->FigureType->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->FigureType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FigureType->ForeColor = System::Drawing::Color::Lime;
			this->FigureType->FormattingEnabled = true;
			this->FigureType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Ромб", L"Полигон", L"Сложная Фигура" });
			this->FigureType->Location = System::Drawing::Point(3, 37);
			this->FigureType->Name = L"FigureType";
			this->FigureType->Size = System::Drawing::Size(160, 56);
			this->FigureType->TabIndex = 2;
			this->FigureType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::FigureType_SelectedIndexChanged);
			// 
			// buttonCreateFigure
			// 
			this->buttonCreateFigure->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonCreateFigure->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonCreateFigure->Location = System::Drawing::Point(5, 304);
			this->buttonCreateFigure->Name = L"buttonCreateFigure";
			this->buttonCreateFigure->Size = System::Drawing::Size(166, 42);
			this->buttonCreateFigure->TabIndex = 1;
			this->buttonCreateFigure->Text = L"Создать фигуру";
			this->buttonCreateFigure->UseVisualStyleBackColor = false;
			this->buttonCreateFigure->Visible = false;
			this->buttonCreateFigure->Click += gcnew System::EventHandler(this, &MyForm::buttonCreateFigure_Click);
			// 
			// groupBox5
			// 
			groupBox5->Controls->Add(this->ListBoxStackPresentation);
			groupBox5->Controls->Add(groupBox6);
			groupBox5->Controls->Add(label2);
			groupBox5->Dock = System::Windows::Forms::DockStyle::Right;
			groupBox5->Location = System::Drawing::Point(603, 0);
			groupBox5->Name = L"groupBox5";
			groupBox5->Size = System::Drawing::Size(158, 351);
			groupBox5->TabIndex = 0;
			groupBox5->TabStop = false;
			// 
			// ListBoxStackPresentation
			// 
			this->ListBoxStackPresentation->BackColor = System::Drawing::SystemColors::InfoText;
			this->ListBoxStackPresentation->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ListBoxStackPresentation->ForeColor = System::Drawing::Color::Lime;
			this->ListBoxStackPresentation->FormattingEnabled = true;
			this->ListBoxStackPresentation->Location = System::Drawing::Point(3, 35);
			this->ListBoxStackPresentation->Name = L"ListBoxStackPresentation";
			this->ListBoxStackPresentation->Size = System::Drawing::Size(152, 120);
			this->ListBoxStackPresentation->TabIndex = 0;
			this->ListBoxStackPresentation->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ListBoxStackPresentation_SelectedIndexChanged);
			// 
			// groupBox6
			// 
			groupBox6->Controls->Add(this->PanelMoveFigure);
			groupBox6->Controls->Add(this->buttonDeleteTop);
			groupBox6->Controls->Add(this->buttonDeleteAll);
			groupBox6->Controls->Add(this->buttonShowHide);
			groupBox6->Controls->Add(this->buttonShowHideAll);
			groupBox6->Dock = System::Windows::Forms::DockStyle::Bottom;
			groupBox6->Location = System::Drawing::Point(3, 155);
			groupBox6->Name = L"groupBox6";
			groupBox6->Padding = System::Windows::Forms::Padding(5);
			groupBox6->Size = System::Drawing::Size(152, 193);
			groupBox6->TabIndex = 2;
			groupBox6->TabStop = false;
			// 
			// PanelMoveFigure
			// 
			this->PanelMoveFigure->AutoSize = true;
			this->PanelMoveFigure->Controls->Add(this->panel2);
			this->PanelMoveFigure->Controls->Add(this->panel4);
			this->PanelMoveFigure->Controls->Add(this->buttonMove);
			this->PanelMoveFigure->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PanelMoveFigure->Location = System::Drawing::Point(5, 8);
			this->PanelMoveFigure->Name = L"PanelMoveFigure";
			this->PanelMoveFigure->Padding = System::Windows::Forms::Padding(5);
			this->PanelMoveFigure->Size = System::Drawing::Size(142, 79);
			this->PanelMoveFigure->TabIndex = 6;
			this->PanelMoveFigure->Visible = false;
			// 
			// panel2
			// 
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->Controls->Add(this->InputboxMoveY);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(5, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(132, 23);
			this->panel2->TabIndex = 11;
			// 
			// InputboxMoveY
			// 
			this->InputboxMoveY->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InputboxMoveY->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->InputboxMoveY->Location = System::Drawing::Point(14, 0);
			this->InputboxMoveY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->InputboxMoveY->Name = L"InputboxMoveY";
			this->InputboxMoveY->Size = System::Drawing::Size(118, 20);
			this->InputboxMoveY->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Left;
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Y";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel4->Controls->Add(this->InputboxMoveX);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(5, 28);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(132, 23);
			this->panel4->TabIndex = 10;
			// 
			// InputboxMoveX
			// 
			this->InputboxMoveX->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InputboxMoveX->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->InputboxMoveX->Location = System::Drawing::Point(14, 0);
			this->InputboxMoveX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->InputboxMoveX->Name = L"InputboxMoveX";
			this->InputboxMoveX->Size = System::Drawing::Size(118, 20);
			this->InputboxMoveX->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Left;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 23);
			this->label3->TabIndex = 0;
			this->label3->Text = L"X";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonMove
			// 
			this->buttonMove->BackColor = System::Drawing::Color::Black;
			this->buttonMove->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttonMove->Location = System::Drawing::Point(5, 5);
			this->buttonMove->Name = L"buttonMove";
			this->buttonMove->Size = System::Drawing::Size(132, 23);
			this->buttonMove->TabIndex = 0;
			this->buttonMove->Text = L"Переместить";
			this->buttonMove->UseVisualStyleBackColor = false;
			this->buttonMove->Click += gcnew System::EventHandler(this, &MyForm::buttonMove_Click);
			// 
			// buttonDeleteTop
			// 
			this->buttonDeleteTop->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonDeleteTop->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonDeleteTop->Location = System::Drawing::Point(5, 87);
			this->buttonDeleteTop->Name = L"buttonDeleteTop";
			this->buttonDeleteTop->Size = System::Drawing::Size(142, 23);
			this->buttonDeleteTop->TabIndex = 5;
			this->buttonDeleteTop->Text = L"Удалить посл. эл";
			this->buttonDeleteTop->UseVisualStyleBackColor = false;
			this->buttonDeleteTop->Click += gcnew System::EventHandler(this, &MyForm::buttonDeleteTop_Click);
			// 
			// buttonDeleteAll
			// 
			this->buttonDeleteAll->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonDeleteAll->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonDeleteAll->Location = System::Drawing::Point(5, 110);
			this->buttonDeleteAll->Name = L"buttonDeleteAll";
			this->buttonDeleteAll->Size = System::Drawing::Size(142, 23);
			this->buttonDeleteAll->TabIndex = 4;
			this->buttonDeleteAll->Text = L"Удалить всё";
			this->buttonDeleteAll->UseVisualStyleBackColor = false;
			this->buttonDeleteAll->Click += gcnew System::EventHandler(this, &MyForm::buttonDeleteAll_Click);
			// 
			// buttonShowHide
			// 
			this->buttonShowHide->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonShowHide->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonShowHide->Location = System::Drawing::Point(5, 133);
			this->buttonShowHide->Name = L"buttonShowHide";
			this->buttonShowHide->Size = System::Drawing::Size(142, 28);
			this->buttonShowHide->TabIndex = 2;
			this->buttonShowHide->Text = L"Скрыть/Показать выбр.";
			this->buttonShowHide->UseVisualStyleBackColor = false;
			this->buttonShowHide->Click += gcnew System::EventHandler(this, &MyForm::buttonShowHide_Click);
			// 
			// buttonShowHideAll
			// 
			this->buttonShowHideAll->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonShowHideAll->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->buttonShowHideAll->Location = System::Drawing::Point(5, 161);
			this->buttonShowHideAll->Name = L"buttonShowHideAll";
			this->buttonShowHideAll->Size = System::Drawing::Size(142, 27);
			this->buttonShowHideAll->TabIndex = 3;
			this->buttonShowHideAll->Text = L"Скрыть/Показать всё";
			this->buttonShowHideAll->UseVisualStyleBackColor = false;
			this->buttonShowHideAll->Click += gcnew System::EventHandler(this, &MyForm::buttonShowHideAll_Click);
			// 
			// label2
			// 
			label2->AutoSize = true;
			label2->Dock = System::Windows::Forms::DockStyle::Top;
			label2->Location = System::Drawing::Point(3, 16);
			label2->Name = L"label2";
			label2->Padding = System::Windows::Forms::Padding(3);
			label2->Size = System::Drawing::Size(128, 19);
			label2->TabIndex = 1;
			label2->Text = L"Управление фигурами";
			// 
			// infoLabel
			// 
			this->infoLabel->AutoSize = true;
			this->infoLabel->Location = System::Drawing::Point(7, 16);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(90, 13);
			this->infoLabel->TabIndex = 0;
			this->infoLabel->Text = L"Окно рисования";
			// 
			// GroupBoxDrawingWindow
			// 
			this->GroupBoxDrawingWindow->AutoSize = true;
			this->GroupBoxDrawingWindow->Controls->Add(this->infoLabel);
			this->GroupBoxDrawingWindow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->GroupBoxDrawingWindow->Location = System::Drawing::Point(176, 0);
			this->GroupBoxDrawingWindow->Name = L"GroupBoxDrawingWindow";
			this->GroupBoxDrawingWindow->Size = System::Drawing::Size(585, 351);
			this->GroupBoxDrawingWindow->TabIndex = 3;
			this->GroupBoxDrawingWindow->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowText;
			this->ClientSize = System::Drawing::Size(761, 351);
			this->Controls->Add(groupBox5);
			this->Controls->Add(this->GroupBoxDrawingWindow);
			this->Controls->Add(groupBox1);
			this->ForeColor = System::Drawing::Color::Lime;
			this->MinimumSize = System::Drawing::Size(777, 390);
			this->Name = L"MyForm";
			this->Text = L"Резяков 22ВП1";
			this->SizeChanged += gcnew System::EventHandler(this, &MyForm::MyForm_SizeChanged);
			groupBox1->ResumeLayout(false);
			groupBox1->PerformLayout();
			groupBox3->ResumeLayout(false);
			groupBox3->PerformLayout();
			groupBox5->ResumeLayout(false);
			groupBox5->PerformLayout();
			groupBox6->ResumeLayout(false);
			groupBox6->PerformLayout();
			this->PanelMoveFigure->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputboxMoveY))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputboxMoveX))->EndInit();
			this->GroupBoxDrawingWindow->ResumeLayout(false);
			this->GroupBoxDrawingWindow->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: Void FigureType_SelectedIndexChanged(Object^ sender, EventArgs^ e) 
	{
		buttonCreateFigure->Visible = true;

		PanelFigureCreating->Controls->Clear();

		auto SelectedItem = safe_cast<ListBox^>(sender)->SelectedItem;

		if (!SelectedItem) return;

		String^ Selected = SelectedItem->ToString();

		if (Selected == "Ромб")
		{
			PanelFigureCreating->Controls->Add(CreateInputBox("Height"));
			PanelFigureCreating->Controls->Add(CreateInputBox("Width"));
		
			auto h = safe_cast<NumericUpDown^>(PanelFigureCreating->Controls->Find("InputboxHeight", true)[0]);
			auto w = safe_cast<NumericUpDown^>(PanelFigureCreating->Controls->Find("InputboxWidth", true)[0]);

			h->Minimum = 1; h->Value = 10;
			w->Minimum = 1; w->Value = 10;
		}
		
		if (Selected == "Полигон")
		{
			Panel^ vertexPanel = gcnew Windows::Forms::Panel();
			vertexPanel->Name = "VertexPanel";
			vertexPanel->Dock = System::Windows::Forms::DockStyle::Top;
			vertexPanel->Text = String::Empty;
			vertexPanel->Padding = System::Windows::Forms::Padding(0);
			vertexPanel->AutoSize = true;
			vertexPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;

			PanelFigureCreating->Controls->Add(vertexPanel);

			for (int i = 0; i < 4; i++)
			{
				vertexPanel->Controls->Add(CreateInputBox("VertexY" + (i + 1).ToString()));
				vertexPanel->Controls->Add(CreateInputBox("VertexX" + (i + 1).ToString()));
			}

			auto InputVertexCount = CreateInputBox("VertexCount");

			PanelFigureCreating->Controls->Add(InputVertexCount);


			auto inputbox = safe_cast<NumericUpDown^>(InputVertexCount->Controls->Find("InputboxVertexCount", true)[0]);

			inputbox->Value = 4;
			inputbox->Maximum = 10;
			inputbox->Minimum = 3;

			inputbox->ValueChanged += gcnew System::EventHandler(this, &MyForm::InputVertexCount_ValueChanged);		
		}

		if (Selected == "Сложная Фигура")
		{
			Panel^ vertexPanel = gcnew Windows::Forms::Panel();
			vertexPanel->Name = "VertexPanel";
			vertexPanel->Dock = System::Windows::Forms::DockStyle::Top;
			vertexPanel->Text = String::Empty;
			vertexPanel->Padding = System::Windows::Forms::Padding(0);
			vertexPanel->AutoSize = true;
			vertexPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;

			PanelFigureCreating->Controls->Add(vertexPanel);

			for (int i = 0; i < 4; i++)
			{
				vertexPanel->Controls->Add(CreateInputBox("VertexY" + (i + 1).ToString()));
				vertexPanel->Controls->Add(CreateInputBox("VertexX" + (i + 1).ToString()));
			}

			auto InputVertexCount = CreateInputBox("VertexCount");

			PanelFigureCreating->Controls->Add(InputVertexCount);


			auto inputbox = safe_cast<NumericUpDown^>(InputVertexCount->Controls->Find("InputboxVertexCount", true)[0]);

			inputbox->Value = 4;
			inputbox->Maximum = 10;
			inputbox->Minimum = 3;

			inputbox->ValueChanged += gcnew System::EventHandler(this, &MyForm::InputVertexCount_ValueChanged);

			PanelFigureCreating->Controls->Add(CreateInputBox("Height"));
			PanelFigureCreating->Controls->Add(CreateInputBox("Width"));
		
			auto h = safe_cast<NumericUpDown^>(PanelFigureCreating->Controls->Find("InputboxHeight", true)[0]);
			auto w = safe_cast<NumericUpDown^>(PanelFigureCreating->Controls->Find("InputboxWidth", true)[0]);

			h->Minimum = 1; h->Value = 10;
			w->Minimum = 1; w->Value = 10;
		}

		PanelFigureCreating->Controls->Add(CreateInputBox("Y"));

		PanelFigureCreating->Controls->Add(CreateInputBox("X"));
	}

	private: Void InputVertexCount_ValueChanged(Object^ sender, EventArgs^ e);
	
	private: Void buttonCreateFigure_Click(Object^ sender, EventArgs^ e);

	private: Void buttonDeleteTop_Click(Object^ sender, EventArgs^ e);

	private: Void buttonDeleteAll_Click(Object^ sender, EventArgs^ e);
	
	private: Void buttonShowHide_Click(Object^ sender, EventArgs^ e);

	private: Void buttonShowHideAll_Click(Object^ sender, EventArgs^ e);

	private: Void buttonMove_Click(Object^ sender, EventArgs^ e);
	
	private: Void MyForm_SizeChanged(Object^ sender, EventArgs^ e);

	};
}


