// TestWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream> 
#include <string> 
#include<Windows.h>
#include "A.h"
#include "Point.h"
#include "Stack.h"


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
#pragma region 1
	A a1;
	A a2(10); //10 – размер массива 
	A a3 = a2;
	a1 = a3;
	a2 = A(20);
	const A a4(5);
	for (int i = 0; i < a2.size(); i++)
	{
		//cout << a4[i];
	}
#pragma endregion

#pragma region 3
	Point pt1(1, 1), pt2(2, 2), pt3;
	pt3 = pt1 + pt2;
	//cout << "X:" << pt3.PrintX() << ", Y:" << pt3.PrintY() << endl;
	pt2 += pt1;
	//cout << "X:" << pt2.PrintX() << ", Y:" << pt2.PrintY() << endl;
	pt3 = pt1 + 5;
	//cout << "X:" << pt3.PrintX() << ", Y:" << pt3.PrintY() << endl;

#pragma endregion


#pragma region 4
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();

#pragma endregion

}
