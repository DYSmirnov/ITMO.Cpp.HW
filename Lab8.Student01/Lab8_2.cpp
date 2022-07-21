#include "student.h"
#include <string>
#include <iostream>
#include <fstream>


using namespace std;

int sum(int arr[])
{
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{

		sum += arr[i];
	}
	return sum;
}
int main()
{

#pragma region Lab10

	IdCard idc(123, "Base");
	string name, last_name;
	int scores[5];
	int sum = 0;

	cout << "Name: " << endl;
	getline(cin, name);
	cout << "Last Name: " << endl;
	getline(cin, last_name);
	Student* student01 = new Student(name, last_name, &idc);
	
	cout << "IdCard: " << student01->getIdCard().getNumber() << endl;
	cout << "Category: " << student01->getIdCard().getCategory() << endl;

	delete student01;

#pragma endregion

/*
#pragma region lab9
	system("chcp 1251");

	Student* student1 = new Student("Василий", "Федоров");
	int score1[] = { 8,4,5,3,3 };
	Student* student2 = new Student("Иван", "Сидоров");
	int score2[] = { 5,5,3,4,5 };
	Student* student3 = new Student("Андрей", "Иванов");
	int score3[] = { 5,3,3,3,3 };
	try
	{
		student1->set_scores(score1);
		student1->set_average_score((sum(score1)) / 5.0);
		student2->set_scores(score2);
		student2->set_average_score((sum(score2)) / 5.0);
		student3->set_scores(score3);
		student3->set_average_score((sum(score3)) / 5.0);
	}
	catch (Student::ExScore& ex)
	{
		cout << "\nОшибка инициализации " << ex.origin;
		cout << "\nВведенное значение оценки " << ex.inValue << " является недопустимым\n";
	}

	cout << student1->get_average_score();
#pragma endregion

	delete student1;
	delete student2;
	delete student3;

#pragma endregion
	*/
	/*
#pragma region 8.2
	Student student01;
	string name;
	string last_name;
	int scores[5];
	int sum = 0;

	cout << "Name: " << endl;
	getline(cin, name);
	cout << "Last Name: " << endl;
	getline(cin, last_name);

	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}

	student01.set_name(name);
	student01.set_last_name(last_name);
	student01.set_scores(scores);
	student01.set_average_score(sum / 5.0);

	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;

#pragma endregion


#pragma region 8.3

	Student* student02 = new Student();
	string name;
	string last_name;
	int scores[5];
	int sum = 0;

	cout << "Name: " << endl;
	getline(cin, name);
	cout << "Last Name: " << endl;
	getline(cin, last_name);

	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}

	student02->set_name(name);
	student02->set_last_name(last_name);
	student02->set_scores(scores);
	student02->set_average_score(sum / 5.0);

	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;

	delete student02;

#pragma endregion


#pragma region 8.4

	string name = "Ivan";
	string last_name = "Ivanov";
	int scores[5];
	int sum = 0;

	Student* student = new Student(name, last_name);

	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}

	student->set_scores(scores);
	student->set_average_score(sum / 5.0);

	cout << "Average ball for " << student->get_name() << " "
		<< student->get_last_name() << " is "
		<< student->get_average_score() << endl;

	delete student;

#pragma endregion


#pragma region 8.5
	system("chcp 1251");

	Student* student1 = new Student("Василий", "Федоров");
	int score1[] = { 8,4,5,3,3};
	Student* student2 = new Student("Иван", "Сидоров");
	int score2[] = { 5,5,3,4,5};
	Student* student3 = new Student("Андрей", "Иванов");
	int score3[] = { 5,3,3,3,3};
	*/







	return 0;
}