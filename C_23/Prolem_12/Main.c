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
}
void DELETE_matrix(matrix_t *a, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a->matrix[i][j] = 0;
        }
    }
}

void INPUT_data(matrix_t *a, matrix_t *b)
{
    // input data of matrix A
    printf("Input the number of row of matrix A: "); scanf("%d", &a->row);
    printf("Input the number of colum of matrix A: "); scanf("%d", &a->col);
    printf("Input matrix A: ");
    INPUT_matrix(a, a->row, a->col);
    // input data of matrix B
    printf("Input the number of row of matrix B: "); scanf("%d", &b->row);
    printf("Input the number of colum of matrix B: "); scanf("%d", &b->col);
    printf("Input matrix B: ");
    INPUT_matrix(b, b->row, b->col);
}
void SUM_matrix(matrix_t *a, matrix_t *b)
{
    matrix_t c;
    if ((a->col == b->col) && (a->row == b->col))
    {
        for (int i = 0; i < a->row; i++)
        {
            for (int j = 0; j < a->col; j++)
            {
                c.matrix[i][j] = a->matrix[i][j] + b->matrix[i][j];
            }
            
        }
        printf("Matrix Sum:\n");
        OUTPUT_matrix(&c, a->row, a->col);
    }
    else
    {
        printf("Matrix Sum: Math Error!!!");
    }
}
void SUBTRACTION_matrix(matrix_t *a, matrix_t *b)
{
    matrix_t c;
    if ((a->col == b->col) && (a->row == b->col))
    {
        for (int i = 0; i < a->row; i++)
        {
            for (int j = 0; j < a->col; j++)
            {
                c.matrix[i][j] = a->matrix[i][j] - b->matrix[i][j];
            }
        }
        printf("Matrix Subtraction:\n");
        OUTPUT_matrix(&c, a->row, a->col);
    }
    else
    {
        printf("Matrix Subtraction: Math Error!!!");
    }
}
void MULTIPLICATION_matrix(matrix_t *a, matrix_t *b)
{
    matrix_t c;
    if (a->col == b->row)
    {
        DELETE_matrix(&c, b->row, a->col);
        for (int i = 0; i < a->row; i++)
        {
            for (int j = 0; j < b->col; j++)
            {
                for (int k = 0; k < a->col; k++)
                {
                    c.matrix[i][j] += a->matrix[i][k]*b->matrix[k][i];
                }
            }
        }
        printf("Matrix Multiplication:\n");
        OUTPUT_matrix(&c, a->row, b->col);
    }
    else
    {
        printf("Matrix Multiplication: Math Error!!!");
    }
}

int main()
{
    matrix_t A;
    matrix_t B;
    INPUT_data(&A, &B);
    SUM_matrix(&A, &B);
    SUBTRACTION_matrix(&A, &B);
    MULTIPLICATION_matrix(&A, &B);
    return 0;
}