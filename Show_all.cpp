/* Show_all.cpp */
#include "Show_all.h"


void Show_all() {
	system("cls");
	int* markss = new int[4];
	cout << setw(15) << "FIO" << setw(6) << "Group" << setw(5) << "NRB" << setw(8) << "Marks 1" << setw(8) << "Marks 2" << setw(8) << "Marks 3" << setw(8) << "Marks 4" << endl;
	for (auto pos : student_list) {
		markss = pos.marks;
		cout << setw(15) << pos.fio << setw(6) << pos.group << setw(5) << pos.nrb << setw(8) << markss[0] << setw(8) << markss[1] << setw(8) << markss[2] << setw(8) << markss[3] << endl;
	}
	system("pause");
	system("cls");
}