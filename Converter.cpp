#include "libraries.h"

Void LR3::MainForm::ConvertButton1_Click(Object^ sender, EventArgs^ e)
{
	try 
	{
		const Double toLb = 2.20462; // константа для перевода из килограммов в фунты

		Double kgWeight = Convert::ToDouble(MainForm::kgTextBox->Text); // Вес в килограммах

		if (kgWeight < 0.0)
			throw -1;

		MainForm::lbLabel->Text = (kgWeight * toLb).ToString();
	}
	catch (FormatException^)
	{
		MessageBox::Show("Некорректные данные в поле ввода", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		MainForm::kgTextBox->Text = "";
	}
	catch (int)
	{
		MessageBox::Show("Невозможно обработать отрицательное число", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		MainForm::kgTextBox->Text = "";
	}
}

Void LR3::MainForm::ConvertButton2_Click(Object^ sender, EventArgs^ e)
{
	try
	{
		const Double toKg = 2.20462; // константа для перевода из фунтов в килограммы

		Double lbWeight = Convert::ToDouble(MainForm::lbTextBox->Text); // Вес в килограммах

		if (lbWeight < 0.0)
			throw -1;

		MainForm::kgLabel->Text = (lbWeight / toKg).ToString();
	}
	catch (FormatException^)
	{
		MessageBox::Show("Некорректные данные в поле ввода", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		MainForm::lbTextBox->Text = "";
	}
	catch (int)
	{
		MessageBox::Show("Невозможно обработать отрицательное число", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		MainForm::lbTextBox->Text = "";
	}
}

Void LR3::MainForm::TextBox_KeyPress_NoNaN(Object^ sender, KeyPressEventArgs^ e)
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != '\b') && (e->KeyChar != 44))
		e->Handled = true;
}

