#pragma once
#ifndef __DATE_H
#define __DATE_H

#include <string.h>
#include <iostream>
using namespace std;

class Date
{
private:
	unsigned int day;
	unsigned int month;
	unsigned int year;
	bool isCorrect;

public:
	Date();
	Date(unsigned int d, unsigned int m, unsigned int y); //No need for default init constructor - we need to make it dynamic - Keren showed it in the class
	//~Date();

	//Setters - return true if value changed, false otherwise
	bool setDay(unsigned int d);
	bool setMonth(unsigned int m);
	bool setYear(unsigned int y);

	//Getters
	unsigned int getDay()   const;
	unsigned int getMonth() const;
	unsigned int getYear() const;
	
	void printDate() const;
};

#endif // __DATE_H