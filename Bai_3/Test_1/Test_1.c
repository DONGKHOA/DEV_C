#include<stdio.h>

int main()
{
    int m, n;
    printf("Enter m, n: ");
    scanf("%d%d",&m,&n);
    for (int i = 1; i <=m; i++)
    {
        for (int i = 1; i <=n; i++)
        {
            printf("%3d",i);
        }
        printf("\n");
    }

    return 0;
}