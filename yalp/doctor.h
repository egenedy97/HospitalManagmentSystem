#pragma once
#include "employee.h"
#include <vector>
#include "appointment.h"
#include "patient.h"

class doctor :	public employee
{
private:
	vector <appointment> weekappointments;
	vector <patient*> patients;
	
public:
    doctor(string, string, string, int);

	void print_patient_case(int) const;
    string print_patients_all() ;
	void add_patient(patient* pat);//had to do this wihtout refrence
	void remove_patient(int);
	void set_weekend(string);
	void set_as_receptiondoc();
    bool add_appointment(appointment& );
	void password_changer(string);
    int get_patient_num();
    string get_department();
    string get_name();
    string get_password();
    string get_appoints();
    patient* get_pat_ptr(int);
	~doctor();
};

