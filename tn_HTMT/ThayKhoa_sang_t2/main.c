#include <stdio.h>

void Input_Matrix(int arr[100][100], int , int);
void Output_Matrix(int arr[100][100], int , int);
int Check_prime(int);
void Max_sum_prime_row(int arr[100][100], int , int);

int main()
{
    int matrix[100][100], row, col;
    printf("Enter row: ");  scanf("%d",&row);
    printf("Enter col: ");  scanf("%d",&col);
    printf("Enter matrix: \n");
    Input_Matrix(matrix, row, col);
    Output_Matrix(matrix, row, col);
    Max_sum_prime_row(matrix ,row, col);
    return 0;
}

void Input_Matrix(int arr[100][100], int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("\n");
}

void Output_Matrix(int arr[100][100], int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int Check_Prime(int a)
{
    if(a < 2) return 0;
    else
    {
        for (int i = 2; i < a; i++)
        {
            if(a%i==0) return 0;
        }
        return 1;
    }
    
}

void Max_sum_prime_row(int arr[100][100], int row, int col)
{
    int b[100];
    for (int  i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            if (Check_Prime(arr[i][j]))
            {
                sum+=arr[i][j];
            }
            
        }
        b[i] = sum;
    }
    int max = b[0];
    for (int i = 0; i < row; i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
        
    }
    if (max == 0)
    {
        printf("Matrix has no prime.\n");
    }
    else
    {
        for (int i = 0; i < row; i++)
        {
            if (max == b[i])
            {
                for (int j = 0; j < col; j++)
                {
                    printf("%5d",arr[i][j]);
                }
                printf("\n");
            }
            
        }
        
    }

}