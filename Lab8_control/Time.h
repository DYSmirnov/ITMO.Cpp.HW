#pragma once
#include <iostream>

using namespace std;



class Time
{

public:
	Time(int, int, int);
	
	Time();

	void set_hours(int);
	
	int get_hours();
	
	void set_minutes(int);
	
	int get_minutes();
	
	void set_seconds(int);
	
	int get_seconds();
	
	void showTime();

	Time operator+(Time);

private:
	int hours;
	int minutes;
	int seconds;
};

