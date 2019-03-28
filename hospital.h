#pragma once
#ifndef __HOSPITAL_H
#define __HOSPITAL_H

#include "department.h"
#include "patient.h"

class Hospital
{
private:
	//max array size
	unsigned int num_of_departments;
	unsigned int num_of_doctors;
	unsigned int num_of_nurses;
	unsigned int num_of_patients;
	//Array of researchers
	//Num of researchers


	//The arrays
	Department* departments_arr;
	Nurse* nurses_arr;
	Doctor* doctors_arr;
	Patient* patients_arr;

public:
	Hospital();//C'tor
	Hospital(const Hospital& other);//copy C'tor
	~Hospital();//D'tor

	Department* getDepartments() const;
	Doctor* getDoctors() const;
	Nurse* getNurses() const;



	void addDepartment(const char* depName);
	//	void addDoctor(const char* name);
};


#endif // __HOSPITAL_H