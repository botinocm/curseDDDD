#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
enum class Lvl {low, mid, high };
enum class Status {not_started=5, succes=1, failed=0, freezed=2, in_process=4 };


class Project
{

};
class Task
{
	string task; //���� ������
	Lvl priority{Lvl::mid}; //������� ���������� ������
	int begining_date; //���� ������ ���������� ������
	int finishing_date; //���� ��������� ���������� ������
	Status status{ Status::not_started }; //������ ���������� ������
	vector <Executor> executors; //����������� ������
public:
	Lvl getPriority()
	{
		return this->priority;
	}
	Status getStatus()
	{
		return this->status;
	}
	void setStatus(Status _status) {
		this->status = _status;
	}
};
class Executor
{
	string login="1";
public:
	Executor(string _login)
	{
		this->login = _login;
	}
	void setLogin(string _login)
	{
		this->login = _login;
	}
	string getLogin()
	{
		return this->login;
	}
};

int main()
{
	Status rofl = Status::failed;
	cout << static_cast <int> (rofl);
}