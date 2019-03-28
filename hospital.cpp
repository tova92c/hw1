#include "hospital.h"

Hospital::Hospital() :num_of_departments(0), num_of_doctors(0), num_of_nurses(0), num_of_patients(0), departments_arr(nullptr),
nurses_arr(nullptr), doctors_arr(nullptr)
{
	//patients = nullptr;
}

Hospital::Hospital(const Hospital& other) : departments_arr(nullptr), nurses_arr(nullptr), doctors_arr(nullptr)
{
	//patients = nullptr;
	num_of_departments = other.num_of_departments;
	num_of_doctors = other.num_of_doctors;
	num_of_nurses = other.num_of_nurses;
	num_of_patients = other.num_of_patients;
	if (num_of_departments > 0)
	{
		//copy departments
	}
	if (num_of_doctors > 0)
	{
		//copy doctors_arr
	}
	if (num_of_nurses > 0)
	{
		//copy nurses_arr
	}
	if (num_of_patients > 0)
	{
		//copy //patients_arr
	}
}
Hospital::~Hospital()
{
	delete[] departments_arr;
	delete[] doctors_arr;
	delete[] nurses_arr;
	//	delete[] patients;
}


Department* Hospital::getDepartments() const
{
	return departments_arr;
}
Doctor* Hospital::getDoctors() const
{
	return doctors_arr;
}
Nurse* Hospital::getNurses() const
{
	return nurses_arr;
}

void Hospital::addDepartment(const char* depName)
{
	Department dep = Department(depName);
	if (num_of_departments == 0)
	{
		departments_arr = new Department;
		departments_arr[0] = dep;
	}
	else
	{

	}
}

