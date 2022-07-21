// Lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>
#include "Dot.h"


//#pragma region Агрегация
//class Triangle
//{
//public:
//    Triangle(Dot* a, Dot* b, Dot* c) : a{ a }, b{ b }, c{ c }
//    {
//    }
//
//    double getAB()
//    {
//        return a->distanceTo(*b);
//    }
//
//    double getBC()
//    {
//        return b->distanceTo(*c);
//    }
//
//    double getAC()
//    {
//        return a->distanceTo(*c);
//    }
//
//    double perimetr()
//    {
//        return (getAB() + getBC() + getAC());
//    }
//
//    double square()
//    {
//        double pp = perimetr() / 2;
//        double sq = sqrt(pp * (pp - getAB()) * (pp - getBC()) * (pp - getAC()));
//        return sq;
//    }
//private:
//    Dot* a;
//    Dot* b;
//    Dot* c;
//};
//
//
//
//int main()
//{
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    Dot d1{ 2, 0 };
//    Dot d2{ 5, 5 };
//    Dot d3{ 5, 0 };
//
//    Triangle t(&d1, &d2, &d3);
//
//    std::cout << "AB = " << t.getAB() << ", BC = " << t.getBC()
//        << ", AC = " << t.getAC() << std::endl
//        << "Периметр треугольника - " << t.perimetr() << std::endl
//        << "Площадь треугольника - " << t.square() << std::endl;
//    return 0;
//}
//#pragma endregion


#pragma region Композиция
class Triangle
{
public:
    Triangle(Dot a, Dot b, Dot c) : a{ a }, b{ b }, c{ c }
    {
    }

    double getAB()
    {
        return a.distanceTo(b);
    }

    double getBC()
    {
        return b.distanceTo(c);
    }

    double getAC()
    {
        return a.distanceTo(c);
    }

    double perimetr()
    {
        return (getAB() + getBC() + getAC());
    }

    double square()
    {
        double pp = perimetr() / 2;
        double sq = sqrt(pp * (pp - getAB()) * (pp - getBC()) * (pp - getAC()));
        return sq;
    }
private:
    Dot a;
    Dot b;
    Dot c;
};



int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Dot d1{ 2, 0 };
    Dot d2{ 5, 5 };
    Dot d3{ 5, 0 };

    Triangle t(d1, d2, d3);

    std::cout << "AB = " << t.getAB() << ", BC = " << t.getBC()
        << ", AC = " << t.getAC() << std::endl
        << "Периметр треугольника - " << t.perimetr() << std::endl
        << "Площадь треугольника - " << t.square() << std::endl;
    return 0;
}
#pragma endregion