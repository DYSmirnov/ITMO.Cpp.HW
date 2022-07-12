// Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

void ex1()
{
    std::cout << "-----ex1-----" << std::endl;
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "mas[" << i << "]=";
        std::cin >> mas[i];
    }

    int s = 0, s_pos = 0, s_neg = 0;
    double avg_mas = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    std::cout << "Сумма массива = " << s << std::endl;
    avg_mas = s / n;
    std::cout << "Среднее массива = " << avg_mas << std::endl;
}

void ex2()
{
    std::cout << "-----ex2-----" << std::endl;
    const int n = 10;
    int a[n] =
    { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
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

    for (int i : a)
        std::cout << i << '\t';
    {

    }

}

void show_array(const int[], const int);
bool from_min(const int, const int);
bool from_max(const int, const int);

void bubble_sort(int arr[], const int n, bool (*compare)(int a, int b))
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if ((*compare)(arr[j], arr[j + 1])) std::swap(arr[j], arr[j + 1]);
        }
    }
}

#pragma region Ex3
void ex3()
{
    std::cout << "-----ex3-----" << std::endl;
    bool (*from_f[2])(int, int) = { from_min, from_max };
    const int n = 10;
    int my_choose = 0;
    int a[n] =
    { 9,8,7,6,1,2,3,5,4,9 };
    std::cout << "1. Сортировать по возростанию  \n";
    std::cout << "2. Сортировать по  убыванию \n";
    std::cin >> my_choose;
    std::cout << "Исходные данные: ";
    show_array(a, n);
   /* switch (my_choose)
    {
    case 1: bubble_sort(a, n, from_min); break;
    case 2: bubble_sort(a, n, from_max); break;
    default: std::cout << "\r Неизвестная операция ";
    }*/
    bubble_sort(a, n, (*from_f[my_choose - 1]));
    show_array(a, n);
}

void show_array(const int arr[], const int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << "  ";
    std::cout << std::endl;
}

bool from_min (const int a, const int b)
{
    return a > b;
}

bool from_max(const int a, const int b)
{
    return a < b;
}
#pragma endregion

void ex4()
{
    int n;
    std::cin >> n;
    int* myArr = new int[n];
}

void ex5()
{
    srand(time(NULL));
    int a, b, c;
    int k = 0;
    const int n = 10;
    std::vector<int> v1;
    std::vector<int> v2;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        std::cout << a << "*" << b << " = ";
        std::cin >> c;
        mas[i] = c;
        if (a * b != c)
        {
            v2.push_back(c);
            k++;
        }
        else
            v1.push_back(c);

    }

    std::cout << "\n Good: ";
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << ", ";
    }
    std::cout << "\n Bad: ";
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << ", ";
    }
}


//ControlTest1
void controlTest1(int n, int arr[])
{
    std::cout << "-----Control Test 1-----" << std::endl;
    int s = 0, s_pos = 0, s_neg = 0, s_even = 0,
        s_odd = 0, index_max = 0, index_min = 0, min, max, mult = 0;
    min = max = arr[0];
    double avg_mas = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];            //Сумма всех элементов

        if(arr[i] > 0)          //Сумма положительных элементов
            s_pos += arr[i];
        else if(arr[i] < 0)      //Сумма отрицательных элементов
            s_neg += arr[i];

        if (i%2 == 0)           //Сумма элементов с четными индексами
            s_even += arr[i];
        else                   //Сумма элементов с нечетными индексами
            s_odd += arr[i];

        if (arr[i] < min)       //Индекс минимального элемента
        {
            min = arr[i];
            index_min = i;
        }
        if (arr[i] > max)       //Индекс максимального элемента
        {
            max = arr[i];
            index_max = i;
        }
    }
    int end_index = index_max > index_min ? index_max : index_min;
    int start_index = index_max < index_min ? index_max : index_min;
        std::cout << start_index << " " << end_index;
    for (int i = start_index; i <= end_index; i++)
    {
        if (i == start_index)
            mult = arr[start_index];
        else
            mult *= arr[i];
    }

    std::cout << "Сумма массива = " << s << std::endl;
    avg_mas = s*1.0 / n;
    std::cout << "Среднее массива = " << avg_mas << std::endl;
    std::cout << "Сумма отрицательных элементов = " << s_neg << std::endl;
    std::cout << "Сумма положительных элементов = " << s_pos << std::endl;
    std::cout << "Сумма элементов с нечетными индексами = " << s_odd << std::endl;
    std::cout << "Сумма элементов с четными индексами = " << s_even << std::endl;
    std::cout << "Индекс максимального элемента: " << index_max << std::endl;
    std::cout << "Индекс минимального элемента: " << index_min << std::endl;
    std::cout << "Произведение элементов между минимальным и максимальным индексом = " << mult << std::endl;
}

void controlTest1_2(int n, int arr[])
{
    std::cout << "-----controlTest1.2-----" << std::endl;
    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            min = (arr[j] < arr[min]) ? j : min;
        }
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }

    for (int i =0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << endl;
}

//controlTest2


int* max_vect(const int kc, int arr1[], int arr2[])
{
    int *result = new int[kc];
    for (int i = 0; i < kc; i++)
    {
        result[i] = (arr1[i] > arr2[i]) ? arr1[i] : arr2[i];
    }
    return result;
}

void controlTest2()
{
    std::cout << "-----controlTest2-----" << std::endl;
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
    cout <<  "До фонкции";
    int* c; //Указатель на результирующий массив
    c = max_vect(kc, a, b); //вызов функции для создания массива
    cout << "После фонкции";
    for (int i = 0; i < kc; i++) //Вывод результата.
        cout << c[i] << " ";
    cout << endl;
    delete[]c; //Возврат памяти.
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int n = 10;
    int a[n] = { 9,8,7,6,1,2,3,5,4,9 };
    controlTest1(n, a);
    controlTest1_2(n, a);
    controlTest2();
    //ex1();
    //ex2();
    //ex3();
    //ex5();
}

