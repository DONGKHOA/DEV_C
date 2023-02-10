#include <stdio.h>
#define length 50

void Enter(int A[length][length], int B[length][length], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ",i, j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("B[%d][%d] = ",i, j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
}
void Display(int arr[length][length], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void Sum(int A[length][length], int B[length][length], int m, int n)
{
    int Sum[length][length];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
        
    }
    printf("Sum = \n");
    Display(Sum, m, n);
}
int main()
{
    int m, n;
    do
    {
        printf("Enter m, n > 0: ");
        scanf("%d%d",&m,&n);
    } while (m <= 0 && n <=0);
    int A[length][length];
    int B[length][length];
    Enter(A, B, m, n);
    printf("A = \n");   Display(A, m, n);
    printf("B = \n");   Display(B, m, n);
    Sum(A, B, m, n);
    printf("0");
    return 0;
}