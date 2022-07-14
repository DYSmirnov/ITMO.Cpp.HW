// Lab9_controlTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>

using namespace std;

class Triangle
{
public:
	Triangle(double a1, double b1, double c1) : a{ a1 }, b{ b1 }, c{ c1 }
	{
		if ((a + b) < c || (a + c) < b || (b + c) < a)
			throw ExLength("одна из сторон больше чем сумма двух других!");
	}

	double squar()
	{
		double pp = a + b + c;
		return (sqrt(pp * (pp - a) * (pp - b) * (pp - c)));
	}

	class ExLength {
	public:
		string text;
		ExLength(string  t) : text(t) {}
	};

private:
	double a;
	double b;
	double c;
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	try{
	Triangle t1{ 1 , 2 ,5 };
	cout << t1.squar();
	}
	catch (Triangle::ExLength& ex)
	{
		cout << "\nОшибка инициализации: " << ex.text;
	}
}

