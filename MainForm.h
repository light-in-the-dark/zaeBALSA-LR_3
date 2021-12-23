#pragma once

namespace LR3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ TabControl;
	protected:

	private: System::Windows::Forms::TabPage^ TabGraphics;
	private: System::Windows::Forms::TabPage^ TabAnimation;
	private: System::Windows::Forms::TabPage^ TabConverter;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ kgLabel;
	private: System::Windows::Forms::Label^ kgLabel2;
	private: System::Windows::Forms::Label^ lbLabel2;
	private: System::Windows::Forms::Button^ ConvertButton2;
	private: System::Windows::Forms::TextBox^ lbTextBox;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lbLabel;
	private: System::Windows::Forms::Label^ lbLabel1;
	private: System::Windows::Forms::Label^ kgLabel1;
	private: System::Windows::Forms::Button^ ConvertButton1;
	private: System::Windows::Forms::TextBox^ kgTextBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
































	protected:




	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->TabConverter = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->kgLabel = (gcnew System::Windows::Forms::Label());
			this->kgLabel2 = (gcnew System::Windows::Forms::Label());
			this->lbLabel2 = (gcnew System::Windows::Forms::Label());
			this->ConvertButton2 = (gcnew System::Windows::Forms::Button());
			this->lbTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbLabel = (gcnew System::Windows::Forms::Label());
			this->lbLabel1 = (gcnew System::Windows::Forms::Label());
			this->kgLabel1 = (gcnew System::Windows::Forms::Label());
			this->ConvertButton1 = (gcnew System::Windows::Forms::Button());
			this->kgTextBox = (gcnew System::Windows::Forms::TextBox());
			this->TabGraphics = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TabAnimation = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->TabControl->SuspendLayout();
			this->TabConverter->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->TabGraphics->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->TabAnimation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->TabConverter);
			this->TabControl->Controls->Add(this->TabGraphics);
			this->TabControl->Controls->Add(this->TabAnimation);
			this->TabControl->Location = System::Drawing::Point(0, 0);
			this->TabControl->Margin = System::Windows::Forms::Padding(0);
			this->TabControl->Multiline = true;
			this->TabControl->Name = L"TabControl";
			this->TabControl->Padding = System::Drawing::Point(0, 0);
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(390, 370);
			this->TabControl->TabIndex = 0;
			// 
			// TabConverter
			// 
			this->TabConverter->Controls->Add(this->groupBox2);
			this->TabConverter->Controls->Add(this->groupBox1);
			this->TabConverter->Location = System::Drawing::Point(4, 22);
			this->TabConverter->Name = L"TabConverter";
			this->TabConverter->Padding = System::Windows::Forms::Padding(3);
			this->TabConverter->Size = System::Drawing::Size(382, 344);
			this->TabConverter->TabIndex = 0;
			this->TabConverter->Text = L"Конвертер";
			this->TabConverter->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->AutoSize = true;
			this->groupBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox2->Controls->Add(this->kgLabel);
			this->groupBox2->Controls->Add(this->kgLabel2);
			this->groupBox2->Controls->Add(this->lbLabel2);
			this->groupBox2->Controls->Add(this->ConvertButton2);
			this->groupBox2->Controls->Add(this->lbTextBox);
			this->groupBox2->Location = System::Drawing::Point(18, 149);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(331, 121);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"lb -> kg";
			// 
			// kgLabel
			// 
			this->kgLabel->Location = System::Drawing::Point(83, 85);
			this->kgLabel->Name = L"kgLabel";
			this->kgLabel->Size = System::Drawing::Size(140, 20);
			this->kgLabel->TabIndex = 9;
			this->kgLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// kgLabel2
			// 
			this->kgLabel2->Location = System::Drawing::Point(229, 85);
			this->kgLabel2->Name = L"kgLabel2";
			this->kgLabel2->Size = System::Drawing::Size(19, 20);
			this->kgLabel2->TabIndex = 8;
			this->kgLabel2->Text = L"kg";
			this->kgLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbLabel2
			// 
			this->lbLabel2->AutoSize = true;
			this->lbLabel2->Location = System::Drawing::Point(229, 30);
			this->lbLabel2->Name = L"lbLabel2";
			this->lbLabel2->Size = System::Drawing::Size(15, 13);
			this->lbLabel2->TabIndex = 7;
			this->lbLabel2->Text = L"lb";
			this->lbLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ConvertButton2
			// 
			this->ConvertButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConvertButton2->Location = System::Drawing::Point(117, 53);
			this->ConvertButton2->Name = L"ConvertButton2";
			this->ConvertButton2->Size = System::Drawing::Size(75, 23);
			this->ConvertButton2->TabIndex = 6;
			this->ConvertButton2->Text = L"Convert";
			this->ConvertButton2->UseVisualStyleBackColor = true;
			this->ConvertButton2->Click += gcnew System::EventHandler(this, &MainForm::ConvertButton2_Click);
			// 
			// lbTextBox
			// 
			this->lbTextBox->Location = System::Drawing::Point(83, 27);
			this->lbTextBox->Name = L"lbTextBox";
			this->lbTextBox->Size = System::Drawing::Size(140, 20);
			this->lbTextBox->TabIndex = 5;
			this->lbTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::TextBox_KeyPress_NoNaN);
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox1->Controls->Add(this->lbLabel);
			this->groupBox1->Controls->Add(this->lbLabel1);
			this->groupBox1->Controls->Add(this->kgLabel1);
			this->groupBox1->Controls->Add(this->ConvertButton1);
			this->groupBox1->Controls->Add(this->kgTextBox);
			this->groupBox1->Location = System::Drawing::Point(18, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(331, 117);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"kg -> lb";
			// 
			// lbLabel
			// 
			this->lbLabel->Location = System::Drawing::Point(82, 81);
			this->lbLabel->Name = L"lbLabel";
			this->lbLabel->Size = System::Drawing::Size(140, 20);
			this->lbLabel->TabIndex = 4;
			this->lbLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lbLabel1
			// 
			this->lbLabel1->Location = System::Drawing::Point(228, 81);
			this->lbLabel1->Name = L"lbLabel1";
			this->lbLabel1->Size = System::Drawing::Size(19, 20);
			this->lbLabel1->TabIndex = 3;
			this->lbLabel1->Text = L"lb";
			this->lbLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// kgLabel1
			// 
			this->kgLabel1->AutoSize = true;
			this->kgLabel1->Location = System::Drawing::Point(228, 26);
			this->kgLabel1->Name = L"kgLabel1";
			this->kgLabel1->Size = System::Drawing::Size(19, 13);
			this->kgLabel1->TabIndex = 2;
			this->kgLabel1->Text = L"kg";
			this->kgLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ConvertButton1
			// 
			this->ConvertButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConvertButton1->Location = System::Drawing::Point(116, 49);
			this->ConvertButton1->Name = L"ConvertButton1";
			this->ConvertButton1->Size = System::Drawing::Size(75, 23);
			this->ConvertButton1->TabIndex = 1;
			this->ConvertButton1->Text = L"Convert";
			this->ConvertButton1->UseVisualStyleBackColor = true;
			this->ConvertButton1->Click += gcnew System::EventHandler(this, &MainForm::ConvertButton1_Click);
			// 
			// kgTextBox
			// 
			this->kgTextBox->Location = System::Drawing::Point(82, 23);
			this->kgTextBox->Name = L"kgTextBox";
			this->kgTextBox->Size = System::Drawing::Size(140, 20);
			this->kgTextBox->TabIndex = 0;
			this->kgTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::TextBox_KeyPress_NoNaN);
			// 
			// TabGraphics
			// 
			this->TabGraphics->Controls->Add(this->pictureBox1);
			this->TabGraphics->Location = System::Drawing::Point(4, 22);
			this->TabGraphics->Name = L"TabGraphics";
			this->TabGraphics->Padding = System::Windows::Forms::Padding(3);
			this->TabGraphics->Size = System::Drawing::Size(382, 344);
			this->TabGraphics->TabIndex = 1;
			this->TabGraphics->Text = L"Картинка";
			this->TabGraphics->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(360, 220);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// TabAnimation
			// 
			this->TabAnimation->Controls->Add(this->pictureBox2);
			this->TabAnimation->Location = System::Drawing::Point(4, 22);
			this->TabAnimation->Name = L"TabAnimation";
			this->TabAnimation->Padding = System::Windows::Forms::Padding(3);
			this->TabAnimation->Size = System::Drawing::Size(382, 344);
			this->TabAnimation->TabIndex = 2;
			this->TabAnimation->Text = L"Анимация";
			this->TabAnimation->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(8, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(360, 321);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->TabControl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Simple Winform";
			this->TabControl->ResumeLayout(false);
			this->TabConverter->ResumeLayout(false);
			this->TabConverter->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->TabGraphics->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->TabAnimation->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		// Конвертация из килограммов в фунты при нажатии
		System::Void ConvertButton1_Click(System::Object^ sender, System::EventArgs^ e);
		// Конвертация из фунтов в килограммы при нажатии
		System::Void ConvertButton2_Click(System::Object^ sender, System::EventArgs^ e);
		// Блокировка ввода нечисловых символов
		System::Void TextBox_KeyPress_NoNaN(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
};
}
