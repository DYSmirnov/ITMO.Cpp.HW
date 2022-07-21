#pragma once
#include <string>

using namespace std;

class IdCard
{
public:
	IdCard();
	IdCard(int);
	IdCard(int, string);
	void setNumber(int);
	int getNumber();
	void setCategory(string);
	string getCategory();
private:
	int number;
	string category;
};

