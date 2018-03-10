#pragma once
#include "employee.h"


class room;

class nurse : public employee {
	int rom;
public:
    nurse(string, string, int);
    void set_room(int);
	void password_changer(string);
    int get_room();
    string get_name();
    string get_password();
};
