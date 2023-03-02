#pragma once

namespace Greenlight {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frontPage
	/// </summary>
	public ref class frontPage : public System::Windows::Forms::Form
	{
	public:
		frontPage(void)
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
		~frontPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"The Greenlight Organization";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(60, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 67);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Employees";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frontPage::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(60, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(256, 69);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Scheduling";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(60, 336);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(256, 69);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Sales History";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// frontPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"frontPage";
			this->Text = L"frontPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
