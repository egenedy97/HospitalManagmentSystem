#include "doctor.h"




doctor::doctor(string name = " ", string password = " ", string department = " ",
    int age = 0) : employee(name, password, department, age) {}

void doctor::print_patient_case(int num) const {
    patients[num]->report_print(0);
}

string doctor::print_patients_all() {
    string temp;
    for (size_t i = 0; i < patients.size(); i++)
	{
        temp+= patients[i]->report_print(0)+"\n";
	}
    return temp;
}

void doctor::add_patient(patient* pat) {
	patients.push_back(pat);
}

void doctor::remove_patient(int num) {
	patients.erase(patients.begin() + num);
}

void doctor::set_weekend(string weekend) { this->weekappointments.push_back(appointment(weekend, 0, 0, 1440)); }//adds the weekend as along apoint.

void doctor::set_as_receptiondoc() { this->weekappointments.push_back(appointment("Sunday", 0, 0,10080)); }//closes all the appoints for this doc.

bool doctor::add_appointment(appointment& app) {
	for (size_t i = 0; i < weekappointments.size(); i++)
        if ((weekappointments[i]).intersected_with(app)) {  return 0; }
	weekappointments.push_back(app);
    return 1;
}
void doctor::password_changer(string pass) { password = pass; }

string doctor::get_name(){return person::name;}
string doctor::get_password(){return employee::password;}
string doctor::get_department(){return employee::department;}
string doctor::get_appoints(){
    string app;
    for(int i=0 ; i< weekappointments.size() ; i++){
        app += weekappointments[i].print()+"\n";
    }
    return app;
}
int doctor::get_patient_num(){return patients.size();}

patient* doctor::get_pat_ptr(int i){if(i<0 || i>patients.size())return NULL;

return patients[i];
}

doctor::~doctor()
{
    for(int i=0 ; i< patients.size() ; i++){
        delete patients[i];}

}
