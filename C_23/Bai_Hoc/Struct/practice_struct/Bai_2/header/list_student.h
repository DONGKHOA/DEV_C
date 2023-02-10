#ifndef LIST_STUDENT
#define LIST_STUDENT
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <inf_student.h>
#include "..\resource\list_student.c"

// decline function
struct list_student
{
    student list[100];
    int n;
};

typedef struct list_student list_student;

typedef struct Student student;

void Enter_information_student(student *student);

void Display_information_student(student *student);

#endif