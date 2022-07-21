#pragma once
#include <iostream>
using namespace std;


class A
{
public:
	A()
	{
		sizeA = 0;
		arr = {};
	}

	A(int size)
	{
		sizeA = size;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = i;
		}
	}

	int size()const {
		int count = 0;
		for (int i = 0; i < sizeA; i++) {
			count++;
		}
		return count;
	}

	A(const A& arrForInit) {
		sizeA = arrForInit.sizeA;
		arr = new int[sizeA];
		for (int i = 0; i < sizeA; i++)
			arr[i] = arrForInit.arr[i];
	}

	A& operator=(const A& arrForInit) {
		sizeA = arrForInit.sizeA;
		arr = new int[sizeA];
		for (int i = 0; i < sizeA; i++)
			arr[i] = arrForInit.arr[i];
		return *this;
	}

	const int& operator[] (const int& index)const {
		return arr[index];
	}

private:
	int sizeA;
	int* arr;
};

