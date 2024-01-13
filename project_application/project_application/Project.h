#pragma once
using namespace System;
using namespace System::Data::OleDb;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
namespace Project 
{
	enum class Lvl { low = 1, mid, high }; //уровни приоритета задачи от 1 до 3
	enum class Status { not_started = 4, succes = 1, failed = 0, freezed = 2, in_process = 3 }; //различные статусы задачи


	public ref class User //логин и пароль для входа, юзернейм для отображения в создателеях проекта
	{
		String^ username;
		String^ pswd;
		String^ login;
	public:
		User() {}
		User(String^ _username, String^ _pswd, String^ _login) {
			username = _login;
			pswd = _pswd;
			login = _login;
		}
		void setData(String^ _username, String^ _pswd, String^ _login){
			username = _login;
			pswd = _pswd;
			login = _login;
		}
		String^ getName()
		{
			return username;
		}
		void setName(String^ _name)
		{
			username = _name;
		}
		String^ getPswd()
		{
			return pswd;
		}
		void setPswd(String^ _pswd)
		{
			pswd = _pswd;
		}
		String^ getLogin()
		{
			return login;
		}
		void setLogin(String^ _login)
		{
			login = _login;
		}
		
	};
	public ref class Task //проект состоит из тасок
	{
		String^ task; //описание задачи
		Lvl priority{ Lvl::mid }; //уровень приоритета задачи
		Status status{ Status::not_started }; //статус выполнения задачи
		int beginning_date; //дата начала выполнения задачи
		int finishing_date; //дата окончания выполнения задачи
		String^ executor; //исполнители задачи


	public:
		Task() {};
		Task(String^ _task) { task = _task; executor = "username"; }
		String^ getTask() //получить строку с описанием задачи
		{
			return task;
		}
		void setTask(String^ _task) //установить строку-аргумент в качестве описания задачи
		{
			task = _task;
		}
		int getPriority() //получить уровень приоритета
		{
			return static_cast<int>(priority);;
		}
		void setPriority(Lvl _priority) //установить уровень приоритета; аргумент - объект перечисляемого типа Lvl
		{
			priority = _priority;
		}
		void setPriority(int _priority) //установить уровень приоритета; аргумент - целое число
		{
			if (_priority <= 0) { priority = Lvl::low; return; }
			if (_priority > 3) { priority = Lvl::high; return; }
			priority = static_cast<Lvl>(_priority);
		}
		int getBeginning_date() //получить дату начала выполнения
		{
			return beginning_date;
		}
		void setBeginning_date(int _date)  //установить дату начала выполнения
		{
			beginning_date = _date;
		}
		int getFinishind_date() //получить дату окончания выполнения
		{
			return finishing_date;
		}
		void setFinishind_date(int _date) //устноваить получить дату окончания выполнения
		{
			finishing_date = _date;
		}
		int getStatus() //получить статус задачи
		{
			return static_cast<int>(status);
		}
		void setStatus(Status _status) //установить статус задачи; аргумент - объект перечисляемого типа Status
		{
			status = _status;
		}
		void setStatus(int _status) //установить статус задачи; аргумент - целое число
		{
			if (_status < 0) status = Status::in_process; return;
			if (_status > 4) status = Status::in_process; return;
			status = static_cast <Status> (_status);
		}
	};
	public ref class Project
	{
		String^ project_name;
		String^ owner;
		
	};
}
