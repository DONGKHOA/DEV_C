#include "..\header\inf_student.h"

// define function

void Enter_information_student(student *student)
{
    printf("Enter ID: ");
    fgets(student->Id, sizeof(student->Id), stdin);
    fflush(stdin);

    printf("Enter full name: ");
    fgets(student->Full_Name, sizeof(student->Full_Name), stdin);
    fflush(stdin);

    printf("Enter math score: ");   scanf("%f", &student->Score_Math);
    printf("Enter physics score: ");   scanf("%f", &student->Score_Physics);
    printf("Enter chemistry score: ");   scanf("%f", &student->Score_Chemistry);

}
void Display_information_student(student *student)
{
    delete_newline(student->Full_Name);
    delete_newline(student->Id);

    Standardized_String(student->Full_Name);

    printf("Enter ID: %s\n", student->Id);
    printf("Enter full name: %s\n", student->Full_Name);
    printf("Enter math score: %.2f\n", student->Score_Math);   
    printf("Enter physics score: %.2f\n", student->Score_Physics);   
    printf("Enter chemistry score: %.2f\n", student->Score_Chemistry);   
    
}