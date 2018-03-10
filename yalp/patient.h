#pragma once

#include "person.h"

#include <vector>
#include <string>
class patient :
	public person
{
	vector <string> disease;
	int duartion;
	int room;
public:
	patient(string, int);
	void add_disease(string);
	void delete_diseace(int);
    void set_duration(int);
    string report_print(bool);
    string get_name();
    int get_room();

    void set_room(int ro);
    bool hasdoc;

	~patient();
};
