/* Sort.cpp*/
#include "Sort.h"


bool isForSortGroupUpToDown(Student student1, Student student2){
	return student1.group > student2.group;
}


bool isForSortGroupDownToUp(Student student1, Student student2) {
	return student1.group < student2.group;
}


void Sort_by_group_up_to_down() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortGroupUpToDown);
	Show_all();
}


void Sort_by_group_down_to_up() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortGroupDownToUp);
	Show_all();
}


void Sort_by_group() {
	system("cls");
	cout << "1. Up to down   \n" <<
		"2. Down to up   \n" <<
		"3. Exit         \n";
	int n;
	cin >> n;
	switch (n) {
	case 1: Sort_by_group_up_to_down();
	case 2: Sort_by_group_down_to_up();
	case 3: {system("cls"); break; }
	default: Sort_by_group();
	}
}


bool isForSortNumberOfRecordBookUpToDown(Student student1, Student student2) {
	return student1.nrb > student2.nrb;
}


bool isForSortNumberOfRecordBookDownToUp(Student student1, Student student2) {
	return student1.nrb < student2.nrb;
}


void Sort_by_number_of_record_book_up_to_down() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortNumberOfRecordBookUpToDown);
	Show_all();
}


void Sort_by_number_of_record_book_down_to_up() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortNumberOfRecordBookDownToUp);
	Show_all();
}


void Sort_by_number_of_record_book(){
	system("cls");
	cout << "1. Up to down   \n" <<
		"2. Down to up   \n" <<
		"3. Exit         \n";
	int n;
	cin >> n;
	switch (n) {
	case 1: Sort_by_number_of_record_book_up_to_down();
	case 2: Sort_by_number_of_record_book_down_to_up();
	case 3: {system("cls"); break; }
	default: Sort_by_number_of_record_book();
	}
}


bool isForSortMarksUpToDown(Student student1, Student student2) {
	int* a = new int[4];
	int* b = new int[4];
	a = student1.marks;
	b = student2.marks;
	int flag = 1;
	for (int i = 0; i < 4; i++) {
		if (a[i] < b[i]) {
			flag = 0;
		}
	}
	return flag;
}


bool isForSortMarksDownToUp(Student student1, Student student2) {
	int* a = new int[4];
	int* b = new int[4];
	a = student1.marks;
	b = student2.marks;
	int flag = 1;
	for (int i = 0; i < 4; i++) {
		if (a[i] > b[i]) {
			flag = 0;
		}
	}
	return flag;
}


void Sort_by_marks_up_to_down() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortMarksUpToDown);
	Show_all();
}


void Sort_by_marks_down_to_up() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortMarksDownToUp);
	Show_all();
}


void Sort_by_marks(){
	system("cls");
	cout << "1. Up to down   \n" <<
		"2. Down to up   \n" <<
		"3. Exit         \n";
	int n;
	cin >> n;
	switch (n) {
	case 1: Sort_by_marks_up_to_down();
	case 2: Sort_by_marks_down_to_up();
	case 3: {system("cls"); break; }
	default: Sort_by_marks();
	}
}


bool isForSortFioUpToDown(Student student1, Student student2) {
	return student1.fio > student2.fio;
}


bool isForSortFioDownToUp(Student student1, Student student2) {
	return student1.fio< student2.fio;
}


void Sort_by_fio_up_to_down() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortFioUpToDown);
	Show_all();
}


void Sort_by_fio_down_to_up() {
	system("cls");
	list <Student>::iterator iter;
	student_list.sort(isForSortFioDownToUp);
	Show_all();
}


void Sort_by_fio() {
	system("cls");
	cout << "1. Up to down   \n" <<
		"2. Down to up   \n" <<
		"3. Exit         \n";
	int n;
	cin >> n;
	switch (n) {
	case 1: Sort_by_fio_up_to_down();
	case 2: Sort_by_fio_down_to_up();
	case 3: {system("cls"); break; }
	default: Sort_by_fio();
	}
}