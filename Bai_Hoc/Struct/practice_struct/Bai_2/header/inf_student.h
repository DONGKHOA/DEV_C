#ifndef inf_student
#define inf_student
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "..\resource\inf_student.c"

// decline function
struct Student
{
    char Id[20];
    char Full_Name[30];
    float Score_Math;
    float Score_Physics;
    float Score_Chemistry;
};

typedef struct Student student;

void Enter_information_student(student *student);

void Display_information_student(student *student);

#endif