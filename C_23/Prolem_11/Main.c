#include <stdio.h>

typedef struct 
{
    int Re, Im;
} complex_number_t;
void INPUT_data(complex_number_t *a, complex_number_t *b)
{
    //input data of first number
    printf("Input real numbers of first number: ");   scanf("%d", &a->Re);
    printf("Input imaginary numbers of first number: ");   scanf("%d", &a->Im);

    //input data of second number
    printf("Input real numbers of second number: ");   scanf("%d", &b->Re);
    printf("Input imaginary numbers of second number: ");   scanf("%d", &b->Im);
}
void SUM(complex_number_t *a, complex_number_t *b)
{
    //component real
    printf("%d", a->Re + b->Re);
    //component imaginary
    if ( (a->Im + b->Im) > 0)  printf("+%di\n",a->Im + b->Im);
    else                    printf("%di\n",a->Im + b->Im);
    
}
void SUBTRACTION(complex_number_t *a, complex_number_t *b)
{
    //component real
    printf("%d", a->Re - b->Re);
    //component imaginary
    if ( (a->Im + b->Im) > 0)  printf("+%di\n",a->Im - b->Im);
    else                    printf("%di\n",a->Im - b->Im);
}
void MULTIPLICATION(complex_number_t *a, complex_number_t *b)
{
    //component real
    printf("%d", a->Re * b->Re - a->Im * b->Im);
    //component imaginary
    if ( (a->Re * b->Im + a->Im * b->Re) > 0)  printf("+%di\n",a->Re * b->Im + a->Im * b->Re);
    else                    printf("%di\n",a->Re * b->Im + a->Im * b->Re);
}

int main()
{
    complex_number_t a;
    complex_number_t b;
    INPUT_data(&a, &b);
    SUM(&a, &b);
    SUBTRACTION(&a, &b);
    MULTIPLICATION(&a, &b);
    return 0;
}