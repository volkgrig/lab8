/* Start.cpp */
#include <list>
#include "Start.h"
#include "Search.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;


void start() {
	int n;
	n = 11;
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
			"10. Exit             \n";
		cin >> n;
		switch (n) {
		case 0: {Show_all();                        continue; }
		case 1: {Add_new_student();                 continue; }
		case 2: {Search_by_group();                 continue; }
		case 3: {Search_by_number_of_record_book(); continue; }
		case 4: {Search_by_marks();                 continue; }
		case 5: {Search_by_fio();                   continue; }
				/*case 6:Sort   by group
				case 7:Sort   by number of record book
				case 8:Sort   by marks
				case 9: Sort   by fio*/
		case 10: {
			system("cls");
			break;
		}
		}
	}
	cout << "Bye  \n";
	return;
}
