#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ ok;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ mriya;
	private: System::Windows::Forms::TextBox^ inp;
	private: System::Windows::Forms::TextBox^ out;
	private: System::Windows::Forms::Button^ button1;












	private: System::ComponentModel::IContainer^ components;
	protected:



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ok = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->mriya = (gcnew System::Windows::Forms::Label());
			this->inp = (gcnew System::Windows::Forms::TextBox());
			this->out = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// ok
			// 
			this->ok->Location = System::Drawing::Point(445, 156);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(375, 91);
			this->ok->TabIndex = 1;
			this->ok->Text = L"submit";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Visible = false;
			this->ok->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(445, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(375, 91);
			this->button2->TabIndex = 2;
			this->button2->Text = L"increase size";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 503);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 101);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Done";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// mriya
			// 
			this->mriya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mriya->Location = System::Drawing::Point(74, 65);
			this->mriya->Name = L"mriya";
			this->mriya->Size = System::Drawing::Size(141, 53);
			this->mriya->TabIndex = 4;
			this->mriya->Text = L"mriya";
			this->mriya->Click += gcnew System::EventHandler(this, &Form1::mriya_Click);
			// 
			// inp
			// 
			this->inp->Font = (gcnew System::Drawing::Font(L"Segoe Script", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->inp->Location = System::Drawing::Point(445, 52);
			this->inp->Name = L"inp";
			this->inp->Size = System::Drawing::Size(375, 85);
			this->inp->TabIndex = 5;
			this->inp->TextChanged += gcnew System::EventHandler(this, &Form1::inp_TextChanged);
			// 
			// out
			// 
			this->out->Font = (gcnew System::Drawing::Font(L"Segoe Script", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->out->Location = System::Drawing::Point(445, 262);
			this->out->Name = L"out";
			this->out->Size = System::Drawing::Size(375, 85);
			this->out->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(445, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(375, 100);
			this->button1->TabIndex = 7;
			this->button1->Text = L"colour";
			this->button1->UseCompatibleTextRendering = true;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1079, 651);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->out);
			this->Controls->Add(this->inp);
			this->Controls->Add(this->mriya);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ok);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ inp = this->inp->Text;
		this->out->Text = inp;
	}
private: System::Void inp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ inp = this->inp->Text;
	this->out->Text = inp;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::SeaGreen;
}
private: System::Void mriya_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ClientSize = System::Drawing::Size(1760, 960);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
