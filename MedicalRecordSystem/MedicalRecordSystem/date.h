#pragma once

#include "string"
using namespace std;

class date
{
	private:
		int day;
		int month;
		int year;
	public:
		date()
		{
			this->day = 0;
			this->month = 0;
			this->year = 0;
		}
		date(int year, int month, int day)
		{
			this->day = day;
			this->month = month;
			this->year = year;
		}
		~date()
		{


		}

		int getDay() { return day; }
		int getMonth() { return month; }
		int getYear() { return year; }
};