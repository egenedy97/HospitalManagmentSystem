#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "patient.h"
#include "nurse.h"

using namespace std;

class room {
	int num;
	nurse* nurs;
	vector<patient*> patients;
	int capacity;
	bool available;
public:
    room(int , int);
	void erase_patient(int);
	void add_nurse(nurse& nur);
    bool add_patient(patient *);
    string print_patients_data();
	int get_capacity()const;
	int get_size()const;
    int get_number();
    ~room();
};
