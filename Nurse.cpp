#include "nurse.h"

Nurse::Nurse(const char* n, unsigned int id, unsigned int years) : name(nullptr)
{
	setName(n);
	setId(id);
	setExperience(years);
}
Nurse::Nurse(const Nurse& other) :name(nullptr)
{
	setName(other.getName());
	setId(other.getWorkerID());
	setExperience(other.getExperience());
}
Nurse::~Nurse()
{
	delete[] name;
}

void Nurse::setName(const char* n)
{
	delete[] name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}
void Nurse::setId(unsigned int id)
{
	workerID = id;
}
void Nurse::setExperience(unsigned int exp)
{
	years_of_experience = exp;
}

char* Nurse::getName()   const
{
	return name;
}
unsigned int Nurse::getWorkerID()    const
{
	return workerID;
}
unsigned int Nurse::getExperience() const
{
	return years_of_experience;
}

void Nurse::print() const
{
	cout << "Nurse " << name<< ": "<<endl;
	cout << "\t\t"  << "ID: " << workerID << endl;
	cout << "\t\tYears of experience: " << years_of_experience << endl;
}