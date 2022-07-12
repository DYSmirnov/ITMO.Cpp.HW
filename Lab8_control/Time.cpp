#include "Time.h"


using namespace std;

Time::Time(int hours, int minutes, int seconds)
{
	Time::set_hours(hours);
	Time::set_minutes(minutes);
	Time::set_seconds(seconds);
}

Time::Time()
{
	Time::set_hours(0);
	Time::set_minutes(0);
	Time::set_seconds(0);
}

void Time::set_hours(int time_hours) 
{
	Time::hours = time_hours;
}
int Time::get_hours()
{
	return Time::hours;
}

void Time::set_minutes(int time_minutes)
{
	if (time_minutes > 60)
	{
		time_minutes -= 60;
		Time::hours++;
	}

	Time::minutes = time_minutes;
}
int Time::get_minutes()
{
	return Time::minutes;
}

void Time::set_seconds(int time_seconds)
{
	if (time_seconds > 60)
	{
		time_seconds -= 60;
		Time::minutes++;
	}

	Time::seconds = time_seconds;
}
int Time::get_seconds()
{
	return Time::seconds;
}

void Time::showTime()
{
	cout << "Time: " <<
		Time::get_hours() << ":" <<
		Time::get_minutes() << ":" <<
		Time::get_seconds() << endl;
}

Time Time::operator+(Time t2)
{
	return Time((Time::get_hours() + t2.get_hours()),
			(Time::get_minutes() + t2.get_minutes()),
			(Time::get_seconds() + t2.get_seconds()));
	
}
