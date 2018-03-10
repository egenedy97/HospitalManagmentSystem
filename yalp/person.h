#pragma once
#include <string>
#include <iostream>
using namespace std;

class person
{
public:
	string name;
	int age;
	person();
	person(string, int);
	virtual ~person() = 0;
};


