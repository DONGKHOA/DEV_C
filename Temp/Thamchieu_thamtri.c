#include <stdio.h>

void swap_thamtri(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap_thamchieu(int *a, int *b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    printf("Enter a, b: ");
    scanf("%d%d",&a,&b);
    printf("Value a = %d , b = %d\n",a, b);
    swap_thamtri(a,b);
    printf("Sau khi tham tri a = %d, b = %d\n", a, b);
    swap_thamchieu(&a,&b);
    printf("Sau khi tham chieu a = %d, b = %d\n", a, b);
    return 0;
}