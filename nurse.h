#pragma once
#ifndef __NURSE_H
#define __NURSE_H

#include <string.h>
#include <iostream>
using namespace std;

class Nurse
{
private:
	char* name;
	unsigned int workerID;
	unsigned int years_of_experience;

public:
	Nurse(const char* n = nullptr, unsigned int id = 0, unsigned int years = 0); //C'tor
	Nurse(const Nurse& other); //copy C'tor
	~Nurse(); //D'tor

	void setName(const char* n);
	void setId(unsigned int id);
	void setExperience(unsigned int exp);

	char * getName()   const;
	unsigned int getWorkerID()    const;
	unsigned int getExperience() const;

	void print() const;
};
#endif // __NURSE_H