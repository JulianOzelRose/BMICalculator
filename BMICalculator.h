/*
	BMICalculator.h
	Julian Rose
	11-8-2022
*/

#pragma once
#include <iostream>

namespace BMICalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BMICalculator
	/// </summary>
	public ref class BMICalculator : public System::Windows::Forms::Form
	{
	public:
		BMICalculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ GetBMI()
		{
			double totalInches = (feet * 12) + inches;
			BMI = (703 * weight) / pow(totalInches, 2);

			BMI = (double)((int)BMI * 100) / 100;

			return BMI.ToString();
		}
		void SetFeet(double t_feet)
		{
			feet = t_feet;
		}
		void SetInches(double t_inches)
		{
			inches = t_inches;
		}
		void SetWeight(double t_weight)
		{
			weight = t_weight;
		}
		String^ GetCategory(double BMI)
		{
			if (BMI >= 32)
			{
				return "Extremely Obese";
			}

			if (BMI >= 30 && BMI < 32)
			{
				return "Obese";
			}

			if (BMI >= 25 && BMI < 29.9)
			{
				return "Overweight";
			}

			if (BMI >= 18 && BMI < 25)
			{
				return "Normal";
			}

			if (BMI < 18 && BMI != 0)
			{
				return "Underweight";
			}

			if (BMI == 0)
			{
				return "Indeterminate";
			}
		}
		void ResetValues()
		{
			BMI = 0;
			weight = 0;
			feet = 0;
			inches = 0;

			feetTextBox->Clear();
			inchesTextBox->Clear();
			weightTextBox->Clear();

			bmiTextBox->BackColor = System::Drawing::SystemColors::Control;
			bmiTextBox->Clear();

			categoryTextBox->BackColor = System::Drawing::SystemColors::Control;
			categoryTextBox->Clear();
		}
	private:
		double feet;
		double inches;
		double weight;
		double BMI;
	private: System::Windows::Forms::TextBox^ categoryTextBox;

	private: System::Windows::Forms::TextBox^ bmiTextBox;
	private: System::Windows::Forms::Button^ button1;

		   Double testVal = 0;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BMICalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ feetTextBox;
	private: System::Windows::Forms::TextBox^ inchesTextBox;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ calculateButton;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ weightTextBox;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->feetTextBox = (gcnew System::Windows::Forms::TextBox());
			this->inchesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->weightTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->categoryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bmiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// feetTextBox
			// 
			this->feetTextBox->AcceptsTab = true;
			this->feetTextBox->Location = System::Drawing::Point(69, 19);
			this->feetTextBox->MaxLength = 1;
			this->feetTextBox->Name = L"feetTextBox";
			this->feetTextBox->Size = System::Drawing::Size(90, 20);
			this->feetTextBox->TabIndex = 0;
			this->feetTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->feetTextBox->TextChanged += gcnew System::EventHandler(this, &BMICalculator::feetTextBox_TextChanged);
			// 
			// inchesTextBox
			// 
			this->inchesTextBox->AcceptsTab = true;
			this->inchesTextBox->Location = System::Drawing::Point(69, 77);
			this->inchesTextBox->MaxLength = 2;
			this->inchesTextBox->Name = L"inchesTextBox";
			this->inchesTextBox->Size = System::Drawing::Size(90, 20);
			this->inchesTextBox->TabIndex = 1;
			this->inchesTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->inchesTextBox->TextChanged += gcnew System::EventHandler(this, &BMICalculator::inchesTextBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Feet:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Inches:";
			this->label2->Click += gcnew System::EventHandler(this, &BMICalculator::label2_Click);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(68, 224);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(122, 37);
			this->calculateButton->TabIndex = 6;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &BMICalculator::calculateButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"BMI:";
			this->label4->Click += gcnew System::EventHandler(this, &BMICalculator::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(184, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Category:";
			this->label5->Click += gcnew System::EventHandler(this, &BMICalculator::label5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->feetTextBox);
			this->groupBox1->Controls->Add(this->inchesTextBox);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(178, 115);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Height";
			// 
			// weightTextBox
			// 
			this->weightTextBox->AcceptsTab = true;
			this->weightTextBox->Location = System::Drawing::Point(59, 19);
			this->weightTextBox->MaxLength = 3;
			this->weightTextBox->Name = L"weightTextBox";
			this->weightTextBox->Size = System::Drawing::Size(100, 20);
			this->weightTextBox->TabIndex = 2;
			this->weightTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->weightTextBox->TextChanged += gcnew System::EventHandler(this, &BMICalculator::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"LBS:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->weightTextBox);
			this->groupBox2->Location = System::Drawing::Point(197, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(178, 115);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Weight";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->categoryTextBox);
			this->groupBox3->Controls->Add(this->bmiTextBox);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(12, 145);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(363, 73);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Body Mass Index";
			// 
			// categoryTextBox
			// 
			this->categoryTextBox->AcceptsTab = true;
			this->categoryTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->categoryTextBox->Location = System::Drawing::Point(244, 33);
			this->categoryTextBox->MaxLength = 2;
			this->categoryTextBox->Name = L"categoryTextBox";
			this->categoryTextBox->ReadOnly = true;
			this->categoryTextBox->Size = System::Drawing::Size(90, 20);
			this->categoryTextBox->TabIndex = 11;
			this->categoryTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bmiTextBox
			// 
			this->bmiTextBox->AcceptsTab = true;
			this->bmiTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bmiTextBox->Location = System::Drawing::Point(69, 34);
			this->bmiTextBox->MaxLength = 2;
			this->bmiTextBox->Name = L"bmiTextBox";
			this->bmiTextBox->ReadOnly = true;
			this->bmiTextBox->Size = System::Drawing::Size(90, 20);
			this->bmiTextBox->TabIndex = 2;
			this->bmiTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->bmiTextBox->TextChanged += gcnew System::EventHandler(this, &BMICalculator::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 37);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BMICalculator::button1_Click);
			// 
			// BMICalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(387, 267);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"BMICalculator";
			this->Text = L"BMI Calculator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!Double::TryParse((weightTextBox->Text), testVal))
	{
		ResetValues();
	}
	else
	{
		SetWeight(System::Convert::ToDouble(weightTextBox->Text));
	}
}
private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	bmiTextBox->Clear();
	bmiTextBox->AppendText(GetBMI());

	categoryTextBox->Clear();
	categoryTextBox->AppendText(GetCategory(Convert::ToDouble(GetBMI())));

	if (GetCategory(BMI) == "Underweight")
	{
		categoryTextBox->BackColor = System::Drawing::Color::LightBlue;
		bmiTextBox->BackColor = System::Drawing::Color::LightBlue;
	}
	
	if (GetCategory(BMI) == "Normal")
	{
		categoryTextBox->BackColor = System::Drawing::Color::Green;
		bmiTextBox->BackColor = System::Drawing::Color::Green;
	}

	if (GetCategory(BMI) == "Overweight")
	{
		categoryTextBox->BackColor = System::Drawing::Color::Yellow;
		bmiTextBox->BackColor = System::Drawing::Color::Yellow;
	}

	if (GetCategory(BMI) == "Obese")
	{
		categoryTextBox->BackColor = System::Drawing::Color::Orange;
		bmiTextBox->BackColor = System::Drawing::Color::Orange;
	}

	if (GetCategory(BMI) == "Extremely Obese")
	{
		categoryTextBox->BackColor = System::Drawing::Color::Red;
		bmiTextBox->BackColor = System::Drawing::Color::Red;
	}
}
private: System::Void categoryRichTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void feetTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!Double::TryParse((feetTextBox->Text), testVal))
	{
		ResetValues();
		bmiTextBox->AppendText("Invalid");
		categoryTextBox->AppendText("Invalid");
	}
	else
	{
		SetFeet(System::Convert::ToDouble(feetTextBox->Text));
	}
}
private: System::Void inchesTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!Double::TryParse((inchesTextBox->Text), testVal))
	{
		ResetValues();
		bmiTextBox->AppendText("Invalid");
		categoryTextBox->AppendText("Invalid");
	}
	else
	{
		SetInches(System::Convert::ToDouble(inchesTextBox->Text));
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetValues();
}
};
}
