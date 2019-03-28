#include "patient.h"

// Constructor
Patient::Patient(const char* n, unsigned int id, eGender g, Date bdate, Date vdate, const char* purpose) :name(nullptr), patientID(id), gender(g),birth_date(bdate), visit_date(vdate),visit_purpose(nullptr) 
{
	setName(n);
	setVisitPurpose(purpose);
}

// Copy constructor
Patient::Patient(const Patient &other) :name(nullptr), patientID(other.patientID), gender(other.gender), birth_date(other.birth_date), visit_date(other.visit_date), visit_purpose(nullptr)
{
	setName(other.getName());
	setVisitPurpose(other.getVisitPurpose());
}

//Destructor
Patient::~Patient()
{
	delete[] name;
	delete[] visit_purpose;
}

//Setters
void Patient:: setName(const char* n)
{
	delete[] name;
	name = new char[strlen(n) + 1]; 
	strcpy(name, n);
}
void Patient::setID(unsigned int id)
{
	patientID = id;
}

void Patient::setGender(eGender g) 
{
	gender = g;
}

void Patient::setBirthDate(Date date)
{
	birth_date = date;
}

void Patient::setVisitDate(Date date)
{
	visit_date = date;
}
void Patient::setVisitPurpose(const char* str)
{
	delete[] visit_purpose;
	visit_purpose = new char[strlen(str) + 1];
	strcpy(visit_purpose, str);
}

//Getters
char* Patient::getName() const
{
	return name;
}

unsigned int Patient::getID() const
{
	return patientID;
}

Patient::eGender Patient::getGender() const
{
	return gender;
}

Date Patient::getBirthDate() const
{
	return birth_date;
}

Date Patient::getVisitDate() const
{
	return visit_date;
}
char* Patient::getVisitPurpose() const
{
	return visit_purpose;
}

void Patient::print() const
{
	cout << "Patient " << name<<": "<< endl;
	cout << "\t\t"  << "ID: "<<patientID << endl;
	cout << "\t\t" << (2019-birth_date.getYear()) << " Years old " <<(gender==MALE? "MALE":"FEMALE") << endl;
	cout << "\t\tarrived At: ";
	visit_date.printDate();
cout<<"\t\treason of arrival:  \"" << visit_purpose<< "\""<<endl;
}
