#pragma once
#include "string"
#include "Date.h"
#include "time.h"
using namespace std;

class Person
{
	private:
		string name;
		Date birthday;
		string address;
		int age;
	public:
		Person()
		{
			this->name = "";
			this->birthday = Date();
			this->address = "";
			this->age = 0;
		}
		Person(string name, Date birthday, string address, int age)
		{
			this->name = name;
			this->birthday = birthday;
			this->address = address;
			setAge(age);
		}
		~Person() { }
		int setAge(int age) 
		{
			time_t t;
			struct tm *p;
			time(&t);
			p = localtime(&t);
			this->age = 1900+p->tm_year; 
		}
		string getName() { return name; }
		string getAddress() { return address; }
		Date getBirthday() { return birthday; }
		int getAge() { return age; }
};