// Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
//#include "HeaderTask4.h"


//ex1

//void ex1()
//{
//    double k = 2.5;
//    double xv = 10;
//    double yv = 10;
//
//    print(xv, yv);
//
//    fum_value(k, xv, yv);
//    print(xv, yv);
//
//    fum_ptr(k, &xv, &yv);
//    print(xv, yv);
//
//    fum_ref(k, xv, yv);
//    print(xv, yv);
//}
//
//void fum_value(double k, double x, double y)
//{
//    x = x + k;
//    y = y + k;
//    std::cout << "fum_value x=" << x << " y=" << y << std::endl;
//}
//
//void fum_ptr(double k, double *x, double *y)
//{
//    *x = *x + k;
//    *y = *y + k;
//}
//
//void fum_ref(double k, double &x, double &y)
//{
//    x = x + k;
//    y = y + k;
//}
//
//void print(double x, double y)
//{
//    std::cout << "x = " << x << "; y = " << y << std::endl;
//}

//ex2

//void swap(int*, int*);
////void swap(int&, int&);
//void swap(int x, int y);
//
//void ex2()
//{
//    int x = 5, y = 10;
//    std::cout << "x=" << x << " y=" << y << std::endl;
//    swap(&x, &y);
//    std::cout << "x=" << x << " y=" << y << std::endl;
//    swap(x, y);
//    std::cout << "x=" << x << " y=" << y << std::endl;
//}
//
//void swap(int x, int y)
//{
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//}
//
//void swap(int*x, int*y)
//{
//    int temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//void swap(int &x, int &y)
//{
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//}

//control_test
//Вычисление корней квадратного уравнения

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double d;
    d = b * b - 4 * a * c;
    //std::cout << "d=" << d << std::endl;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        return 1;
    }
    else if (d == 0)
    {
        x1 = (-b) / 2 * a;
        x2 = x1;
        return 0;
    }
    else
        return -1;
}


void task1()
{
    double a, b, c, x1 = 0, x2 = 0;
    std::cout << "Введите значения a,b,c для вычисления корней квадратного уравнения. Введите занчения через пробел  " << std::endl;
    std::cin >> a >> b >> c;
    switch (Myroot(a, b, c, x1, x2))
    {
    case (1):
        std::cout << "Есть два корня. \n x1=" << x1 << ", x2=" << x2 << std::endl;
        break;
    case (0):
        std::cout << "Есть один корень. \n x1=x2=" << x1 << std::endl;
        break;
    case (-1):
        std::cout << "Для данного квадратного уровнения нет корней." << std::endl;
        break;  
    default:
        std::cout << "Что-то пошло не так.";
        break;
    }
}


//Реализация ввода данных

bool Input(int& a, int& b)
{
    std::cout << "Введите через пробел значения a и b " << std::endl;
    std::cin >> a >> b;
    if (a > 0 & b > 0)
        return true;
    else
        return false;
}

int task2()
{
    int a1, b1;
    if (Input(a1, b1) == false)
    {
        std::cerr << "error" << std::endl;
        return 1;
    }

    int s = a1 + b1;
    return 0;
}



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //ex1();
    //ex2();

    task2();
    task1();
    return 0;
}

