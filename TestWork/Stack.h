#pragma once
#include <iostream>

class Stack
{
public:
	int arrStack[10];
	int size = 0;
	Stack() {}
	void reset() 
	{
		for (int i = 0; i < 10; i++)
			arrStack[i] = 0;
		size = 0;
	}

	bool push(int num)
	{
		if (size == 10) return false;
		arrStack[size] = num;
		size++;
		return true;
	}

	int pop()
	{
		if (size == 0)
		{
			std::cout << "В стеке ещё ничего нет" << std::endl;
			return 0;
		}
		int n = arrStack[size - 1];
		arrStack[size - 1] = 0;
		size--;
		return n;
	}

	void print()
	{
		if (size == 0)
			std::cout << "В стеке ещё ничего нет" << std::endl;
		
		for (int i = 0; i < size; i++)
			std::cout << arrStack[i] << " ";
		std::cout << std::endl;
	}
};

