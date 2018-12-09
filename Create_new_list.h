/* Create_new_list.h */
#pragma once
#include <list>
#include "Student.h"
#include "Show_all.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

extern list <Student> student_list;

int Create_new_list_per_fio();
int Create_new_list_per_group();
int Create_new_list_per_nrb();
int Create_new_list_per_marks();
int Create_new_list();