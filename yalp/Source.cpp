#pragma once
#include <iostream>
#include <vector>
#include <string>
#include"doctor.h"
#include "patient.h"
#include "appointment.h"
#include "room.h"
using namespace std;
void add(vector<doctor> &doctors, vector<patient> &patients, vector<room> &rooms, vector<nurse> &nurses){
	char c; string name, department, password; int age, capacity, num; float salary; room_type romt = patientroom;
	cout << "choose what: a) doctor B)room c)patient d)nurse" << endl;
	cin >> c;
	switch (c) {
	case 'a':
		cin >> name >> department >> password >> age >> salary;
		doctors.push_back(doctor(name, password, department, age, salary)); break;
	case 'b':
		cin >> num >> capacity;
		rooms.push_back(room(num, capacity, romt, true)); break;
	case 'c':
		cin >> name >> age;
		patients.push_back(patient(name, age)); break;
	case 'd':
		cin >> name >> department >> password >> age >> salary;
		nurses.push_back(nurse(name, password, age, salary)); break;
	}

}
void main() {
	vector<doctor> doctors;
	vector<nurse>nurses;
	vector<patient>patients;
	vector<room> rooms;
	for (size_t i = 0; i < 4; i++)
	{
		add(doctors, patients, rooms, nurses);
	}
	doctors[0].set_weekend("Monday");
	doctors[0].add_patient(patients[0]);
	patients[0].add_disease("ko77a");
	doctors[0].add_appointment(appointment("Monday", 0, 15, 30));
	doctors[0].add_appointment(appointment("Tuesday", 0, 15, 30));
	doctors[0].print_patients_all();
	system("pause");
}