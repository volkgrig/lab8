/* Sort.h*/
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


bool isForSortGroupUpToDown(Student student1, Student student2);
bool isForSortGroupDownToUp(Student student1, Student student2);
void Sort_by_group_up_to_down();
void Sort_by_group_down_to_up();
void Sort_by_group();


bool isForSortNumberOfRecordBookUpToDown(Student student1, Student student2);
bool isForSortNumberOfRecordBookDownToUp(Student student1, Student student2);
void Sort_by_number_of_record_book_up_to_down();
void Sort_by_number_of_record_book_down_to_up();
void Sort_by_number_of_record_book();


bool isForSortMarksUpToDown(Student student1, Student student2);
bool isForSortMarksDownToUp(Student student1, Student student2);
void Sort_by_marks_up_to_down();
void Sort_by_marks_down_to_up();
void Sort_by_marks();


bool isForSortFioUpToDown(Student student1, Student student2);
bool isForSortFioDownToUp(Student student1, Student student2);
void Sort_by_fio_up_to_down();
void Sort_by_fio_down_to_up();
void Sort_by_fio();