#pragma once
#include <string>
#include<iostream>
using namespace std;


class appointment
{
	int  day;
	int hour;
	int minute;
     int duration;

	void date_correction();
	bool operator>(const appointment& t1);
	bool operator== (const appointment& t1);
	appointment operator+(const int number);
public:
	appointment(string day, int hour, int minute, int duartion);
    string print();
    static int daytonum(string);
    static string numtoday(int);
	bool intersected_with(appointment t1);
};

