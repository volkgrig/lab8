/* Search.h */
#pragma once
#include <list>
#include "Student.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
using namespace std;

extern list <Student> student_list;

void Search_by_group();
void Search_by_number_of_record_book();
void Search_by_marks();
void Search_by_fio();