/* lab82.cpp */
#include <iostream>
#include "pch.h"
#include "Student.h"
#include "Add_new_student_default.h"
#include "Add_new_student_default.cpp"
#include "Show_all.h"
#include "Show_all.cpp"
#include "Add_new_student.h"
#include "Add_new_student.cpp"
#include "Search.h"
#include "Search.cpp"
#include "Sort.h"
#include "Sort.cpp"
#include "Create_new_list.h"
#include "Create_new_list.cpp"
#include <string>
#include <list>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

extern list <Student> student_list;


list <Student> start() {
	int n;
	n = 11;
	list <Student> new_created_list;
	while (n != 10) {
		cout <<
			"    Enter number:    \n" <<
			"0.  Show   all   students  \n" <<
			"1.  Add    new   students  \n" <<
			"2.  Search by group  \n" <<
			"3.  Search by number of record book  \n" <<
			"4.  Search by marks  \n" <<
			"5.  Search by fio    \n" <<
			"6.  Sort   by group  \n" <<
			"7.  Sort   by number of record book  \n" <<
			"8.  Sort   by marks  \n" <<
			"9.  Sort   by fio    \n" <<
			"10. Create new list  \n" <<
			"11. Exit             \n";
		cin >> n;
		switch (n) {
		case 0:  {Show_all();                         continue; }
		case 1:  {Add_new_student();                  continue; }
		case 2:  {Search_by_group();                  continue; }
		case 3:  {Search_by_number_of_record_book();  continue; }
		case 4:  {Search_by_marks();                  continue; }
		case 5:  {Search_by_fio();                    continue; }
		case 6:  {Sort_by_group();                    continue; }
		case 7:  {Sort_by_number_of_record_book();    continue; }
		case 8:  {Sort_by_marks();                    continue; }
		case 9:  {Sort_by_fio();                      continue; }
		case 10: {new_created_list=Create_new_list(); continue; }
		case 11: {system("cls");                      break;    }
		default: system("cls");
		}
	}
	return new_created_list;
}


int main()
{
	Student student;
	Add_new_student_default();
	Show_all();
	list <Student> new_list;
	new_list =start();
	int* markss = new int[4];
	int flag = 1;
	for (auto pos : new_list) {
		if (flag) {
			flag = 0;
			cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
		}
		markss = pos.marks;
		cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
	}
	system("pause");
	system("cls");
	Show_all();
	cout << "\n \n dewa mata  \n \n";
	system("pause");
}

