#include "..\header\character.h"
// #include "..\header\inf_student.h"
// #include "..\header\list_student.h"

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *str_t;
    str_t = Last_Word_string(str);
    puts(str_t);
    free(str_t);
    return 0;
}