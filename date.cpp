#include "date.h"

Date::Date() :day(0), month(0), year(0)
{

}

Date::Date(unsigned int d, unsigned int m, unsigned int y) //No need for default init constructor - we need to make it dynamic - Keren showed it in the class
{
	if (!setDay(d) || !setMonth(m) || !setYear(y))
		exit(1);
}

//Setters
bool Date::setDay(unsigned int d)
{
	if (d < 1 || d>31)
	{
		cout << "Day is invalid" << endl;
		return false;
	}
	else
		day = d;
	return true;
}

bool Date::setMonth(unsigned int m)
{
	if (m < 1 || m>12)
	{
		cout << "Month is invalid" << endl;
		return false;
	}
	else
		month = m;
	return true;
}

bool Date::setYear(unsigned int y)
{
	if (y < 1 || y>2019)
	{
		cout << "Year is invalid" << endl;
		return false;
	}
	else
		year = y;
	return true;
}

//Getters
unsigned int Date::getDay()   const
{
	return day;
}

unsigned int Date::getMonth() const
{
	return month;
}

unsigned int Date::getYear() const
{
	return year;
}

void Date::printDate() const
{
	if (isCorrect)
		cout << day << "/" << month << "/" << year << endl;
	else
		cout << "Date is not set correctly" << endl;
}

