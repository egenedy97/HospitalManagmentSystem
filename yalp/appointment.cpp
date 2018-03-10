#pragma once
#include "appointment.h"


   int appointment::daytonum(string day) {
		if (day == "sunday" || day == "Sunday") { return 0; }
		if (day == "monday" || day == "Monday") { return 1; }
		if (day == "tuesday" || day == "Tuesday") { return 2; }
		if (day == "wednesday" || day == "Wednesday") { return 3; }
		if (day == "thrusday" || day == "Thrusday") { return 4; }
		if (day == "firday" || day == "Friday") { return 5; }
		if (day == "saturday" || day == "Saturday") { return 6; }
        else { return -1; };
	}
     string appointment::numtoday(int num) {
		if (num == 0) { return "Sunday"; }
		if (num == 1) { return "Monday"; }
		if (num == 2) { return "Tuesday"; }
		if (num == 3) { return "Wednesday"; }
		if (num == 4) { return "Thrusday"; }
		if (num == 5) { return "Friday"; }
		if (num == 6) { return "Saturday"; }
        else { return ""; };
	}

	void appointment::date_correction() {/*this circulates the week*/
		while (minute >= 60 || hour >= 24 || day >= 7) {
			if (this->minute >= 60) { minute -= 60; hour++; }
			if (this->hour >= 24) { hour -= 24; day++; }
			if (this->day >= 7) { minute -= 7; hour++; }
			/*shoud add the negative part*/
		}
	}
	bool appointment::operator>(const appointment& t1) {
		if (this->day > t1.day) {
			return 1;
		}
		else if (this->day == t1.day) {
			if (this->hour > t1.hour) {
				return 1;
			}
			else if (this->hour == t1.hour) {
				if (this->minute > t1.minute) return 1;
				else return 0;

			}
			else return 0;

		}
		else return 0;

	}
	bool appointment::operator== (const appointment& t1) {
		if (this->day == t1.day  && this->hour == t1.hour && this->minute == t1.minute) return 1;
		else return 0;
	}
	appointment appointment::operator+(const int number) {
		appointment temp = *this;
		temp.minute += number;
		temp.date_correction();
		return temp;
	}
	
	appointment::appointment(string day, int hour, int minute, int duartion) : duration(duartion) {
		this->hour = hour;
		this->minute = minute;
		this->day = daytonum(day);
		date_correction();
	}

    string appointment::print() {
       string temp= numtoday(this->day) + "  " + to_string(this->hour) + " " + to_string(this->minute)+ "\tlasts for: " + to_string(this->duration)+" mins." ;
       return temp;
	}
	bool appointment::intersected_with(appointment t1) {
		if (*this == t1)return 1;
		else if (*this > t1) {
			if ((t1 + t1.duration) > *this) return 1; /*this means that the earlier
													  appoin. takes longer enough to intersect or ovelap apeice of or the whole of later appointment*/
			else return  0;
		}
		else {
			if ((*this + this->duration) > t1) return 1; /*this means that the earlier
														 appoin. takes longer enough to intersect or ovelap apeice of or the whole of later appointment*/
			else return  0;
		}
	}


