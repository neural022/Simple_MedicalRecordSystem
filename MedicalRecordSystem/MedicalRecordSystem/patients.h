#pragma once
#include "date.h"
#include "time.h"
#include "iostream"

class Person
{
	private:
		string name;
		date birthday;
		string address;
	public:
		Person()
		{
			this->name = "";
			this->birthday = date();
			this->address = "";
		}
		~Person()
		{

		}
		void setName(string name) { this->name = name; }
		void setBirthday(date birthday) { this->birthday = birthday; }
		void setAddress(string address) { this->address = address; }
		string getName() { return name; }
		string getAddress() { return address; }
		date getBirthday() { return birthday; }
		int getAge()
		{
			time_t t;
			struct tm *p;
			time(&t);
			p = localtime(&t);
			int now_year = 1900 + p->tm_year;
			return now_year - birthday.getYear();
	}
};

class Patient : public Person
{
	private:
		string pID;
		string diag;
		int numberof_bp;
		double *bp;
	public:
		Patient()
		{
			this->pID = "";
			this->diag = "";
			this->numberof_bp = 0;
			this->bp = NULL;
		}
		Patient(string pID, string diag, string name, date birthday, string address, int numberof_bp, double *bp)
		{
			this->pID = pID;
			this->diag = diag;
			this->numberof_bp = numberof_bp;
			this->bp = bp;
			setName(name);
			setBirthday(birthday);
			setAddress(address);
		}
		~Patient()
		{

		}
		string getPID() { return pID; }
		string getDiag() { return diag; }
		int getNumberofBP() { return numberof_bp; }
		double getBP(int i) { return *(bp+i); }
};