#include "room.h"



room::room(int num = 0, int capacity = 0) : num(num),capacity(capacity){}
room::~room() {
    for(int i=0 ; i< patients.size() ; i++){
        patients[i]->set_room(-1);
        nurs->set_room(-1);
        delete patients[i];
    }

}

bool room::add_patient( patient* pat) {
    if (capacity > patients.size() ) {
        patients.push_back(pat);  pat->set_room(num); return 1;}
    return 0;
}

void room::add_nurse(nurse& nur) {
	nurs = &nur;
	nur.set_room(num);
}

void room::erase_patient(int num) {
	if (num > patients.size() || num < 0) { cout << "Bad index error" << endl; return; }
	else patients.erase(patients.begin() + num);
}

string room::print_patients_data(){
    string temp;
    for(int i=0 ; i<patients.size(); i++){
        temp += patients[i]->report_print(1)+"\n\n";
    }
    return temp;
}

int room::get_capacity()const { return capacity; }
int room::get_size()const { return patients.size(); }
int room::get_number(){return num; }
