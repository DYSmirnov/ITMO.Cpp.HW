// Lab8_control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"



int main()
{
	Time t1 (15, 12, 62);
	Time t2 (0, 60, 0);
	Time t3;
	
	t1.showTime();
	t2.showTime();
	t3 = t1 + t2;
	t3.showTime();
}

