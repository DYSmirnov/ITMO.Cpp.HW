// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctime>


using namespace std;

void ex1()
{
    double x, y;
    cout << "Введите значения Х и У через пробел: " << endl;
    cin >> x >> y;
    if (x * x + y * y < 9 && y>0)
        cout << "Внутри";
    else if (x * x + y * y > 9 || y < 0)
        cout << "Снаружи";
    else
        cout << "На границе";
}

void ex2()
{
    char op;
    cout << "Сделай свой выбор, собери авто свой мечты: ";
    cin >> op;
    switch (op)
    {

    case 'V':
        cout << "Кондиционер хочу\n";
        
    case 'S':
        cout << "Радио играть должно\n";

    default:
        cout << "Колеса круглые\n";
        cout << "Мощный двигатель\n";
    }
}

void ex3()
{
    double x, x1, x2, y;
    cout << "x1 = "; cin >> x1;
    cout << "x2 = "; cin >> x2;
    cout << "\tx\tsin(x)\n";
    
    x = x1;
    do
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    } 
    while (x <= x2);

}

void ex4()
{
    int a, b, temp;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    cout << "НОД = " << a << endl;
}

void ex5()
{
    srand(time(NULL));
    int a, b, c;
    int k = 0, n = 10;
    for (int i = 1; i <= n; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << "*" << b << " = ";
        cin >> c;
        
        if (a * b != c)
        {
            k++;
            cout << "Error!";
            cout << a << "*" << b << " = " << a*b << endl;
        }
    }
    cout << "Count error: " << k << endl;
    
}

void ex6()
{
    int k, m;
    int s = 0;
    cout << "Введите левую границу диапазона = "; cin >> k;
    cout << "Введите правую границу диапазона = "; cin >> m;

    for (int i = 1; i <= 100; i++)
    {
        if ((i > k) && (i < m))
            continue;
        s += i;
    }
    cout << "Сумма = " << s << endl;
}

void final_test_leapYear()
{
    int year;
    cout << "Введите год для проверки:" << endl;
    cin >> year;
    if ((year % 4 == 0) && (year % 100 != 0))
        cout << "Год виосокосный";
    else if ((year % 400 == 0) && (year % 100 != 0))
        cout << "Год виосокосный";
    else
        cout << "Год не виосокосный";
}

void final_test_coin()
{
    int sum;
    int ten(0), five(0), two(0), one(0);

    cout << "Введите сумму:" << endl;
    cin >> sum;
    while (sum > 0)
    {
        cout << sum << endl;
        if (sum / 10 >= 1)
        {
            sum -= 10;
            ten ++;
        }
        else if (sum / 5 >= 1)
        {
            sum -= 5;
            five ++;
        }
        else if (sum / 2 >= 1)
        {
            sum -= 2;
            two ++;
        }
        else if (sum > 0)
        {
            sum -= 1;
            one ++;
        }
    }
    if (ten != 0)
        cout << ten << " монет по 10 рублей;" << endl;
    if (five != 0)
        cout << five << " монет по 5 рублей;" << endl;
    if (two != 0)
        cout << two << " монет по 2 рубля;" << endl;
    if (one != 0)
        cout << five << " монет по 1 рублю;" << endl;
}


void target()
{
    double x, y;
    int score = 0;
    while (score < 50)
    {
        cout << "Введите значения Х и У через пробел: " << endl;
        cin >> x >> y;

        if (x * x + y * y <= 2)
        {
            score += 10;
            cout << "10 баллов" << endl;
        }
        else if (x * x + y * y <= 4)
        {
            score += 5;
            cout << "5 баллов" << endl;
        }
        else if (x * x + y * y <= 9)
        {
            score += 1;
            cout << "1 балл" << endl;
        }
        else
            cout << "Промах" << endl;
        cout << "Счёт: " << score << endl;
    }
}


int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    //ex1();
    //ex2();
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    //final_test_leapYear();
    //final_test_coin();
    //target();
}


