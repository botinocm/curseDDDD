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
	/// Сводка для AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ username_textBox;
	protected: String^ connectionString;
	protected: OleDbConnection^ dbConnection;
	protected: bool added;
	protected:

	private: System::Windows::Forms::Label^ usrnm_label;
	private: System::Windows::Forms::Label^ login_label;
	private: System::Windows::Forms::TextBox^ login_textBox;


	private: System::Windows::Forms::Label^ pswd_label;
	private: System::Windows::Forms::TextBox^ pswd_textBox;


	private: System::Windows::Forms::Button^ AddUser_button;
	private: System::Windows::Forms::Button^ Cancel_button;
	private: System::Windows::Forms::Label^ invalidLogin_label;
	private: System::Windows::Forms::Label^ invalidPswd_label;
	private: System::Windows::Forms::Label^ invalidUsername_label;

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
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->usrnm_label = (gcnew System::Windows::Forms::Label());
			this->login_label = (gcnew System::Windows::Forms::Label());
			this->login_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pswd_label = (gcnew System::Windows::Forms::Label());
			this->pswd_textBox = (gcnew System::Windows::Forms::TextBox());
			this->AddUser_button = (gcnew System::Windows::Forms::Button());
			this->Cancel_button = (gcnew System::Windows::Forms::Button());
			this->invalidLogin_label = (gcnew System::Windows::Forms::Label());
			this->invalidPswd_label = (gcnew System::Windows::Forms::Label());
			this->invalidUsername_label = (gcnew System::Windows::Forms::Label());
			this->connectionString = connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ProjectsDb.mdb";
			this->dbConnection = gcnew OleDbConnection(connectionString);
			this->SuspendLayout();
			// 
			// username_textBox
			// 
			this->username_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->username_textBox->Location = System::Drawing::Point(345, 59);
			this->username_textBox->Multiline = true;
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(487, 54);
			this->username_textBox->TabIndex = 0;
			// 
			// usrnm_label
			// 
			this->usrnm_label->AutoSize = true;
			this->usrnm_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->usrnm_label->Location = System::Drawing::Point(12, 62);
			this->usrnm_label->Name = L"usrnm_label";
			this->usrnm_label->Size = System::Drawing::Size(295, 37);
			this->usrnm_label->TabIndex = 1;
			this->usrnm_label->Text = L"Имя Пользователя:";
			// 
			// login_label
			// 
			this->login_label->AutoSize = true;
			this->login_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_label->Location = System::Drawing::Point(200, 177);
			this->login_label->Name = L"login_label";
			this->login_label->Size = System::Drawing::Size(107, 37);
			this->login_label->TabIndex = 3;
			this->login_label->Text = L"Логин:";
			// 
			// login_textBox
			// 
			this->login_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->login_textBox->Location = System::Drawing::Point(345, 174);
			this->login_textBox->Multiline = true;
			this->login_textBox->Name = L"login_textBox";
			this->login_textBox->Size = System::Drawing::Size(487, 54);
			this->login_textBox->TabIndex = 2;
			// 
			// pswd_label
			// 
			this->pswd_label->AutoSize = true;
			this->pswd_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pswd_label->Location = System::Drawing::Point(174, 296);
			this->pswd_label->Name = L"pswd_label";
			this->pswd_label->Size = System::Drawing::Size(133, 37);
			this->pswd_label->TabIndex = 5;
			this->pswd_label->Text = L"Пароль:";
			// 
			// pswd_textBox
			// 
			this->pswd_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pswd_textBox->Location = System::Drawing::Point(345, 293);
			this->pswd_textBox->Multiline = true;
			this->pswd_textBox->Name = L"pswd_textBox";
			this->pswd_textBox->Size = System::Drawing::Size(487, 54);
			this->pswd_textBox->TabIndex = 4;
			// 
			// AddUser_button
			// 
			this->AddUser_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->AddUser_button->Location = System::Drawing::Point(181, 424);
			this->AddUser_button->Name = L"AddUser_button";
			this->AddUser_button->Size = System::Drawing::Size(242, 112);
			this->AddUser_button->TabIndex = 6;
			this->AddUser_button->Text = L"Добавить Пользователя";
			this->AddUser_button->UseVisualStyleBackColor = true;
			this->AddUser_button->Click += gcnew System::EventHandler(this, &AddUser::AddUser_button_Click);
			// 
			// Cancel_button
			// 
			this->Cancel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cancel_button->Location = System::Drawing::Point(590, 424);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(242, 112);
			this->Cancel_button->TabIndex = 7;
			this->Cancel_button->Text = L"Отмена";
			this->Cancel_button->UseVisualStyleBackColor = true;
			this->Cancel_button->Click += gcnew System::EventHandler(this, &AddUser::Cancel_button_Click);
			// 
			// invalidLogin_label
			// 
			this->invalidLogin_label->ForeColor = System::Drawing::Color::Red;
			this->invalidLogin_label->Location = System::Drawing::Point(378, 231);
			this->invalidLogin_label->Name = L"invalidLogin_label";
			this->invalidLogin_label->Size = System::Drawing::Size(532, 59);
			this->invalidLogin_label->TabIndex = 8;
			this->invalidLogin_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invalidPswd_label
			// 
			this->invalidPswd_label->ForeColor = System::Drawing::Color::Red;
			this->invalidPswd_label->Location = System::Drawing::Point(383, 350);
			this->invalidPswd_label->Name = L"invalidPswd_label";
			this->invalidPswd_label->Size = System::Drawing::Size(413, 56);
			this->invalidPswd_label->TabIndex = 10;
			this->invalidPswd_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invalidUsername_label
			// 
			this->invalidUsername_label->ForeColor = System::Drawing::Color::Red;
			this->invalidUsername_label->Location = System::Drawing::Point(383, 125);
			this->invalidUsername_label->Name = L"invalidUsername_label";
			this->invalidUsername_label->Size = System::Drawing::Size(424, 46);
			this->invalidUsername_label->TabIndex = 11;
			this->invalidUsername_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(192, 192);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(922, 559);
			this->Controls->Add(this->invalidUsername_label);
			this->Controls->Add(this->invalidPswd_label);
			this->Controls->Add(this->invalidLogin_label);
			this->Controls->Add(this->Cancel_button);
			this->Controls->Add(this->AddUser_button);
			this->Controls->Add(this->pswd_label);
			this->Controls->Add(this->pswd_textBox);
			this->Controls->Add(this->login_label);
			this->Controls->Add(this->login_textBox);
			this->Controls->Add(this->usrnm_label);
			this->Controls->Add(this->username_textBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Name = L"AddUser";
			this->Text = L"   Добавление Пользователя";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddUser::AddUser_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
			Form::Close();
	}	

	
	
