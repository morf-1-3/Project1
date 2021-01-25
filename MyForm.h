#pragma once
#include <cstddef>
#include <cmath>
#include <corecrt_math_defines.h>
#include<stdio.h>
#include <stdlib.h>
#include <Windows.h>


namespace Project1 {
	
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Pen^ pen1; //перо
		SolidBrush^ brush1;//

	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	public:
	private:











		   Bitmap^ Img1; //основная картинка, на которой рисуем
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	public: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	public: System::Windows::Forms::PictureBox^ picture;



	protected:





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Highlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(113, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"НАЛАШТУВАННЯ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(40, 291);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Кількість вершин(n) :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(233, 289);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(58, 22);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(45, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Кількісь вершин(m) :";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(73, 348);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Розмір вершини :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(77, 405);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Товщина ребер :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(88, 480);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Розмір графа :";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(234, 319);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(58, 22);
			this->numericUpDown2->TabIndex = 12;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(234, 405);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(57, 22);
			this->numericUpDown3->TabIndex = 13;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->groupBox1->Location = System::Drawing::Point(55, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(326, 193);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Різновид графа";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(31, 163);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(180, 28);
			this->radioButton7->TabIndex = 23;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Граф Петерсена";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(31, 136);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(264, 28);
			this->radioButton6->TabIndex = 22;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Повний дводольний граф";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(31, 109);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(145, 28);
			this->radioButton5->TabIndex = 21;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Граф-колесо";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(31, 82);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(127, 28);
			this->radioButton4->TabIndex = 20;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Граф-зірка";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(31, 55);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(124, 28);
			this->radioButton3->TabIndex = 19;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Граф-цикл";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(31, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(148, 28);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Повний граф";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(290, 468);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 44);
			this->button1->TabIndex = 15;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(236, 468);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(44, 44);
			this->button2->TabIndex = 16;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// picture
			// 
			this->picture->BackColor = System::Drawing::SystemColors::HighlightText;
			this->picture->Location = System::Drawing::Point(514, 16);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(600, 600);
			this->picture->TabIndex = 17;
			this->picture->TabStop = false;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(234, 349);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(56, 22);
			this->numericUpDown4->TabIndex = 19;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown4_ValueChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Location = System::Drawing::Point(643, 605);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(378, 29);
			this->textBox1->TabIndex = 22;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(514, 622);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 35);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Завантажити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_2);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Location = System::Drawing::Point(34, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(443, 645);
			this->groupBox2->TabIndex = 24;
			this->groupBox2->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(231, 373);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 30);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Вибрати";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(232, 431);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 30);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Вибрати";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(83, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Колір вершини :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(104, 435);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Колір ребер :";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Location = System::Drawing::Point(904, 616);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 17);
			this->textBox2->TabIndex = 25;
			// 
			// colorDialog1
			// 
			this->colorDialog1->Color = System::Drawing::Color::Red;
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			this->fileSystemWatcher1->Changed += gcnew System::IO::FileSystemEventHandler(this, &MyForm::fileSystemWatcher1_Changed);
			// 
			// colorDialog2
			// 
			this->colorDialog2->Color = System::Drawing::Color::Blue;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1161, 685);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->picture);
			this->Name = L"MyForm";
			this->Text = L"Побудова деяких типів неорієнтованих графів";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int n, m, wr, ww;
		int wiit = -40;
		void Complete1()
		{
			float angle = 0;
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			int x[400];
			int y[400];
			int R = 200 + wiit;
			for (int i = 0; i < n; i++)
			{
				x[i] = xc + R * cos(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату x
				y[i] = yc + R * sin(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату y				
				angle = angle + (float)360 / n ; //Увеличиваем угол на величину угла правильного многоугольника


			}

			Point p, p2;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
			
			Graphics^ gr = Graphics::FromImage(Img1);
			if (n > 2)
				for (int i = 0; i < n; i++)
				{


					if (i != n - 1)
					{
						p.X = x[i];
						p.Y = y[i];
						p2.X = x[i + 1];
						p2.Y = y[i + 1];
						gr->DrawLine(pen1, p, p2);
					}
					else {
						p.X = x[0];
						p.Y = y[0];
						p2.X = x[n - 1];
						p2.Y = y[n - 1];
						gr->DrawLine(pen1, p, p2);
					}
				}
			else
				gr->DrawEllipse(pen1, xc-R, yc-R, 2*R,2*R);
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, x[i] - (10 + 3 * ww) / 2, y[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			}

			gr->Save();
			delete gr;
			picture->Invalidate();
		}
		void Complete()
		{
			float angle = 0;
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			int x[400];
			int y[400];
			int R = 200 + wiit;

			for (int i = 0; i < n; i++)
			{
				x[i] = xc + R * cos(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату x
				y[i] = yc + R * sin(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату y				
				angle = angle +(float) 360 / n; //Увеличиваем угол на величину угла правильного многоугольника

			}

			Point p, p2;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
			
			Graphics^ gr = Graphics::FromImage(Img1);		
			for (int i = 0; i < n; i++)				
			{ 
				for (int j = i + 1; j < n; j++)
				{									
						p.X = x[i];
						p.Y = y[i];
						p2.X = x[j];
						p2.Y = y[j];
						gr->DrawLine(pen1, p, p2);			
				}
			}
			if(n==1)
				gr->FillEllipse(brush1, xc - (10 + 3 * ww) / 2, yc - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			else
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, x[i] - (10 + 3 * ww) / 2, y[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			}

				gr->Save();
				delete gr;
				picture->Invalidate();

			/*int R = picture->Height / 2 - 1;
			int x[100];
			int y[100];
			int n = 2;
			numericUpDown1->Value;
			int dx = 0;
			int dy = 0;
			int i;
			for (i = 0; i < n; i++)
			{
				x[i] = round(R * cos(2 * M_PI * i / n - M_PI / 2) + dx);
				y[i] = round(R * sin(2 * M_PI * i / n - M_PI / 2) + dy);
				printf("%d %d   ",x[i],y[i]);
			}

			for (i = 0; i < n; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
				//	ctx.moveTo(x[i], y[i]);
				//	ctx.lineTo(x[j], y[j]);
					Point p, p2;
					p.X = x[i];
					p.Y = y[i];
					p2.X = x[j];
					p2.Y = y[j];

					Img1 = gcnew Bitmap(picture->Width, picture->Height);
					picture->Image = Img1;
					pen1 = gcnew Pen(Color::Black);
					Graphics^ gr = Graphics::FromImage(Img1);
					gr->DrawLine(pen1, p, p2);
					gr->Save();
					delete gr;
					picture->Invalidate();
				}
			}*/
		}
		void Stars()
		{
			float angle = 0;
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			int x[400];
			int y[400];
			int R = 200+wiit;
			n = n - 1;
			for (int i = 0; i < n; i++)
			{
				x[i] = xc + R * cos(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату x
				y[i] = yc + R * sin(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату y				
				angle = angle + (float)360 / n; //Увеличиваем угол на величину угла правильного многоугольника

			}

			Point p, p2;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
		
			Graphics^ gr = Graphics::FromImage(Img1);
			p.X = xc;
			p.Y = yc;
			for (int i = 0; i < n; i++)
			{

					p2.X = x[i];
					p2.Y = y[i];
					gr->DrawLine(pen1, p, p2);
			}
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, x[i] - (10 + 3 * ww) / 2, y[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			}
			gr->FillEllipse(brush1, xc - (10 + 3 * ww) / 2, yc - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			gr->Save();
			delete gr;
			picture->Invalidate();
		}
		void Wheel()
		{
			float angle = 0;
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			int x[400];
			int y[400];
			int R = 200 + wiit;

			n = n - 1;
			for (int i = 0; i < n; i++)
			{
				x[i] = xc + R * cos((2 * M_PI * i) / n - M_PI/2); //Запоминаем каждую следующую координату x
				y[i] = yc + R * sin((2 * M_PI * i) / n - M_PI / 2); //Запоминаем каждую следующую координату y				
				//angle = angle + (float)360 / n; //Увеличиваем угол на величину угла правильного многоугольника

			}

			Point p, p2;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
			
			Graphics^ gr = Graphics::FromImage(Img1);
			p.X = xc;
			p.Y = yc;
			for (int i = 0; i < n; i++)
			{

				p2.X = x[i];
				p2.Y = y[i];
				gr->DrawLine(pen1, p, p2);
			}
			for (int i = 0; i < n; i++)
			{

				if (i != n - 1)
				{
					p.X = x[i];
					p.Y = y[i];
					p2.X = x[i + 1];
					p2.Y = y[i + 1];
					gr->DrawLine(pen1, p, p2);
				}
				else {
					p.X = x[0];
					p.Y = y[0];
					p2.X = x[n - 1];
					p2.Y = y[n - 1];
					gr->DrawLine(pen1, p, p2);
				}
			}
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, x[i] - (10 + 3 * ww) / 2, y[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			}
			gr->FillEllipse(brush1, xc - (10 + 3 * ww) / 2, yc - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			gr->Save();
			delete gr;
			picture->Invalidate();
		}
		void Wheel1()
		{
			float angle = 0;
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			int x[400];
			int y[400];
			int R = 200;

			n = n - 1;
			for (int i = 0; i < n; i++)
			{
				x[i] = xc + R * cos(angle * M_PI / 180); //Запоминаем каждую следующую координату x
				y[i] = yc + R * sin(angle * M_PI / 180); //Запоминаем каждую следующую координату y				
				angle = angle + (float)360 / n; //Увеличиваем угол на величину угла правильного многоугольника

			}

			Point p, p2;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;

			Graphics^ gr = Graphics::FromImage(Img1);
			p.X = xc;
			p.Y = yc;
			for (int i = 0; i < n; i++)
			{

				p2.X = x[i];
				p2.Y = y[i];
				gr->DrawLine(pen1, p, p2);
			}
			for (int i = 0; i < n; i++)
			{

				if (i != n - 1)
				{
					p.X = x[i];
					p.Y = y[i];
					p2.X = x[i + 1];
					p2.Y = y[i + 1];
					gr->DrawLine(pen1, p, p2);
				}
				else {
					p.X = x[0];
					p.Y = y[0];
					p2.X = x[n - 1];
					p2.Y = y[n - 1];
					gr->DrawLine(pen1, p, p2);
				}
			}
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, x[i] - (10 + 3 * ww) / 2, y[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			}
			gr->Save();
			delete gr;
			picture->Invalidate();
		}
		void Peterson()
		{
			float angle = 0;
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			//xc = xc - 10;
			int x[400];
			int y[400];
			int x1[6];
			int y1[6];
			int R;//= 150+wiit*2;
			int R1 = 200+wiit;
			R =  R1 / 2;
			n = 5;
			for (int i = 0; i < n; i++)
			{
				x[i] = xc + R * cos(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату x
				y[i] = yc + R * sin(angle * M_PI / 180 - M_PI / 2); //Запоминаем каждую следующую координату y	
				x1[i]= xc + R1 * cos(angle * M_PI / 180 - M_PI / 2);
				y1[i] = yc + R1 * sin(angle * M_PI / 180 - M_PI / 2);
				angle = angle + (float)360 / n; //Увеличиваем угол на величину угла правильного многоугольника

			}

			Point p, p2,p3,p4;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
		
			Graphics^ gr = Graphics::FromImage(Img1);

			for (int i = 0; i < n-2; i++)
			{
				p.X = x[i];
				p.Y = y[i];

				p2.X = x[i+2];
				p2.Y = y[i+2];
				gr->DrawLine(pen1, p, p2);
			}
			for (int i = 0; i < n - 3; i++)
			{
				p.X = x[i];
				p.Y = y[i];

				p2.X = x[i + 3];
				p2.Y = y[i + 3];
				gr->DrawLine(pen1, p, p2);
			}

			for (int i = 0; i < n-1; i++)
			{
				p3.X = x1[i];
				p3.Y = y1[i];

				p4.X = x1[i + 1];
				p4.Y = y1[i + 1];
				gr->DrawLine(pen1, p3, p4);
				p3.X = x1[i];
				p3.Y = y1[i];

				p4.X = x[i];
				p4.Y = y[i];
				gr->DrawLine(pen1, p3, p4);
			}
			p3.X = x1[n-1];
			p3.Y = y1[n-1];

			p4.X = x[n-1];
			p4.Y = y[n-1];
			gr->DrawLine(pen1, p3, p4);
			p3.X = x1[0];
			p3.Y = y1[0];

			p4.X = x1[n-1];
			p4.Y = y1[n-1];
			gr->DrawLine(pen1, p3, p4);
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, x[i] - (10 + 3 * ww) / 2, y[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
				gr->FillEllipse(brush1, x1[i] - (10 + 3 * ww) / 2, y1[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);
			}
			gr->Save();
			delete gr;
			picture->Invalidate();
		}
		void Dwa()
		{
			int xc, yc;
			yc = picture->Height / 2;
			xc = picture->Width / 2;
			int xl [400] ;
			int yl [400] ;
			int xr[400];
			int yr[400];
			int R = 185+wiit;
			int R1 = 40-wiit/2;
			int l = picture->Height - R1*2;
			int rl;
			
			 rl = picture->Height / 2 - (picture->Height / 2 - R1);
			 
			Point p, p2;

			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
			
			Graphics^ gr = Graphics::FromImage(Img1);
			int k;
			if (n == 1) {
				xl[0] = xc-R;
				yl[0] = yc;
			}
			if (n >= 2){
				 k = l / (n-1);
				for (int i = 0; i < n; i++)
				{
					xl[i] = xc - R;;
					yl[i] =  rl + k * i;
					

				}
			}
			if (m == 1) {
				xr[0] = xc+R;
				yr[0] = yc;
			}
			if (m >= 2) {
				 k = l / (m-1);
				for (int i = 0; i < m; i++)
				{
					xr[i] = xc + R;
					yr[i] = rl + k * i;
				
				}
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					p.X = xl[i];
					p.Y = yl[i];
					p2.X = xr[j];
					p2.Y = yr[j];
					gr->DrawLine(pen1, p, p2);
				}
			}
			for (int i = 0; i < n; i++)
			{
				gr->FillEllipse(brush1, xl[i] - (10 + 3 * ww) / 2, yl[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);

			}
			for (int i = 0; i < m; i++)
			{
				gr->FillEllipse(brush1, xr[i] - (10 + 3 * ww) / 2, yr[i] - (10 + 3 * ww) / 2, 10 + ww * 3, 10 + ww * 3);

			}
			gr->Save();
			delete gr;
			picture->Invalidate();
			







		}
		void Draw() {
			Point p, p2;


			Img1 = gcnew Bitmap(picture->Width, picture->Height);
			picture->Image = Img1;
			
			
			Graphics^ gr = Graphics::FromImage(Img1);
			gr->DrawEllipse(pen1, 300, 300, 30, 30);
			brush1 = gcnew SolidBrush(Color::Black);
			gr->FillEllipse(brush1, 30, 30, 1000, 1000);
	
			//gr->FillEllipse(pen1, new Rectangle(0, 0, 200, 200));
			//gr->FillEllipse(pen1, int 0,int 50,int 50,int 50);
			for (int i = -1; i < 2; i++)
			{
				for (int j = -1; i < 2; i++)
				{
					p2.X = 300;
					p2.Y = 300;
					p.X = 300 ;
					p.Y = 300 ;
					gr->DrawLine(pen1, p, p2);
				}
			}
		
			gr->Save();
			delete gr;
			picture->Invalidate();
		}

		void wow()
		{
			button3->Enabled = false;
			numericUpDown1->Minimum = 1;
			pen1 = gcnew Pen(Color::Blue);
			pen1->Color = colorDialog1->Color;
			button4->BackColor = colorDialog1->Color;
			n =  Convert::ToInt32(numericUpDown1->Value);
			m = Convert::ToInt32(numericUpDown2->Value);
			wr = Convert::ToInt32(numericUpDown3->Value);
			ww = Convert::ToInt32(numericUpDown4->Value);
			//gr->DrawEllipse(pen1, 300, 300, 1, 1);
			brush1 = gcnew SolidBrush(Color::Black);
			brush1->Color = colorDialog2->Color;
			button5->BackColor = colorDialog2->Color;
		/*	////////////////////////////////////////////////////////////////////////////color pen
			if (comboBox2->SelectedIndex == 0)
				pen1 = gcnew Pen(Color::Black);
			if(comboBox2->SelectedIndex == 1)
				pen1 = gcnew Pen(Color::Blue);
			if (comboBox2->SelectedIndex == 2)
				pen1 = gcnew Pen(Color::Green);
			if (comboBox2->SelectedIndex == 3)
				pen1 = gcnew Pen(Color::Red);
			if (comboBox2->SelectedIndex == 4)
				pen1 = gcnew Pen(Color::Magenta);
			if (comboBox2->SelectedIndex == 5)
				pen1 = gcnew Pen(Color::Brown);
			if (comboBox2->SelectedIndex == 6)
				pen1 = gcnew Pen(Color::Yellow);
			if (comboBox2->SelectedIndex == 7)
				pen1 = gcnew Pen(Color::Pink);
			if (comboBox2->SelectedIndex == 8)
				pen1 = gcnew Pen(Color::GreenYellow);
			if (comboBox2->SelectedIndex == 9)
				pen1 = gcnew Pen(Color::LightSlateGray);
			if (comboBox2->SelectedIndex == 10)
				pen1 = gcnew Pen(Color::YellowGreen);
			if (comboBox2->SelectedIndex == 11)
				pen1 = gcnew Pen(Color::Orange);
			if (comboBox2->SelectedIndex == 12)
				pen1 = gcnew Pen(Color::Gold);
			if (comboBox2->SelectedIndex == 13)
				pen1 = gcnew Pen(Color::Lime);
			if (comboBox2->SelectedIndex == 14)
				pen1 = gcnew Pen(Color::Olive);
			if (comboBox2->SelectedIndex == 15)
				pen1 = gcnew Pen(Color::DarkBlue);

			
			/////////////////////////////////////////////////////////////////////////end color pen
			//////////////////////////////////////////////////////////////////////////color brush

			if (comboBox1->SelectedIndex == 1)
				brush1 = gcnew SolidBrush(Color::Black);
			if (comboBox1->SelectedIndex == 1)
				brush1 = gcnew SolidBrush(Color::Blue);
			if (comboBox1->SelectedIndex == 2)
				brush1 = gcnew SolidBrush(Color::Green);
			if (comboBox1->SelectedIndex == 3)
				brush1 = gcnew SolidBrush(Color::Red);
			if (comboBox1->SelectedIndex == 4)
				brush1 = gcnew SolidBrush(Color::Magenta);
			if (comboBox1->SelectedIndex == 5)
				brush1 = gcnew SolidBrush(Color::Brown);
			if (comboBox1->SelectedIndex == 6)
				brush1 = gcnew SolidBrush(Color::Yellow);
			if (comboBox1->SelectedIndex == 7)
				brush1 = gcnew SolidBrush(Color::Pink);
			if (comboBox1->SelectedIndex == 8)
				brush1 = gcnew SolidBrush(Color::GreenYellow);
			if (comboBox1->SelectedIndex == 9)
				brush1 = gcnew SolidBrush(Color::LightSlateGray);
			if (comboBox1->SelectedIndex == 10)
				brush1 = gcnew SolidBrush(Color::YellowGreen);

			if (comboBox1->SelectedIndex == 11)
				brush1 = gcnew SolidBrush(Color::Orange);
			if (comboBox1->SelectedIndex == 12)
				brush1 = gcnew SolidBrush(Color::Gold);
			if (comboBox1->SelectedIndex == 13)
				brush1 = gcnew SolidBrush(Color::Lime);
			if (comboBox1->SelectedIndex == 14)
				brush1 = gcnew SolidBrush(Color::Olive);
			if (comboBox1->SelectedIndex == 15)
				brush1 = gcnew SolidBrush(Color::DarkBlue);

			

			//////////////////////////////////////////////////////////////////////////end color brush   */

		

			
		

			numericUpDown2->Enabled = false;
			numericUpDown1->Enabled = true;
			//wiit = Convert::ToInt32(numericUpDown3->Value);
			//wiit1 = Convert::ToInt32(numericUpDown3->Value);
			pen1->Width = wr;

			if (radioButton2->Checked == true)
			{
				Complete();
				textBox1->Text = "Повний граф P" ;
				textBox2->Left = 680;
				textBox2->Text = "" + n;
				button3->Enabled = true;
			}
			if (radioButton3->Checked == true)
			{
				Complete1();
				textBox1->Text = "Граф-цикл C";
				//POINT p;
				//p.x = 30;
				//p.y = 30;

				//textBox2->Location();
				//textBox2->Location = System::Drawing::Point(920, 614);
				//Controls->Add(this->textBox2);
				
				textBox2->Left = 672;
				textBox2->Text = "" + n;
				button3->Enabled = true;
			}
			if (radioButton4->Checked == true)
			{
				numericUpDown1->Minimum = 4;
				Stars();
				button3->Enabled = true;
				textBox2->Left = 673;
				textBox1->Text = "Граф-зірка S";
				textBox2->Text =""+n;
			}
			if (radioButton5->Checked == true)
			{
				numericUpDown1->Minimum = 4;
				Wheel();
				textBox1->Text = "Граф-колесо W";
				textBox2->Left = 682;
				textBox2->Text =""+(n+1);
				button3->Enabled = true;
			}
			if (radioButton6->Checked == true)
			{
				numericUpDown2->Enabled=true;
				Dwa();
				textBox1->Text = "Повний дводольний граф K";
				textBox2->Left = 728;
				textBox2->Text = "" + n + "," + m;
				button3->Enabled = true;
			}
			if (radioButton7->Checked == true)
			{	
				numericUpDown1->Enabled = false;
				Peterson();
				textBox1->Text = "Граф  Петерсена";
				textBox2->Left = 725;
				textBox2->Text = "";
				button3->Enabled = true;
			}
		

		}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		wow();


	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}



private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
 private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	 //point p1, p2;
	 wow();
	 //Pen^ pen1;
	 //Bitmap bit
	 //picture->Canvas->Pen->clBlack;//цвет линии/точки (или контура, если речь идет о закрашеной фигуре)
 //picture->Canvas->MoveTo(13, 20);//переместиться сюда (что бы, например, рисовать линию из этой точки).
	 //picture->Canvas->LineTo(69, 2);//линия от текущей точки до указанный координат
	 //picture->Canvas->Pixel(200, 200);
	 //picture->DrawToBitmap;

 }

private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
	  
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if( 200 + wiit <picture->Width / 2 - 25 )
		wiit+=5;
	wow();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (200 + wiit > 100)
		wiit=wiit-5;
	wow();
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_2(System::Object^ sender, System::EventArgs^ e) {
	//picture->Image =gcnew Bitmap(picture->Width, picture->Height);
	//picture->Image->Save("c://cc.jpg");
	//bmp.Save(sfdlg.FileName);
	//MessageBox.Show("Saved Succersfully.....");

/*	Bitmap^ bitmap1 = gcnew Bitmap(picture->Image);
		try {
		bitmap1->Save("My.jpg");
		}
	catch (Exception^ e) {
		MessageBox::Show(e->Message + "\nНе удалось сохранить файл");
		return;
	}*/
	saveFileDialog1->Title = "Сохранить картинку как...";
	saveFileDialog1->Filter = "Image Files(*.PNG)|*.PNG";
	//saveFileDialog1->ShowDialog();
	//System::Windows::Forms::DialogResult::OK;
	
	//if (saveFileDialog1->ValidateNames)
	if(saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		try
		{
			picture->Image->Save(saveFileDialog1->FileName);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message + "\nНе вдалось зберігти файл");
			return;
		}
	//	catch
	//	{
	//		MessageBox.Show("Не вдалося зберегти картинку", "Ошибка", MessageBoxButtons.OK, MassageBoxIcon.Error);
	//	}
	}
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	wow();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//ColorDialog dlgColor;
	//int iResult = dlgColor.ShowDialog;
	colorDialog1->ShowDialog();
	
	//button4->BackColor = colorDialog1->Color;
	//Color r = colorDialog1->Color;
	//pen1 = gcnew Pen(Color::r);
	//ColorDialog colors = new ColorDialog();
	pen1->Color = colorDialog1->Color;
	//pen1->Color = colorDialog1->Color;
	wow();
}
private: System::Void fileSystemWatcher1_Changed(System::Object^ sender, System::IO::FileSystemEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	colorDialog2->ShowDialog();
	wow();
}
};

}
