#pragma once
#include <msclr/marshal_cppstd.h>
#include "Matrix.h"

namespace ooplab11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ readToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ writeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fillToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ setValueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::Button^ button6;


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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->readToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->writeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fillToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->setValueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(570, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 427);
			this->panel1->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button6->Location = System::Drawing::Point(204, 364);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 45);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Write ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(208, 261);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(85, 22);
			this->textBox5->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(83, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"New value (0 or 1) :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(192, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Columns :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Rows :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(223, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"j =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"i = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(141, 216);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Value is :";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button5->Location = System::Drawing::Point(204, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 45);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Set value";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(249, 161);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(62, 161);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(85, 22);
			this->textBox3->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button4->Location = System::Drawing::Point(41, 313);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 45);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Get value";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button3->Location = System::Drawing::Point(43, 364);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 45);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(263, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(85, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button2->Location = System::Drawing::Point(204, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Fill";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(41, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Read";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel1->Location = System::Drawing::Point(101, 65);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(376, 375);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->tableToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(950, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->readToolStripMenuItem,
					this->writeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// readToolStripMenuItem
			// 
			this->readToolStripMenuItem->Name = L"readToolStripMenuItem";
			this->readToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+R";
			this->readToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->readToolStripMenuItem->Text = L"Read";
			this->readToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readToolStripMenuItem_Click);
			// 
			// writeToolStripMenuItem
			// 
			this->writeToolStripMenuItem->Name = L"writeToolStripMenuItem";
			this->writeToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+W";
			this->writeToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->writeToolStripMenuItem->Text = L"Write";
			this->writeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::writeToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeyDisplayString = L"Alt+F4";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// tableToolStripMenuItem
			// 
			this->tableToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fillToolStripMenuItem,
					this->getValueToolStripMenuItem, this->setValueToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->tableToolStripMenuItem->Name = L"tableToolStripMenuItem";
			this->tableToolStripMenuItem->Size = System::Drawing::Size(58, 24);
			this->tableToolStripMenuItem->Text = L"Table";
			// 
			// fillToolStripMenuItem
			// 
			this->fillToolStripMenuItem->Name = L"fillToolStripMenuItem";
			this->fillToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->fillToolStripMenuItem->Text = L"Fill";
			this->fillToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fillToolStripMenuItem_Click);
			// 
			// getValueToolStripMenuItem
			// 
			this->getValueToolStripMenuItem->Name = L"getValueToolStripMenuItem";
			this->getValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->getValueToolStripMenuItem->Text = L"Get value";
			this->getValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::getValueToolStripMenuItem_Click);
			// 
			// setValueToolStripMenuItem
			// 
			this->setValueToolStripMenuItem->Name = L"setValueToolStripMenuItem";
			this->setValueToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->setValueToolStripMenuItem->Text = L"Set value";
			this->setValueToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::setValueToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(154, 26);
			this->clearToolStripMenuItem->Text = L"Clear";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(55, 24);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(950, 479);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Matrix matrix;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog openFileDialog;{
			String^ Filename = "";

			if (openFileDialog.ShowDialog() == Windows::Forms::DialogResult::OK){
				Filename = openFileDialog.FileName;
			}
			std::pair<int, int> size = matrix.ReadFromFile(Filename);
			matrix.TableFill(tableLayoutPanel1, size);
		}
		tableLayoutPanel1->Show();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();
		
		std::pair<int, int> size;
		size.first = Int32::Parse(textBox1->Text);
		size.second = Int32::Parse(textBox2->Text);


		matrix.DefaultMatrixFill(size);
		matrix.TableFill(tableLayoutPanel1, size);
		tableLayoutPanel1->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();
		matrix.SetValuesToZero();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int row = Int32::Parse(textBox3->Text);
		int column = Int32::Parse(textBox4->Text);

		int value;
		if (row > matrix.GetRows() || column > matrix.GetColumns()) {
			throw std::invalid_argument("Error! Index is out if range");
		}
		else {
			value = matrix.GetValue(row, column);
		}

		AddNewLabelToForm(this, value.ToString(), 580, 204);
	}

	public: void AddNewLabelToForm(Form^ form, String^ labelText, int x, int y) {
		Label^ label = gcnew Label();

		label->Text = labelText;
		label->Location = System::Drawing::Point(x, y);
		label->BringToFront();
		form->Controls->Add(label);
		label->BringToFront();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int row = Int32::Parse(textBox3->Text);
		int column = Int32::Parse(textBox4->Text);
		int value = Int32::Parse(textBox5->Text);

		matrix.SetNewValue(tableLayoutPanel1, row, column, value);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog openFileDialog;
		{
			String^ Filename = "";
			if (openFileDialog.ShowDialog() == Windows::Forms::DialogResult::OK){
				Filename = openFileDialog.FileName;
			}
			matrix.WriteToFile(Filename);
		}
	}

	private: System::Void readToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog openFileDialog;
		{

			String^ Filename = "";
			if (openFileDialog.ShowDialog() == Windows::Forms::DialogResult::OK)
			{
				Filename = openFileDialog.FileName;
			}
			std::pair<int, int> size = matrix.ReadFromFile(Filename);

			matrix.TableFill(tableLayoutPanel1, size);
		}
		tableLayoutPanel1->Show();
	}

	private: System::Void writeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog openFileDialog;
		{
			String^ Filename = "";
			if (openFileDialog.ShowDialog() == Windows::Forms::DialogResult::OK){
				Filename = openFileDialog.FileName;
			}
			matrix.WriteToFile(Filename);
		}
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void getValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int row = Int32::Parse(textBox3->Text);
		int column = Int32::Parse(textBox4->Text);

		int value;
		if (row > matrix.GetRows() || column > matrix.GetColumns()) {
			throw std::invalid_argument("Error! Index is out if range");
		}
		else {
			value = matrix.GetValue(row, column);
		}

		AddNewLabelToForm(this, value.ToString(), 600, 185);
	}

	private: System::Void setValueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int row = Int32::Parse(textBox3->Text);
		int column = Int32::Parse(textBox4->Text);
		int value = Int32::Parse(textBox5->Text);

		matrix.SetNewValue(tableLayoutPanel1, row, column, value);
	}

	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();
		matrix.SetValuesToZero();
	}

	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ url = "https://learn.microsoft.com/en-us/dotnet/desktop/winforms/getting-started-with-windows-forms?view=netframeworkdesktop-4.8";

		System::Diagnostics::Process::Start("chrome.exe", url);
	}

	private: System::Void fillToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tableLayoutPanel1->Controls->Clear();

		std::pair<int, int> size;
		size.first = Int32::Parse(textBox1->Text);
		size.second = Int32::Parse(textBox2->Text);

		matrix.DefaultMatrixFill(size);
		matrix.TableFill(tableLayoutPanel1, size);
		tableLayoutPanel1->Show();
	}
};
}
