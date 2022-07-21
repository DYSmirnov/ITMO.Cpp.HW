#include "IdCard.h"


IdCard::IdCard() : number(0), category("Не установлена") {}
IdCard::IdCard(int n) : number(n), category("Не установлена") {}
IdCard::IdCard(int n, string cat) : number(n), category(cat) {}
void IdCard::setNumber(int n)
{
	IdCard::number = n;
}
int IdCard::getNumber()
{
	return IdCard::number;
}
void IdCard::setCategory(string cat)
{
	IdCard::category = cat;
}
string IdCard::getCategory()
{
	return IdCard::category;
}