private: System::Void AddUser_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (!added && (username_textBox->Text != "" || login_textBox->Text != "" || pswd_textBox->Text != "")) {
		if (MessageBox::Show("Выйти? Изменения не будут внесены", "Закрыть это окно", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes);
		else {
			e->Cancel = true;
		}
	}

}
private: System::Void AddUser_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->added = false;
	invalidUsername_label->Text = "";
	invalidLogin_label->Text = "";
	invalidPswd_label->Text = "";
	if (username_textBox->Text != "" && login_textBox->Text != "" && pswd_textBox->Text != "") {
	
		this->dbConnection->Open();
		String^ query = "SELECT * FROM Users Where login='";
		query += login_textBox->Text->ToString(); query += "'";
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbreader = dbComand->ExecuteReader();
		dbreader->Read();
		if (dbreader->HasRows == true) { invalidLogin_label->Text = "этот логин уже занят";	dbreader->Close(); this->dbConnection->Close(); return; }
		dbreader->Close();

		/*string sql = string.Format("INSERT INTO Events(ID, EventName, Location, Notes) VALUES('{0}','{1}','{2}','{3}')", 6, "Some Event", "1015 Bell Rd Pierson FL 32180", "Some Note")*/
		
		query = "INSERT INTO Users (login,pswd,username) VALUES (' ";
		query += login_textBox->Text->ToString(); query += "' , '";
		query += pswd_textBox->Text->ToString(); query += "' , '";
		query += username_textBox->Text->ToString(); query += "')";
		dbComand = gcnew OleDbCommand(query, dbConnection);
		dbComand->ExecuteNonQuery();

		this->added = true;
		this->dbConnection->Close();
	}
	if (username_textBox->Text == "") invalidUsername_label->Text = "введите имя пользователя";
	if (login_textBox->Text == "") invalidLogin_label->Text = "введите логин";
	if (pswd_textBox->Text == "") invalidPswd_label->Text = "введите пароль";

}
};
}
