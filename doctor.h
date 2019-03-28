#pragma once
#ifndef __DOCTOR_H
#define __DOCTOR_H


using namespace std;

class Doctor
{
private:
	char* name;
	unsigned int workerID;
	char* specialization;

public:
	Doctor(const char* n = nullptr, unsigned int id = 0, const char* spec = nullptr); //C'tor
	Doctor(const Doctor& other);//copy C'tor
	~Doctor();//D'tor

	void setName(const char n[]);
	void setId(unsigned int id);
	void setSpecialization(const char spec[]);

	char * getName()   const;
	unsigned int getWorkerID()    const;
	char*  getSpecialization() const;

	void print() const;
};

#endif // __DOCTOR_H