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

list <Student> Create_new_list_per_fio();
list <Student> Create_new_list_per_group();
list <Student> Create_new_list_per_nrb();
list <Student> Create_new_list_per_marks();
list <Student> Create_new_list();