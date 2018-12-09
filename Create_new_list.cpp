/* Create_new_list.cpp */
#include "Create_new_list.h"

int Create_new_list_per_fio() {
	system("cls");
	Student student;
	list <Student> student_fio_list;
	cout << "Enter fio:  \n";
	string s, s2;
	cin.ignore();
	getline(cin, s);
	int flag = 1;
	int* markss = new int[4];
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
			flag = 0;
			student.fio   = pos.fio;
			student.group = pos.group;
			student.nrb   = pos.nrb;
			student.marks = pos.marks;
			student_fio_list.push_back(student);
		}
	}
	if (flag) {
		system("cls");
		cout << "No students \n";
	}
	else {
		system("cls");
		cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
		for (auto pos : student_fio_list) {
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	}
	system("pause");
	system("cls");
	void *r = &student_fio_list;
	int **pp = &r;
	return pp;

}


int Create_new_list_per_group(){
	system("cls");
	Student student;
	list <Student> student_group_list;
	cout << "Enter number of group:  \n";
	int n;
	cin >> n;
	int flag = 1;
	int* markss = new int[4];
	for (auto pos : student_list) {
		if (pos.group == n) {
			flag = 0;
			student.fio = pos.fio;
			student.group = pos.group;
			student.nrb = pos.nrb;
			student.marks = pos.marks;
			student_group_list.push_back(student);
		}
	};
	if (flag) {
		system("cls");
		cout << "No students \n";
	}
	else {
		system("cls");
		cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
		for (auto pos : student_group_list) {
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	}
	system("pause");
	system("cls");
	return &*student_group_list;
}


int Create_new_list_per_nrb() {
	system("cls");
	Student student;
	list <Student> student_nrb_list;
	cout << "Enter number of record book:  \n";
	int n;
	cin >> n;
	int flag = 1;
	int* markss = new int[4];
	for (auto pos : student_list) {
		if (pos.nrb == n) {
			flag = 0;
			student.fio = pos.fio;
			student.group = pos.group;
			student.nrb = pos.nrb;
			student.marks = pos.marks;
			student_nrb_list.push_back(student);
		}
	};
	if (flag) {
		system("cls");
		cout << "No students \n";
	}
	else {
		system("cls");
		cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
		for (auto pos : student_nrb_list) {
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	}
	system("pause");
	system("cls");
	return &*student_nrb_list;
}


int Create_new_list_per_marks(){
	system("cls");
	Student student;
	list <Student> student_marks_list;
	cout << "Example: \n" <<
		" 1  2  3  4  = All  marks    \n" <<
		"Example:                              \n" <<
		"-1 -1  3 -1  = Only third mark  \n \n";
	cout << "Enter marks:               \n";
	int* markss = new int[4];
	int marks[4];
	for (int i = 0; i < 4; i++) {
		cin >> marks[i];
	}
	int flag = 1;
	for (auto pos : student_list) {
		markss = pos.marks;
		int flagmark = 1;
		for (int i = 0; i < 4; i++) {
			if ((marks[i] != markss[i]) && (marks[i] != -1)) {
				flagmark = 0;
			}
		}
		if (flagmark) {
			flag = 0;
			student.fio = pos.fio;
			student.group = pos.group;
			student.nrb = pos.nrb;
			student.marks = pos.marks;
			student_marks_list.push_back(student);
		}
	};
	if (flag) {
		system("cls");
		cout << "No students \n";
	}
	else {
		system("cls");
		cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
		for (auto pos : student_marks_list) {
			markss = pos.marks;
			cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
		}
	}
	system("pause");
	system("cls");
	return &*student_marks_list;
}












int Create_new_list() {
	int n;
	n = 11;
	list <Student> p;
	while (n != 5) {
		system("cls");
		cout << "Enter number:            \n" <<
			"1. FIO                   \n" <<
			"2. Group                 \n" <<
			"3. Number of record book \n" <<
			"4. Marks                 \n" <<
			"5. Exit                  \n";
		int n;
		cin >> n;
		switch (n) {
		case 1: {p=Create_new_list_per_fio();      return p; }
		case 2: {p=Create_new_list_per_group();    return p; }
		case 3: {p=Create_new_list_per_nrb();      return p; }
		case 4: {p=Create_new_list_per_marks();    return p; }
		case 5: {system("cls");                 return;   }
		}
	}
}