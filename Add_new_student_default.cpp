/* Add_new_student_default.h */
#include "Add_new_student_default.h"


void Add_new_student_default() {
	system("cls");
	int* a = new int[4];
	Student student;
	student.fio = "AIgor Rol";
	student.group = 4;
	student.nrb = 100;
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	student.marks = a;
	student_list.push_back(student);
	int* aa = new int[4];
	student.fio = "BStas Davydov";
	student.group = 3;
	student.nrb = 200;
	aa[0] = 5;
	aa[1] = 6;
	aa[2] = 7;
	aa[3] = 8;
	student.marks = aa;
	student_list.push_back(student);
	int* aaa = new int[4];
	student.fio = "CDan Roor";
	student.group = 2;
	student.nrb = 300;
	aaa[0] = 9;
	aaa[1] = 10;
	aaa[2] = 11;
	aaa[3] = 12;
	student.marks = aaa;
	student_list.push_back(student);
	int* aaaa = new int[4];
	student.fio = "Dan Antonov";
	student.group = 1;
	student.nrb = 400;
	aaaa[0] = 13;
	aaaa[1] = 14;
	aaaa[2] = 15;
	aaaa[3] = 16;
	student.marks = aaaa;
	student_list.push_back(student);
}