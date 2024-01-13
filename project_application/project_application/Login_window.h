#pragma once
#include "Project.h"
#include "AddUser.h"
#include "ForgotPassword.h"
namespace projectapplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	protected: Project::User user;
	private: System::Windows::Forms::TextBox^ login_textBox;
	private: System::Windows::Forms::TextBox^ pswd_textBox;
	private: System::Windows::Forms::Label^ pswd_Label;
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::Button^ login_Button;
	private: System::Windows::Forms::Label^ invalidLogin_label;
	private: System::Data::OleDb::OleDbCommand^ oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^ oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^ oleDbDataAdapter1;
	private: System::Windows::Forms::Button^ newUser_button;
	private: System::Windows::Forms::Label^ forgotPswd_label;
	private: System::Windows::Forms::Label^ invalidPswd_label;















	private: System::ComponentModel::IContainer^ components;



	protected:

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
			this->login_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pswd_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pswd_Label = (gcnew System::Windows::Forms::Label());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->login_Button = (gcnew System::Windows::Forms::Button());
			this->invalidLogin_label = (gcnew System::Windows::Forms::Label());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->newUser_button = (gcnew System::Windows::Forms::Button());
			this->forgotPswd_label = (gcnew System::Windows::Forms::Label());
			this->invalidPswd_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// login_textBox
			// 
			this->login_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_textBox->Location = System::Drawing::Point(70, 161);
			this->login_textBox->Multiline = true;
			this->login_textBox->Name = L"login_textBox";
			this->login_textBox->Size = System::Drawing::Size(579, 48);
			this->login_textBox->TabIndex = 0;
			this->login_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::login_textBox_TextChanged);
			// 
			// pswd_textBox
			// 
			this->pswd_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pswd_textBox->Location = System::Drawing::Point(70, 391);
			this->pswd_textBox->Multiline = true;
			this->pswd_textBox->Name = L"pswd_textBox";
			this->pswd_textBox->Size = System::Drawing::Size(579, 41);
			this->pswd_textBox->TabIndex = 2;
			this->pswd_textBox->UseSystemPasswordChar = true;
			this->pswd_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::pswd_textBox_TextChanged);
			// 
			// pswd_Label
			// 
			this->pswd_Label->AutoSize = true;
			this->pswd_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pswd_Label->Location = System::Drawing::Point(80, 322);
			this->pswd_Label->Name = L"pswd_Label";
			this->pswd_Label->Size = System::Drawing::Size(152, 42);
			this->pswd_Label->TabIndex = 3;
			this->pswd_Label->Text = L"пароль:";
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_label->Location = System::Drawing::Point(80, 106);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(126, 42);
			this->login_label->TabIndex = 4;
			this->login_label->Text = L"логин:";
			// 
			// login_Button
			// 
			this->login_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_Button->Location = System::Drawing::Point(70, 515);
			this->login_Button->Name = L"login_Button";
			this->login_Button->Size = System::Drawing::Size(235, 131);
			this->login_Button->TabIndex = 5;
			this->login_Button->Text = L"Вход";
			this->login_Button->UseVisualStyleBackColor = true;
			this->login_Button->Click += gcnew System::EventHandler(this, &MyForm::login_Button_Click);
			// 
			// invalidLogin_label
			// 
			this->invalidLogin_label->ForeColor = System::Drawing::Color::Red;
			this->invalidLogin_label->Location = System::Drawing::Point(161, 223);
			this->invalidLogin_label->Name = L"invalidLogin_label";
			this->invalidLogin_label->Size = System::Drawing::Size(380, 28);
			this->invalidLogin_label->TabIndex = 6;
			this->invalidLogin_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// newUser_button
			// 
			this->newUser_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newUser_button->Location = System::Drawing::Point(384, 515);
			this->newUser_button->Name = L"newUser_button";
			this->newUser_button->Size = System::Drawing::Size(265, 131);
			this->newUser_button->TabIndex = 7;
			this->newUser_button->Text = L"Добавить Пользователя";
			this->newUser_button->UseVisualStyleBackColor = true;
			this->newUser_button->Click += gcnew System::EventHandler(this, &MyForm::newUser_button_Click);
			// 
			// forgotPswd_label
			// 
			this->forgotPswd_label->AutoSize = true;
			this->forgotPswd_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->forgotPswd_label->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->forgotPswd_label->Location = System::Drawing::Point(102, 659);
			this->forgotPswd_label->Name = L"forgotPswd_label";
			this->forgotPswd_label->Size = System::Drawing::Size(172, 25);
			this->forgotPswd_label->TabIndex = 8;
			this->forgotPswd_label->Text = L"Я забыл пароль";
			this->forgotPswd_label->Click += gcnew System::EventHandler(this, &MyForm::forgotPswd_label_Click);
			// 
			// invalidPswd_label
			// 
			this->invalidPswd_label->ForeColor = System::Drawing::Color::Red;
			this->invalidPswd_label->Location = System::Drawing::Point(161, 445);
			this->invalidPswd_label->Name = L"invalidPswd_label";
			this->invalidPswd_label->Size = System::Drawing::Size(380, 28);
			this->invalidPswd_label->TabIndex = 9;
			this->invalidPswd_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 732);
			this->Controls->Add(this->invalidPswd_label);
			this->Controls->Add(this->forgotPswd_label);
			this->Controls->Add(this->newUser_button);
			this->Controls->Add(this->invalidLogin_label);
			this->Controls->Add(this->login_Button);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->pswd_Label);
			this->Controls->Add(this->pswd_textBox);
			this->Controls->Add(this->login_textBox);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){}
	private: System::Void login_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		invalidLogin_label->Text = "";
	}
	private: System::Void pswd_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		invalidPswd_label->Text = "";
	}
	private: System::Void login_Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		invalidLogin_label->Text = "";
		invalidPswd_label->Text = "";
		if (login_textBox->Text != "" && pswd_textBox->Text!="") {
			String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ProjectsDb.mdb";
			OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
			dbConnection->Open();
			String^ query = "SELECT * FROM Users Where login='";
			query += login_textBox->Text->ToString(); query += "'";
			OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbreader = dbComand->ExecuteReader();
			dbreader->Read();
			if (dbreader->HasRows == false) { invalidLogin_label->Text = "нет такого пользователя"; return; }
			if (dbreader["pswd"]->ToString() != pswd_textBox->Text) { invalidPswd_label->Text = "неверный пароль"; return; }
			user.setData(dbreader["username"]->ToString(), dbreader["pswd"]->ToString(), dbreader["login"]->ToString());
			
			
			
		}
		if (login_textBox->Text == "") invalidLogin_label->Text = "введите логин";
		if (pswd_textBox->Text == "") invalidPswd_label->Text = "введите пароль";
		
	}

	private: System::Void newUser_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AddUser^ addUserForm = gcnew AddUser;
		addUserForm->ShowDialog();
	}
		   
	private: System::Void forgotPswd_label_Click(System::Object^ sender, System::EventArgs^ e) {
		ForgotPassword^ changeForm = gcnew ForgotPassword;
		changeForm->ShowDialog();
	}
};

}