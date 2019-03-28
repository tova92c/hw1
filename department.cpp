#include "department.h"

Department::Department(const char* depName) :name(nullptr), num_of_nurses(0), num_of_doctors(0), num_of_patients(0), nurses_arr(nullptr), doctors_arr(nullptr)
{
	setName(depName);
}

Department::Department(const Department& other) : name(nullptr), num_of_nurses(0), num_of_doctors(0), num_of_patients(0), nurses_arr(nullptr), doctors_arr(nullptr)
{
	setName(other.getName());
	num_of_doctors = other.getNumOfDoctors();
	num_of_nurses = other.getNumOfNurses();
	num_of_patients = other.getNumOfPatients();
	setDoctors(other.doctors_arr, other.num_of_doctors);
	setNurses(other.nurses_arr, other.num_of_nurses);
	//setPatients
}

Department::~Department()
{
	delete[] name;
	delete[] nurses_arr;
	delete[] doctors_arr;
//	delete[] patients_arr;
}

void Department::setName(const char* n)
{
	delete[]name;
	name = new char[strlen(n) + 1];
	strcpy(name, n);
}

void Department::setDoctors(Doctor* d_arr, unsigned int size)
{
	delete[] doctors_arr;
	doctors_arr = new Doctor[size];
	for (unsigned int i = 0; i < size; i++)
	{
		doctors_arr[i] = d_arr[i];
	}
	num_of_doctors = size;
}
void Department::setNurses(Nurse* n_arr, unsigned int size)
{
	delete[] nurses_arr;
	nurses_arr = new Nurse[size];
	for (unsigned int i = 0; i < size; i++)
	{
		nurses_arr[i] = n_arr[i];
	}
	num_of_nurses = size;
}

//void Department::setPatients(Patient* p_arr, unsigned int size)
//{
//	delete[] patients_arr;
//	//patients_arr = new Patient[size];//need deafult C'tor
//	for (unsigned int i = 0; i < size; i++)
//	{
//		patients_arr[i] = p_arr[i];
//	}
//	num_of_patients = size;
//}


bool Department::addDepartment(const Department& dep)
{
	return false;
}


bool Department::addDoctor(const Doctor& doc)
{
	bool alreadyIn = false;
	if (num_of_doctors == 0)
	{
		doctors_arr = new Doctor(doc);
		num_of_doctors = 1;
		return true;
	}

	Doctor* tmpArr = new Doctor[num_of_doctors];
	for (unsigned int i = 0; i < num_of_doctors; i++)
	{
		tmpArr[i] = doctors_arr[i];
		if (doc.getWorkerID() == doctors_arr[i].getWorkerID())
		{
			delete[] tmpArr;
			return false;
		}

	}
	delete[] doctors_arr;
	doctors_arr = new Doctor[num_of_doctors + 1];
	for (unsigned int i = 0; i < num_of_doctors; i++)
		doctors_arr[i] = tmpArr[i];
	doctors_arr[num_of_doctors] = doc;
	delete[] tmpArr;
	num_of_doctors++;
	return true;
}



char* Department::getName()   const
{
	return name;
}
unsigned int Department::getNumOfNurses()    const
{
	return num_of_nurses;
}
unsigned int Department::getNumOfDoctors()    const
{
	return num_of_doctors;
}
unsigned int Department::getNumOfPatients()    const
{
	return num_of_patients;
}
Nurse* Department::getNurses()
{
	return nurses_arr;
}
Doctor* Department::getDoctors()
{
	return doctors_arr;
}

//Patient* Department::getPatients()
//{
//	return patients_arr;
//}


void Department::print() const
{
	cout << "Department's name: " << name << endl;
	cout << "nurses: " << num_of_nurses << ", doctors: " << num_of_doctors << ", patients: " << num_of_patients << endl;
}