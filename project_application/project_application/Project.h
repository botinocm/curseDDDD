#pragma once
using namespace System;
using namespace System::Data::OleDb;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
namespace Project 
{
	enum class Lvl { low = 1, mid, high }; //������ ���������� ������ �� 1 �� 3
	enum class Status { not_started = 4, succes = 1, failed = 0, freezed = 2, in_process = 3 }; //��������� ������� ������


	public ref class User //����� � ������ ��� �����, �������� ��� ����������� � ����������� �������
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
	public ref class Task //������ ������� �� �����
	{
		String^ task; //�������� ������
		Lvl priority{ Lvl::mid }; //������� ���������� ������
		Status status{ Status::not_started }; //������ ���������� ������
		int beginning_date; //���� ������ ���������� ������
		int finishing_date; //���� ��������� ���������� ������
		String^ executor; //����������� ������


	public:
		Task() {};
		Task(String^ _task) { task = _task; executor = "username"; }
		String^ getTask() //�������� ������ � ��������� ������
		{
			return task;
		}
		void setTask(String^ _task) //���������� ������-�������� � �������� �������� ������
		{
			task = _task;
		}
		int getPriority() //�������� ������� ����������
		{
			return static_cast<int>(priority);;
		}
		void setPriority(Lvl _priority) //���������� ������� ����������; �������� - ������ �������������� ���� Lvl
		{
			priority = _priority;
		}
		void setPriority(int _priority) //���������� ������� ����������; �������� - ����� �����
		{
			if (_priority <= 0) { priority = Lvl::low; return; }
			if (_priority > 3) { priority = Lvl::high; return; }
			priority = static_cast<Lvl>(_priority);
		}
		int getBeginning_date() //�������� ���� ������ ����������
		{
			return beginning_date;
		}
		void setBeginning_date(int _date)  //���������� ���� ������ ����������
		{
			beginning_date = _date;
		}
		int getFinishind_date() //�������� ���� ��������� ����������
		{
			return finishing_date;
		}
		void setFinishind_date(int _date) //���������� �������� ���� ��������� ����������
		{
			finishing_date = _date;
		}
		int getStatus() //�������� ������ ������
		{
			return static_cast<int>(status);
		}
		void setStatus(Status _status) //���������� ������ ������; �������� - ������ �������������� ���� Status
		{
			status = _status;
		}
		void setStatus(int _status) //���������� ������ ������; �������� - ����� �����
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
