//          POINTER

#include <stdio.h>

int main()
{
    int a = 255;
    int *ptr=&a;
    printf("\nDia chi cua bien a: %x",&a);
    printf("\nGia tri chua trong con tro ptr: %x",ptr);

    printf("\nGia tri cua bien a = %d",*ptr);
    return 0;
}