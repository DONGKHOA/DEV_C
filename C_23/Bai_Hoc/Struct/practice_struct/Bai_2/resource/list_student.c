#include "..\header\list_student.h"

// define function

void Enter_information_list_student(list_student *list_student)
{
    for (int i = 0; i < list_student->n ; i++)
    {
        printf("\t\t Enter information student: \n");
        Enter_information_student(list_student->list[i]);
    }
    
}


void Display_information_list_student(list_student *list_student)
{
    for (int i = 0; i < list_student->n; i++)
    {
        printf("\t\t Information student %d: \n", i);
        Display_information_student(list_student);
    }
    
}
