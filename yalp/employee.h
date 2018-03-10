#pragma once
#include "person.h"
#include "appointment.h"
#include "patient.h"

class employee :
	public person
{
protected:
    string department;
	string password;
public:
    employee(string , string , string , int );
	virtual ~employee()=0;
    virtual void set_room(int&){}
    virtual int get_room(){}

    virtual void password_changer(string);
    virtual string get_name(){}
    virtual string get_password(){}
};
