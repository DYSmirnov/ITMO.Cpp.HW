#include <iostream>
#include <fstream>

using namespace std;

void ex1_write()
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
}