#include "doctor.h"
#include <string.h>
#include <iostream>

Doctor::Doctor(const char* n, unsigned int id, const char* spec) :name(nullptr), workerID(id), specialization(nullptr)
{
	setName(n);
	setSpecialization(spec);
}
Doctor::Doctor(const Doctor& other) : name(nullptr), workerID(0), specialization(nullptr)
{
	setName(other.getName());
	setId(other.getWorkerID());
	setSpecialization(other.getSpecialization());
}
Doctor::~Doctor()
{
	delete[] name;
	delete[] specialization;
}

void Doctor::setName(const char n[])
{
	delete[] name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}
void Doctor::setId(unsigned int id)
{
	workerID = id;
}
void Doctor::setSpecialization(const char spec[])
{
	delete[] specialization;
	specialization = new char[strlen(spec) + 1];
	strcpy(specialization, spec);
}

char* Doctor::getName()   const
{
	return name;
}
unsigned int Doctor::getWorkerID()    const
{
	return workerID;
}
char* Doctor::getSpecialization() const
{
	return specialization;
}

void Doctor::print() const
{
	cout << "Doctor " << name <<": "<< endl;
	cout << "\t\t" << "ID: " << workerID << endl;
	cout << "\t\tspecialization: " << specialization << endl;
}