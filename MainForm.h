#pragma once

namespace LR3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ClickMe;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ClickMe = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ClickMe
			// 
			this->ClickMe->Location = System::Drawing::Point(100, 100);
			this->ClickMe->Name = L"ClickMe";
			this->ClickMe->Size = System::Drawing::Size(75, 23);
			this->ClickMe->TabIndex = 0;
			this->ClickMe->Text = L"Click Me!";
			this->ClickMe->UseVisualStyleBackColor = true;
			this->ClickMe->Click += gcnew System::EventHandler(this, &MainForm::ClickMe_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->ClickMe);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ClickMe_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(" нопка была нажата", "“естовое окно", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	};
}
