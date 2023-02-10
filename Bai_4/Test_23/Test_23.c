#include <stdio.h>
#define length 50

void Enter(int a[][length], int b[][length], int m, int n, int k)
{
    printf("Enter matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("\nEnter matrix B\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
        
    }
}
void Display (int C[][length], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void Multiply(int a[][length], int b[][length], int m, int n, int k)
{
    int C[][length] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int l = 0; l < n; l++)
            {
                C[i][l] += a[i][l]*b[l][j];
            }
            
        }
        
    }
    Display(C, m, k);
}
int main()
{
    int m, n, k;
    do
    {
        printf("Enter m, n, k > 0: ");
        scanf("%d%d%d", &m, &n, &k);
    } while (m <=0 && n <=0 && k <= 0);
    int A[m][n];
    int B[m][n];
    Enter(A, B, m, n, k);
    printf("A = \n");    Display(A, m, n);
    printf("B = \n");   Display(B, n, k);
    printf("C = \n");   Multiply(A, B, m, n, k);
    return 0;
}