// lab82.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "pch.h"
#include "Student.h"
#include "Search.h"
#include "Search.cpp"
#include <string>
#include <list>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

extern list <Student> student_list;// 


void Show_all() {
	system("cls");
	int* markss = new int[4];
	cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
	for (auto pos : student_list) {
			markss = pos.marks;
			cout <<setw(15)<< pos.fio<<setw(6)<<pos.group << setw(5)<<pos.nrb<< setw(8)<<markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] <<  endl;
	}
	system("pause");
	system("cls");
}


void Add_new_student() {
	system("cls");
	int* a = new int[4];
	Student student;
	for (int i = 0; i < 5; i++)
	{
		cout << "I=" << i;
		student.fio = 'A'+i;
		student.group = rand() % 10+i-1;
		student.nrb = rand() % 10;
		for (int ii = 0; ii < 4; ii++) {
			a[ii] = rand() % 10+i+ii;
		}
		student.marks = a;
		student_list.push_back(student);
	}
}


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



int main()
{
	Student student;
	Add_new_student();
	Show_all();
	start(); 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
