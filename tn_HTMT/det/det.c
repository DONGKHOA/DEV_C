#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void enter(int arr[100][100], int);
int det(int arr[100][100], int);
int *delete_col_row(int arr[100][100], int, int);

int main()
{
    int arr[100][100];
    int m;
    printf("enter m: ");    scanf("%d", &m);
    printf("Enter matrix: ");
    enter(arr, m);
    printf("%d", det(arr, m));
    return 0;
}
void enter(int arr[100][100], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
}
int *delete_col_row(int arr[100][100], int a, int del)
{
    int *p;
    p = (int *)malloc((a * a) * sizeof(p));     
    int b = 0;
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j == del)
            {
                continue;
            }
            else
            {
                *(p + b) = arr[i][j];
                b++;
            }
            
        }

    }
    return p;
}
int det(int arr[100][100], int m)
{
    if (m == 1)
    {
        return arr[0][0];
    }
    else
    {
        int s = 0;
        for (int i = 0; i < m; i++)
        {
            int arr_1[100][100];
            int *p = delete_col_row(arr, m, i); //delete colum and row (0) in matrix
            int a = 0;
            for (int j = 0; j < m - 1; j++)     // convert one-dimensional array to matrix
            {
                for (int k = 0; k < m - 1; k++)
                {
                    arr_1[j][k] = *(p + a);
                    a++;
                }
                
            }
            s+=pow(-1, i + 2)*det(arr_1, m - 1)*arr[0][i]; //downgrade of the matrix to calculate det
            free(p);
        }
        return s;
    }

}