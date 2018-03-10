#include "patient.h"



patient::patient(string name = " ", int age = 0) :person(name, age), duartion(0) {room=-1; hasdoc=0;  }
patient:: ~patient() { 
}

void patient::add_disease(string des) {
	disease.push_back(des);
}
void patient::delete_diseace(int num) {
	disease.erase(disease.begin() + num);

}
void patient::set_room(int ro) { room = ro; }

string patient::report_print(bool a = false)
{
    string s= " patient: " + person::name  + "\tage: " + to_string(age) + "\tduration: " + to_string(duartion);
    if(room>0)s+="\troom:"+to_string(room);
    else s+= "no room.";
    if(a){
        for(int i=0; i<disease.size(); i++)  s += disease[i]+"\n";
    }
    return s;
}

void patient::set_duration(int d){duartion=d;}
string patient::get_name(){return person::name;}

int patient::get_room(){return room;}

