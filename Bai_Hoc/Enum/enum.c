#include <stdio.h>

struct test
{
    int i;
    int a;
};
typedef struct test Test;

int main()
{
    Test x;
    scanf("%d%d", &x.i, &x.a);
    printf("%d %d", x.i, x.a);
    return 0;
    
}