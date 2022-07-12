#include "student.h"
#include <string>
#include <iostream>
#include <fstream>
#include <numeric>

using namespace std;


int main()
{
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
	
	Student* student02 = new Student;
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
*/

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


	Student* student1 = new Student("Василий", "Федоров");
	int score1[] = { 5,4,5,3,3};
	Student* student2 = new Student("Иван", "Сидоров");
	int score2[] = { 5,5,3,4,5};
	Student* student3 = new Student("Андрей", "Иванов");
	int score3[] = { 5,3,3,3,3};



	student1->set_scores(score1);
	student1->set_average_score((accumulate(begin(score1), end(score1), 0, plus<int>())) / 5.0);
	student2->set_scores(score2);
	student2->set_average_score((accumulate(begin(score2), end(score2), 0, plus<int>())) / 5.0);
	student3->set_scores(score3);
	student3->set_average_score((accumulate(begin(score3), end(score3), 0, plus<int>())) / 5.0);


	delete student1;
	delete student2;
	delete student3;

#pragma endregion

	return 0;
}