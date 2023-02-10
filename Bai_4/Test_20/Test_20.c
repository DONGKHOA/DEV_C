#include <stdio.h>

void Enter(int arr[50][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d] [%d] = ", i, j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
}
void Display(int arr[50][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    
}
void Min_Max_Row(int arr[50][50], int m, int n)
{
    for (int i = 0; i < m; i++) 
    {
        int min = arr[i][0];
        int max = arr[i][0];
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            
        }
        printf("Min of row %d = %d\n", i, min);
        printf("Max of row %d = %d\n", i, max);
    }
}
int main()
{
    int m, n;
    do
    {
        printf("Enter m, n: "); scanf("%d%d", &m, &n);
    } while (n <= 0 && m <= 0);
    int arr[m][n];
    Enter(arr, m, n);
    Display(arr, m, n);
    Min_Max_Row(arr, m, n);
    return 0;
}