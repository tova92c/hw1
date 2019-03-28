#pragma once
#ifndef __PATIENT_H
#define __PATIENT_H

#include "date.h"
#include "department.h"
class Patient
{
public:
	 enum eGender {MALE, FEMALE};
	 
	 Patient(const char* n, unsigned int id, eGender gender, Date bdate, Date vdate, const char* purpose); // Constructor
	 Patient(const Patient &other); // Copy constructor
	 ~Patient(); //Destructor
	
	 //Setters
	 void setName(const char* n);
	 void setID(unsigned int id);
	 void setGender(eGender g);
	 void setBirthDate(Date date);
	 void setVisitDate(Date date);
	 void setVisitPurpose(const char* str);

	 //Getters
	 char* getName() const; 
	 unsigned int getID() const;
	 eGender getGender() const;
	 Date getBirthDate() const;
	 Date getVisitDate() const;
	 char* getVisitPurpose() const;

	 void print() const;


private:
	char* name;
	unsigned int patientID;
	eGender gender;
	Date birth_date;
	Date visit_date;
	char* visit_purpose;

//	Department& department;
//	Doctor* p_doc;
//	Nurse* p_nurse;
};

#endif // !__PATIENT_H
