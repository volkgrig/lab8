#pragma once
#include <iostream>
using namespace std;

struct Student
{
	string fio;
	int group;
	int nrb;
	int* marks = new int[4];
};