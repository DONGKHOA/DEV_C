#ifndef character
#define character
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "..\resource\character.c"

// decline function
void Standardized_String(char *str);

void delete_newline(char *str);

char *Last_Word_string(char *str);


#endif