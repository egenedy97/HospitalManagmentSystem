#include "nurse.h"



nurse::nurse(string name = " ", string password = " ",int age = 0) : employee(name, password, "nurse" , age) {}
void nurse::set_room(int rom) {
	this->rom = rom;
}
int nurse::get_room(){return rom;}
string nurse::get_name(){return person::name;}
string nurse::get_password(){return employee::password;}

void nurse::password_changer(string pass) { password = pass; }
