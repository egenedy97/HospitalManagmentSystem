#include "employee.h"




employee::employee(string name = " ", string password = " ", string department = " ", int age = 0) :person(name, age), password(password), department(department) {
}

void employee::password_changer(string pass) { password = pass; }

employee::~employee()
{
}
