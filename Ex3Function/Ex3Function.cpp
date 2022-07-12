// Ex3Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <math.h>


using namespace std;

void privet(string name)                                //Ex1
{
    cout << "Привет, " << name << "!" << endl;
}

string  privet2(string name)                            //Ex1
{
    string str =  "Привет, " + name + "!" ;
    return str;
}

void privet(string name, int k)                         //Ex2
{
    cout << "Привет, " << name << "!" << endl;
    cout << "Вы ввели число: " << k << endl;
}

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
            L = M;
        else
            R = M;
    }
    return R;
}

int ex4_1(int n)
{
    if (n == 1) return 1;
    else return (n + ex4_1(n - 1));
}

int ex4_1(int a, int b)
{
    if (b == a) return a;
    else return (b + ex4_1(b - 1));
}

int ex4_2(int m, int n)
{
    if (n == 0) return m;
    return ex4_2(n, m % n);
}


// Задание 1 Расчет площади сложной фигуры
struct point
{
    int x;
    int y;
};



double s(double side1, double side2, double side3)
{
    double p = (side1 + side2 + side3) / 2;
    double s = sqrt(p * (p - side1) * (p - side2) * (p - side3));
    return s;
}

double side_length(point p1, point p2)
{
    double side = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    return side;
}

void final1()
{
    point p1, p2, p3, p4, p5;
    double a, b, c, d, e, g, f;
    double s1, s2, s3, s_pentagon;
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
    a = side_length(p1, p2);
    b = side_length(p1, p5);
    f = side_length(p2, p5);
    c = side_length(p5, p4);
    g = side_length(p2, p4);
    e = side_length(p2, p3);
    d = side_length(p3, p4);
    s1 = s(a, b, f);
    s2 = s(f, g, c);
    s3 = s(g, e, d);
    s_pentagon = s1 + s2 + s3;
    cout << "s_pentagon" << s_pentagon;

    
}


//Задание 2  Применение итерации реализации функции
void sqrt_cub()
{
double a; // значение под корнем
cout << "Введите a: " << endl;
cin >> a;
cout << "pow(a,1.0/3): " << pow(a, 1.0 / 3) << endl;

double xi = a,
xi1 = 0; 

while (true)
{
    xi1 = 0.5 * (xi + 3 * a / (2 * xi * xi + a / xi)); 

    if (abs(xi1 - xi) < pow(10.0, -5.0)) 
        break; 

    xi = xi1;
}

cout << "Итерационное значение: " << xi << endl;
}


//Задание 3 Работа с различными треугольниками
void equilateral_triangle(double side)
{
    double s = sqrt(3) * side * side / 4;
    cout << "Площадь равностороннего треугольника " << s;
}

void final3()
{
    int triangle_type;
    double side1, side2, side3;
    cout << "Введите 1, если хотите вычислить площадь равностороннего треугольника" << endl;
    cout << "Введите 2, если хотите вычислить площадь разностороннего треугольника" << endl;
    cin >> triangle_type;
    if (triangle_type == 1)
    {
        cout << "Введите длинну стороны " << endl;
        cin >> side1;
        equilateral_triangle(side1);
    }
    else if (triangle_type == 2)
    {
        cout << "Введите длинну стороны 1 " << endl;
        cin >> side1;
        cout << "Введите длинну стороны 2 " << endl;
        cin >> side2;
        cout << "Введите длинну стороны 3 " << endl;
        cin >> side3;
        cout<< "Площадь разностороннего треугольника " << s(side1, side2, side3) << endl;
    }
        
    else
        "Введено некорректное значение";
}

//Задание 4 Рекурсивная функция суммы ряда
int funcsum(int n)
{
    if (n == 1)
        return 5;
    else if (n > 1)
    {
        return (5 * n + funcsum(n - 1));
    }
}

//Задание 5 Применение рекурсии для перевода целого числа в двоичный код

void convto2(int dig)
{
    int res;
    if (dig < 2)
    {
        cout <<  dig;
    }
    else
    {
        convto2(dig / 2);
        cout << dig % 2;
    }
}

void ex5()
{
    int dig, res;
    cout << "Введите число для перевода в двоичный код" << endl;
    cin >> dig;
    convto2(dig);
}




int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //string name;
    //int k;
    //cout << "Как тебя зовут? " << endl;
    //cin >> name; 
   // cout << "Введите число " << endl;
   // cin >> k;
    //cout << "Привет, " << name << "!" << endl;        //Ex1
    //privet(name);                                     //Ex1
    //string nameOut = privet2(name);                   //Ex1
    //cout << nameOut;                                  //Ex1
    //privet(name, k);
    //double a = 2;
    //int n = 3;

    //cout << firBinSearch(a, n);

    //cout << ex4_1(4);
    //int a, b;
    //cout << "Введите левую границу интервала ";
    //cin >> a;
    //cout << "Введите правую границу интервала ";
    //cin >> b;
    //cout << ex4_1(a,b);
    //cout << ex4_2(a,b);

    cout << funcsum(3);
    /*ex5();
    final3();
    sqrt_cub();
    final1();*/
}

