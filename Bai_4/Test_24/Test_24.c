#include <stdio.h>
#include <math.h>
#define length 50

void Enter (int A[length][length], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        
    }
    printf("\n");
}
void det(int A[length][length], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
        }
        
    }
    
}
int main()
{
    int m;
    do
    {
        printf("Enter m > 0: ");
        scanf("%d",&m);
    } while (m <= 0);
    int A[m][m];
    Enter(A, m);
    return 0;
}