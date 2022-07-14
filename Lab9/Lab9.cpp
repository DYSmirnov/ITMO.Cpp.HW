// Lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

#pragma region ex1

class DivideByZeroError
{
public:
    DivideByZeroError() : message("Деление на нуль") {}
    void printMessage() const { cout << message << endl; }

private:
    string message;
};

float quotient(int num1, int num2) 
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)num1 / num2;
}

int ex1()
{
    cout << "Введите два целых числа для расчета их частного:\n";
    int number1, number2;
    cin >> number1;
    cin >> number2;
    try
    {
        float result = quotient(number1, number2);
        cout << "Частное равно " << result << endl;
    }
    catch (DivideByZeroError& error)
    {
        cout << "ОШИБКА: ";
        error.printMessage();
        return 1;
    }
    return 0;
}

#pragma endregion

#pragma region ex2

int ex2()
{
    cout << "Введите два целых числа для расчета их частного:\n";
    int number1;
    cin >> number1;
    for (int i = -10; i < 10; i++)
    {

    
    try
    {
        float result = quotient(number1, i);
        cout << "Частное равно " << result << endl;
    }
    catch (DivideByZeroError& error)
    {
        cout << "ОШИБКА: ";
        error.printMessage();
        return 1;
    }
    }
    return 0;
}

#pragma endregion



int main()
{
    system("chcp 1251");
    ex2();
}

