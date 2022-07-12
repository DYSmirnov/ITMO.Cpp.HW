// Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

void ex1_1();
void ex1_2();
void ex1_3();
void ex1_4();
void ex1_5();
void ex1_final();


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout.precision(3);

    //ex1_1();
    //ex1_2();
    //ex1_3();
    //ex1_4();
    //ex1_5();
    ex1_final();

}


void ex1_1() 
{
    string name;
    cout << "Как тебя зовут? ";
    cin >> name;
    cout << "Привет, " << name << "!";
}

void ex1_2()
{
    string name;
    cout << "Как тебя зовут? ";
    getline(cin, name);
    cout << "Привет, " << name << "!";
}

void ex1_3()
{
    double x;
    double a, b;
    cout << "\nВведите a и b: \n";
    cin >> a;
    cin >> b;
    x = a / b;
    cout << "x = " << x << endl;

    cout << sizeof(a / b) << ends << sizeof(x) << endl;
}

void ex1_4()
{
    system("chcp 1251");
    string name;
    cout << "Введите свое имя";
    double x;
    double a, b;
    cout << "\nВведите a и b:\n";
    cin >> a;
    cin >> name;
    cin >> b;
    x = a / b;
    cout << "\nx = " << x << endl;
    cout << "Привет, " << name << "!\n";
}

void ex1_5()
{
    
    double p, pp, s ;
    cout << "Введите периметр равностороннего треугольника: " << endl;
    cin >> p;
    double a = p / 3;
    pp = p / 2;
    s = sqrt(pp * (pp - a) * (pp - a) * (pp - a));
    cout << "Сторона\tПлощадь\n";
    cout << a << "\t" << s;
}


struct point
{
    int x;
    int y;
};

void ex1_final()
{
    point p1, p2, p3, p4, p5;
    cout << "Введите для 1 точки координаты Х и У через пробел: \n";
    cin >> p1.x >> p1.y;
    cout << "Введите для 2 точки координаты Х и У через пробел: \n";
    cin >> p2.x >> p2.y;
    cout << "Введите для 3 точки координаты Х и У через пробел: \n";
    cin >> p3.x >> p3.y;
    cout << "Введите для 4 точки координаты Х и У через пробел: \n";
    cin >> p4.x >> p4.y;
    cout << "Введите для 5 точки координаты Х и У через пробел: \n";
    cin >> p5.x >> p5.y;
    double s;
    s = abs((p1.x * p2.y + p2.x * p3.y + p3.x * p4.y + p4.x * p5.y + p5.x * p1.y) 
        - (p2.x * p1.y + p3.x * p2.y + p4.x * p3.y + p5.x * p4.y + p1.x * p5.y)) / 2;
    cout << s;

}

