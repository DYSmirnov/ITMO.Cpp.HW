// Lab8_control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"
#include <windows.h>



int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	try
	{
	Time t1 (15, 12, 62);
	Time t2 (0, 60, -1);
	Time t3;

	t1.showTime();
	t2.showTime();
	t3 = t1 + t2;
	t3.showTime();
	}
	catch (Time::ExNegativNumber& ex)
	{
		cout << ex.nobj;
	}

}

