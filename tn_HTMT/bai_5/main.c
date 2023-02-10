#include <stdio.h>
#include <stdlib.h>

void Input_matrix(int *, int, int);
void Output_matrix(int *, int, int);
void Solution(int *, int, int);

int main()
{
    int *matrix, row, col;
    printf("Input row: ");  scanf("%d",&row);
    printf("Input col: ");  scanf("%d",&col);
    matrix = (int *)malloc(row*col*sizeof(matrix));
    printf("Input matrix: ");
    Input_matrix(matrix, row, col);
    printf("Matrix: \n");
    Output_matrix(matrix, row, col);
    free(matrix);
    return 0;
}

void Input_matrix(int *matrix, int row, int col)
{
    int temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&temp);
            *(matrix + i*row + j) = temp;
        }
        
    }
    
}

void Output_matrix(int *matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d",*(matrix + i*row + j));
        }
        printf("\n");
    }
    
}

void Solution(int *matrix, int row, int col)
{
    int *max;
    max = (int *)malloc(row*sizeof(max));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
        }
        
    }
    
}