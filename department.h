#pragma once
#ifndef __DEPARTMENT_H
#define __DEPARTMENT_H

#include "doctor.h"
#include "nurse.h"
#include "patient.h"

#include <string.h>
#include <iostream>
using namespace std;

class Department
{
private:
	char* name;
	unsigned int num_of_nurses;
	unsigned int num_of_doctors;
	unsigned int num_of_patients;

	Nurse* nurses_arr;
	Doctor* doctors_arr;
//	Patient* patients_arr;

public:
	Department(const char* depName = nullptr);//C'tor
	Department(const Department& other);//copy C'tor
	~Department();//D'tor

	void setName(const char* n);
	void setDoctors(Doctor* d_arr, unsigned int size);
	void setNurses(Nurse* n_arr, unsigned int size);
//	void setPatients(Patient* p_arr, unsigned int size);


	char * getName()   const;
	unsigned int getNumOfNurses()    const;
	unsigned int getNumOfDoctors()    const;
	unsigned int getNumOfPatients()    const;
	Nurse* getNurses();
	Doctor* getDoctors();
//	Patient* getPatients();

	bool addDepartment(const Department& dep);

		bool addDoctor(const Doctor& doc);
//	void addNurse(Nurse& nurse);
	//	void addPatient(Patient& patient);

	void print() const;
};
#endif // __DEPARTMENT_H