// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

//typedef tuple<string, int, double> Tuple;
using Tuple = tuple<string, int, double>;
using quadraticTuple = tuple<double, double, bool>;

struct Distance
{
    int feet;
    double inches;

    /*void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }*/
};



#pragma region ex1



//Distance addDist(Distance d1, Distance d2)
//{
//    Distance d;
//    d.feet = d1.feet + d2.feet;
//    d.inches = d1.inches + d2.inches;
//    if (d.inches >= 12.0)
//    {
//        d.inches -= 12;
//        d.feet++;
//    }
//
//    return d;
//}

Distance InputDist()
{
    Distance d;
    cout << "\n Введите число футов: ";
    cin >> d.feet;
    cout << "\n Введите число дюймов: ";
    cin >> d.inches;
    return d;
}

void ShowDist(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"\n";
}



#pragma endregion

#pragma region ex2


Distance addDist(const Distance& d1, const Distance& d2)
{
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12.0)
    {
        d.inches -= 12;
        d.feet++;
    }
    return d;
}

#pragma endregion


#pragma region ex3
void ex3()
{
    int n;
    cout << "Введите размер массива расстояний: ";
    cin >> n;

    Distance* masDist = new Distance[n];
    for (int i = 0; i < n; i++)
        masDist[i] = InputDist();

    for (int i = 0; i < n; i++)
        ShowDist(masDist[i]);
    delete[] masDist;
}
#pragma endregion

#pragma region ex4

void printTupleOfThree(tuple<string, int, double> t)
{
    cout << "("
        << get<0>(t) << ", "
        << get<1>(t) << ", "
        << get<2>(t) << ")" << endl;
}

void printTuple(Tuple t)
{
    cout << "("
        << get<0>(t) << ", "
        << get<1>(t) << ", "
        << get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d)
{
    s.append("!");
    return make_tuple(s, a, d * 10);
}



void ex4()
{
    vector<string> v1{ "one", "two", "three", "four", "five", "six" };
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    auto t0 = make_tuple(v1[0], v2[0], v3[0]);
    //printTupleOfThree(t0);
    printTuple(t0);
    auto t1 = funtup(v1[1], v2[1], v3[1]);
    printTuple(t1);
    
}
#pragma endregion

#pragma region control test1

struct Time
{
    int hours;
    int minutes;
    int seconds;

    Time sum(Time t2)
    {
        Time res;
        res.seconds = seconds + t2.seconds;
        res.minutes = minutes + t2.minutes;
        res.hours = hours + t2.hours;

        if (res.seconds > 60)
        {
            res.seconds -= 60;
            res.minutes++;
        }

        if (res.minutes > 60)
        {
            res.minutes -= 60;
            res.hours++;
        }
        return res;
    }

    Time sub(Time t2)
    {
        Time res;
        res.seconds = seconds - t2.seconds;
        res.minutes = minutes - t2.minutes;
        res.hours = hours - t2.hours;

        if (res.seconds < 0)
        {
            res.seconds += 60;
            res.minutes--;
        }

        if (res.minutes < 0)
        {
            res.minutes += 60;
            res.hours--;
        }
        return res;
    }


    void showTimeSecond()
    {
        int sec = hours * 3600 + minutes * 60 + seconds;
        cout << "Время: " << hours << ":" << minutes << ":" << seconds << endl;
        cout << "В секундах: " <<sec << endl;
    }
};

Time inputTime()
{
    Time t;
    cout << "Введите часы: ";
    cin >> t.hours;
    cout << "Введите минуты: ";
    cin >> t.minutes;
    cout << "Введите секунды: ";
    cin >> t.seconds;
    return t;
}

void showTime(Time t)
{
    cout << "Время: " << endl <<
        t.hours << ":" << t.minutes << ":" << t.seconds << endl;
}


#pragma endregion


#pragma region control test2

struct quadratic
{
    double x1;
    double x2;
    bool quad;
};

quadratic Myroot(double a, double b, double c)
{
    quadratic x;
    double d;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x.x1 = (-b + sqrt(d)) / 2 * a;
        x.x2 = (-b - sqrt(d)) / 2 * a;
        x.quad = true;
        return x;
    }
    else if (d == 0)
    {
        x.x1 = x.x2 = (-b) / 2 * a;
        x.quad = true;
        return x;
    }
    else
    {
        x.x1 = x.x2 = 0;
        x.quad = false;
        return x;
    }

}

void quadraticShow(quadratic q)
{
    if (q.quad == false)
        cout << "У квадратного уравнения нет корней." << endl;
    else
    {
        if (q.x1 == q.x2)
            cout << "x1 = x2 = " << q.x1;
        else
            cout << "x1 = " << q.x1 << ", x2 = " << q.x2;
    }
}

void task2()
{
    double a, b, c;
    std::cout << "Введите значения a,b,c для вычисления корней квадратного уравнения. Введите занчения через пробел  " << std::endl;
    std::cin >> a >> b >> c;
    quadraticShow(Myroot(a, b, c));
}

#pragma endregion


#pragma region control test3

quadraticTuple MyrootTuple(double a, double b, double c)
{
    double d, x1, x2;
    bool flag;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        flag = true;
    }
    else if (d == 0)
    {
        x1 = x2 = (-b) / 2 * a;
        flag = true;
    }
    else
    {
        x1 = x2 = 0;
        flag = false;
    }
    auto t1 = make_tuple(x1, x2, flag);
    return t1;
}

void quadraticTupleShow(quadraticTuple q)
{
    if (get<2>(q) == false)
        cout << "У квадратного уравнения нет корней." << endl;
    else
    {
        if (get<0>(q) == get<1>(q))
            cout << "x1 = x2 = " << get<0>(q);
        else
            cout << "x1 = " << get<0>(q) << ", x2 = " << get<1>(q);
    }
}

void task3()
{
    double a, b, c;
    std::cout << "Введите значения a,b,c для вычисления корней квадратного уравнения. Введите занчения через пробел  " << std::endl;
    std::cin >> a >> b >> c;
    quadraticTupleShow(MyrootTuple(a, b, c));
}

#pragma endregion

int main()
{
    system("chcp 1251");
    //Distance d1 = InputDist();
    //Distance d2 = { 1, 6.25 };
    //Distance d3 = addDist(d1, d2);
    //d1.ShowDist();
    //d2.ShowDist();
    //d3.ShowDist();
    //ex4();
    //Time t1 = inputTime();
    //cout << "T1" << endl;
    //showTime(t1);
    //Time t2 = inputTime();
    //cout << "T2" << endl;
    //showTime(t2);
    //cout << "Сумма T1 и T2" << endl;
    //showTime(t1.sum(t2));
    //cout << "Разность T1 и T2" << endl;
    //showTime(t1.sub(t2));
    //t2.showTimeSecond();

    task2();
}
