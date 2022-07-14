#pragma once
#include <iostream>
#include <string>

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

	//Lab9.2
	class ExNegativNumber
	{
	public:
		string nobj;
		ExNegativNumber(string);
	};

private:
	int hours;
	int minutes;
	int seconds;
};

