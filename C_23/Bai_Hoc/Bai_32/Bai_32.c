#include <stdio.h>
#include <string.h>
 
int main()
{
    int age;
    char name[30];
    printf("Enter age: ");
    scanf("%d",&age);
    fflush(stdin);
    // getchar();
    printf("Enter name: ");
    fgets(name, sizeof name, stdin);
    printf("%s - %d",name, age);
    return 0;
}