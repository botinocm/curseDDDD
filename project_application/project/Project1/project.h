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
	string task; //сама задача
	Lvl priority{Lvl::mid}; //уровень приоритета задачи
	int begining_date; //дата начала выполнения задачи
	int finishing_date; //дата окончания выполнения задачи
	Status status{ Status::not_started }; //статус выполнения задачи
	vector <Executor> executors{'1'}; //исполнители задачи
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
	string login;
public:
	Executor(string _login="1")
	{
		this->login = _login;
	}
	Executor() {};
	void setLogin(string _login)
	{
		this->login = _login;
	}
	string getLogin()
	{
		return this->login;
	}
};