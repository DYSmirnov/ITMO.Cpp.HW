// Lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ex1()
{
    double sum = 0;
    int const n = 100;
    double nums[n];
    for (int i = 0; i < n; i++)
        nums[i] = (rand() % 100);

    ofstream  out("test", ios::out | ios::binary);
    if (!out)
        cout << "Файл открыть невозможно \n";

    out.write((char*)nums, sizeof(nums));
    out.close();
    
    ifstream in("test", ios::in | ios::binary);
    if(!in)
        cout << "Файл открыть невозможно \n";

    in.read((char*)&nums, sizeof(nums));


    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
        cout << nums[i] << " ";
    }
    cout << endl << "sum = " << sum << endl;
    in.close();
}

//ControlTest1

void controlTest1()
{
    cout << "Введите стихотворение (для завершения считывания введите #): " << endl;
    const int max = 1000;
    char str[max];
    cin.get(str, max, '#');
    fstream txt_out;
    txt_out.open("verse.txt", ios::out);
    txt_out << str;
    txt_out.close();
    
}


//ControlTest2

int*  srt(const int n, int arr[])
{
    
    int *a ;
    a = arr;
    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            min = (a[j] < a[min]) ? j : min;
        }
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }


    return a;

}

void controlTest2()
{
    const int n = 10;
    int arr[n];
    fstream txt_out;
    txt_out.open("mass.txt", ios::out);
    cout << "Введите через пробел 10 элементов массива" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        (i < (n-1)) ? txt_out << arr[i] << ", " : txt_out << arr[i] << endl;
    }
    srt(n, arr);

    for (int i = 0; i < n; i++)
    {
        (i < (n - 1)) ? txt_out << arr[i] << ", " : txt_out << arr[i] << endl;
    }
}

int main()
{
    system("chcp 1251");
    //ex1();
    controlTest2();
}

