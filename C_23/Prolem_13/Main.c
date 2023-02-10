#include <stdio.h>

typedef struct 
{
    int matrix[100][100];
    int row, col;
} matrix_t;

void INPUT_matrix(matrix_t *a, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a->matrix[i][j]);
        }
    }
}
void OUTPUT_matrix(matrix_t *a, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", a->matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void INPUT_data(matrix_t *a)
{
    // input data of matrix A
    printf("Input the number of row of matrix A: "); scanf("%d", &a->row);
    printf("Input the number of colum of matrix A: "); scanf("%d", &a->col);
    printf("Input matrix A: ");
    INPUT_matrix(a, a->row, a->col);
}
void TRANSPOSE_matrix(matrix_t *a)
{
    matrix_t b;
    for (int i = 0; i < a->col; i++)
    {
        for (int j = 0; j < a->row; j++)
        {
            b.matrix[i][j] = a->matrix[j][i];
        }
        
    }
    printf("Matrix transpose:\n");
    OUTPUT_matrix(&b, a->col, a->row);
}
int main()
{
    matrix_t A;
    INPUT_data(&A);
    printf("Matrix A:\n");
    OUTPUT_matrix(&A, A.row, A.col);
    TRANSPOSE_matrix(&A);
    return 0;
}