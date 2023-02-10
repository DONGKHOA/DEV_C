#include <stdio.h>
#include <string.h>

/* Information of student consists of: 
    - Full name.
    - Id.
    - Mark.
*/


// declare struct student 
struct information_student
{
    char FullName[30];
    char Id[10];
    float Mark;
};
typedef struct information_student InformationStudent;

void Enter_information_student(InformationStudent *student)
{
    // Enter Full Name
    fflush(stdin);
    printf("Enter Full Name of student: ");
    fgets(student->FullName, sizeof(student->FullName), stdin);
    
    // Enter Id
    fflush(stdin);
    printf("Enter Id of student: ");
    fgets(student->Id, sizeof(student->Id), stdin);

    // Enter Mark
    printf("Enter Mark of student: ");
    scanf("%f",&student->Mark);
}
void Display_information_student(InformationStudent *student)
{
    // Display Full Name
    printf("Full Name of student: ");
    puts(student->FullName);
    
    // Display Id
    printf("Id of student: ");
    puts(student->Id);

    // Enter Mark
    printf("Mark of student: %f", student->Mark);
}

int main()
{
    InformationStudent x;
    printf("\n\n\t ENTER INFORMATION OF STUDENT x\n");
    Enter_information_student(&x);
    printf("\n\n\t INFORMATION OF STUDENT x\n");
    Display_information_student(&x);
    return 0;
}