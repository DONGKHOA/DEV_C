#include <stdio.h>

void volume(int *x)
{
    *x=(*x)*(*x)*(*x);
}
int main()
{
    int x = 5;
    printf("%d\n",x);
    volume(&x);
    printf("%d\n",x);
    return 0;
}