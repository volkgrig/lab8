/* Search.cpp */
#include <list>
#include "Search.h"

#include "Student.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

void Search_by_group()
{
	system("cls");
	cout << "Enter number of group for search:  \n";
	int n;
	cin >> n;
	int flag = 1;
	int* markss = new int[4];
	int kol = 0;
	for (auto pos : student_list) {
		if (pos.group == n) {
			if (flag) {
				cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
				flag = 0;
			}
			kol += 1;
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	};
	if (flag) {
		cout << "No students \n";
	}
	else {
		cout << "The number of students:  " << kol << "\n";
	}
	system("pause");
	system("cls");
}


void Search_by_number_of_record_book()
{
	system("cls");
	cout << "Enter number of record book for search:  \n";
	int n;
	cin >> n;
	int flag = 1;
	int* markss = new int[4];
	int kol = 0;
	for (auto pos : student_list) {
		if (pos.nrb == n) {
			if (flag) {
				cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
				flag = 0;
			}
			kol += 1;
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	};
	if (flag) {
		cout << "No students \n";
	}
	else {
		cout << "The number of students:  " << kol << "\n";
	}
	system("pause");
	system("cls");
}


void Search_by_marks()
{
	system("cls");
	cout << "Enter marks for search:  \n";
	int* markss = new int[4];
	int marks[4];
	for (int i = 0; i < 4; i++) {
		cin >> marks[i];
	}
	int kol = 0;
	int flag = 1;
	for (auto pos : student_list) {
		markss = pos.marks;
		int flagmark = 1;
		for (int i = 0; i < 4; i++) {
			if (marks[i] != markss[i]) {
				flagmark = 0;
			}
		}
		if (flagmark) {
			if (flag) {
				cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
				flag = 0;
			}
			kol += 1;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	};
	if (flag) {
		cout << "No students \n";
	}
	else {
		cout << "The number of students:  " << kol << "\n";
	}
	system("pause");
	system("cls");
}


void Search_by_fio()
{
	system("cls");
	cout << "Enter fio for search:  \n";
	string s;
	cin.ignore();
	getline(cin, s);
	int flag = 1;
	string s2;
	int* markss = new int[4];
	int kol = 0;
	for (auto pos : student_list) {
		s2 = pos.fio;
		int flagcheck = 1;
		int len1 = 0, len2 = 0;
		for (auto pos2 : s) { len1++; };
		for (auto pos2 : s2) { len2++; };
		if (len1 == len2) {
			for (int i = 0; i < len1; i++) {
				if (s[i] != s2[i]) {
					flagcheck = 0;
					break;
				}
			}
		}
		else {
			flagcheck = 0;
		}

		if (flagcheck) {
			if (flag) {
				cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
				flag = 0;
			}
			kol += 1;
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	};
	if (flag) {
		cout << "No students \n";
	}
	else {
		cout << "The number of students:  " << kol << "\n";
	}
	system("pause");
	system("cls");
}
