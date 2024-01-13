#pragma once

namespace projectapplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для ForgotPassword
	/// </summary>
	public ref class ForgotPassword : public System::Windows::Forms::Form
	{
	public:
		ForgotPassword(void)
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
		~ForgotPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ invalidUsername_label;
	protected: String^ connectionString;
	protected: OleDbConnection^ dbConnection;
	protected: bool updated;
	private: System::Windows::Forms::Label^ invalidPswd_label;
	private: System::Windows::Forms::Label^ invalidLogin_label;
	private: System::Windows::Forms::Button^ Cancel_button;
	private: System::Windows::Forms::Button^ changePswd_button;

	private: System::Windows::Forms::Label^ newPswd_label;
	private: System::Windows::Forms::TextBox^ pswd_textBox;
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::TextBox^ login_textBox;
	private: System::Windows::Forms::Label^ usrnm_label;
	private: System::Windows::Forms::TextBox^ username_textBox;

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
			this->invalidUsername_label = (gcnew System::Windows::Forms::Label());
			this->invalidPswd_label = (gcnew System::Windows::Forms::Label());
			this->invalidLogin_label = (gcnew System::Windows::Forms::Label());
			this->Cancel_button = (gcnew System::Windows::Forms::Button());
			this->changePswd_button = (gcnew System::Windows::Forms::Button());
			this->newPswd_label = (gcnew System::Windows::Forms::Label());
			this->pswd_textBox = (gcnew System::Windows::Forms::TextBox());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->login_textBox = (gcnew System::Windows::Forms::TextBox());
			this->usrnm_label = (gcnew System::Windows::Forms::Label());
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->connectionString = connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ProjectsDb.mdb";
			this->dbConnection = gcnew OleDbConnection(connectionString);
			this->SuspendLayout();
			// 
			// invalidUsername_label
			// 
			this->invalidUsername_label->ForeColor = System::Drawing::Color::Red;
			this->invalidUsername_label->Location = System::Drawing::Point(422, 107);
			this->invalidUsername_label->Name = L"invalidUsername_label";
			this->invalidUsername_label->Size = System::Drawing::Size(424, 46);
			this->invalidUsername_label->TabIndex = 22;
			this->invalidUsername_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invalidPswd_label
			// 
			this->invalidPswd_label->ForeColor = System::Drawing::Color::Red;
			this->invalidPswd_label->Location = System::Drawing::Point(353, 343);
			this->invalidPswd_label->Name = L"invalidPswd_label";
			this->invalidPswd_label->Size = System::Drawing::Size(488, 48);
			this->invalidPswd_label->TabIndex = 21;
			this->invalidPswd_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invalidLogin_label
			// 
			this->invalidLogin_label->ForeColor = System::Drawing::Color::Red;
			this->invalidLogin_label->Location = System::Drawing::Point(353, 221);
			this->invalidLogin_label->Name = L"invalidLogin_label";
			this->invalidLogin_label->Size = System::Drawing::Size(493, 51);
			this->invalidLogin_label->TabIndex = 20;
			this->invalidLogin_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Cancel_button
			// 
			this->Cancel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cancel_button->Location = System::Drawing::Point(629, 406);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(242, 112);
			this->Cancel_button->TabIndex = 19;
			this->Cancel_button->Text = L"Отмена";
			this->Cancel_button->UseVisualStyleBackColor = true;
			this->Cancel_button->Click += gcnew System::EventHandler(this, &ForgotPassword::Cancel_button_Click);
			// 
			// changePswd_button
			// 
			this->changePswd_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->changePswd_button->Location = System::Drawing::Point(220, 406);
			this->changePswd_button->Name = L"changePswd_button";
			this->changePswd_button->Size = System::Drawing::Size(242, 112);
			this->changePswd_button->TabIndex = 18;
			this->changePswd_button->Text = L"Сменить Пароль";
			this->changePswd_button->UseVisualStyleBackColor = true;
			this->changePswd_button->Click += gcnew System::EventHandler(this, &ForgotPassword::changePswd_button_Click);
			// 
			// newPswd_label
			// 
			this->newPswd_label->AutoSize = true;
			this->newPswd_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->newPswd_label->Location = System::Drawing::Point(112, 278);
			this->newPswd_label->Name = L"newPswd_label";
			this->newPswd_label->Size = System::Drawing::Size(234, 37);
			this->newPswd_label->TabIndex = 17;
			this->newPswd_label->Text = L"Новый Пароль:";
			// 
			// pswd_textBox
			// 
			this->pswd_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pswd_textBox->Location = System::Drawing::Point(384, 275);
			this->pswd_textBox->Multiline = true;
			this->pswd_textBox->Name = L"pswd_textBox";
			this->pswd_textBox->Size = System::Drawing::Size(487, 54);
			this->pswd_textBox->TabIndex = 16;
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_label->Location = System::Drawing::Point(239, 159);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(107, 37);
			this->login_label->TabIndex = 15;
			this->login_label->Text = L"Логин:";
			// 
			// login_textBox
			// 
			this->login_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_textBox->Location = System::Drawing::Point(384, 156);
			this->login_textBox->Multiline = true;
			this->login_textBox->Name = L"login_textBox";
			this->login_textBox->Size = System::Drawing::Size(487, 54);
			this->login_textBox->TabIndex = 14;
			// 
			// usrnm_label
			// 
			this->usrnm_label->AutoSize = true;
			this->usrnm_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->usrnm_label->Location = System::Drawing::Point(51, 44);
			this->usrnm_label->Name = L"usrnm_label";
			this->usrnm_label->Size = System::Drawing::Size(295, 37);
			this->usrnm_label->TabIndex = 13;
			this->usrnm_label->Text = L"Имя Пользователя:";
			// 
			// username_textBox
			// 
			this->username_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->username_textBox->Location = System::Drawing::Point(384, 41);
			this->username_textBox->Multiline = true;
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(487, 54);
			this->username_textBox->TabIndex = 12;
			// 
			// ForgotPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(922, 559);
			this->Controls->Add(this->invalidUsername_label);
			this->Controls->Add(this->invalidPswd_label);
			this->Controls->Add(this->invalidLogin_label);
			this->Controls->Add(this->Cancel_button);
			this->Controls->Add(this->changePswd_button);
			this->Controls->Add(this->newPswd_label);
			this->Controls->Add(this->pswd_textBox);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->login_textBox);
			this->Controls->Add(this->usrnm_label);
			this->Controls->Add(this->username_textBox);
			this->Name = L"ForgotPassword";
			this->Text = L"   Восстановление пароля";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ForgotPassword::ForgotPassword_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();

	}
