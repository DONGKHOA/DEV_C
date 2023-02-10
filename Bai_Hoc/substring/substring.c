#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *substring(char *, int , int);
void delete_newline(char *);

int main()
{
    char string[100];
    printf("Input string: ");
    fgets(string, sizeof(string), stdin);
    delete_newline(string);
    char *p;
    int position, length;
    printf("Enter the position and length of substring: ");
    scanf("%d%d", &position, &length);
    p = substring(string, position, length);
    puts(p);
    free(p);
    return 0;
}

void delete_newline(char *string)
{
    size_t length = strlen(string);
    if (string[length - 1] == '\n')
    {
        string[length - 1] = '\0';
    }
    
}
char *substring(char *string, int position, int length)
{
    char *p;
    int i;
    p = (char *)malloc(length + 1);
    if (p == NULL)
    {
      printf("Unable to allocate memory.\n");
      exit(1);
    }
    
    for ( i = 0; i < length; i++)
    {
        *(p + i) = *(string + position);
        string++;
    }
    *(p + i) = '\0';
    return p;
}