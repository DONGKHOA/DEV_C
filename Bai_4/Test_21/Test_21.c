#include <stdio.h> 

void Enter(int arr[50][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ",i, j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
}
void Display(int arr[50][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void Transpose(int arr[50][50], int m, int n)
{
    int b[50][50];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = arr[j][i];
        }
  
    }
    Display(b, m ,n);
}
int main ()
{
    int m, n;
    do
    {
        printf("Enter m,n >0 :");
        scanf("%d%d",&m, &n);
    } while (m <= 0 && n <=0);
    int arr[m][n];
    Enter(arr, m, n);
    Display(arr, m, n);
    Transpose(arr, m, n);
    return 0;
}