private: System::Void ForgotPassword_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	{
		if (!updated && (username_textBox->Text != "" || login_textBox->Text != "" || pswd_textBox->Text != "")) {
			if (MessageBox::Show("Выйти? Изменения не будут внесены", "Закрыть это окно", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes);
			else {
				e->Cancel = true;
			}
		}
	}
}
	private: System::Void changePswd_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->updated = false;
		invalidUsername_label->Text = "";
		invalidLogin_label->Text = "";
		invalidPswd_label->Text = "";
		if (username_textBox->Text != "" && login_textBox->Text != "" && pswd_textBox->Text != "") {
			this->dbConnection->Open();
			String^ query = "SELECT * FROM Users Where username='";
			query += username_textBox->Text->ToString(); query += "' AND login='"; query += login_textBox->Text->ToString(); query += "'";
			OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
			OleDbDataReader^ dbreader = dbComand->ExecuteReader();
			dbreader->Read();
			if (dbreader->HasRows == false) { invalidPswd_label->Text = "нет такого пользователя"; dbreader->Close(); this->dbConnection->Close(); return;
			}
			dbreader->Close();

			query = "INSERT INTO Users "/*(username, login, pswd) */ "VALUES('";
			query += username_textBox->Text->ToString(); query += "','";
			query += login_textBox->Text->ToString(); query += "','";
			query += pswd_textBox->Text->ToString(); query += "')";
			dbComand = gcnew OleDbCommand(query, dbConnection);

			this->updated = true;
			this->dbConnection->Close();
		}
		if (username_textBox->Text == "") invalidUsername_label->Text = "введите имя пользователя";
		if (login_textBox->Text == "") invalidLogin_label->Text = "введите логин";
		if (pswd_textBox->Text == "") invalidPswd_label->Text = "введите пароль";
}
};
}

