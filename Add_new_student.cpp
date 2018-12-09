/* Add_new_student.cpp */
#include "Add_new_student.h"


void Add_new_student() {
	system("cls");
	int* a = new int[4];
	Student student;
	cout << "Enter FIO: \n";
	cin.ignore();
	getline(cin, student.fio);
	cout << "Enter number of group:       \n";
	cin >> student.group;
	cout << "Enter number of record book: \n";
	cin >> student.nrb;
	cout << "Enter four marks:            \n";
	int* marks = new int[4];
	for (int i = 0; i < 4; i++) {
		cin >> marks[i];
	}
	student.marks = marks;
	student_list.push_back(student);
	system("pause");
	system("cls");
}