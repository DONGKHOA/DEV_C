#include <stdio.h>
#include <math.h>

struct Coordinates
{
    float x;
    float y;
};

typedef struct Coordinates Coordinates;

struct Triangle
{
    Coordinates A;
    Coordinates B;
    Coordinates C;
};

typedef struct Triangle Triangle;

// Enter coordinates
void EnterCoordinates(Coordinates *Coordinates)
{
    printf("Enter x.Coordinates: ");
    scanf("%f", &Coordinates->x);
    printf("Enter y.Coordinates: ");
    scanf("%f", &Coordinates->y);
}

// Enter Triangle
void EnterTriangle(Triangle *Triangle)
{
    printf("\n\n\t\t Enter Coordinates of A: \n");
    EnterCoordinates(&Triangle->A);
    printf("\n\n\t\t Enter Coordinates of B: \n");
    EnterCoordinates(&Triangle->B);
    printf("\n\n\t\t Enter Coordinates of C: \n");
    EnterCoordinates(&Triangle->C);
}

// Display Coordinates
void DisplayCoordinates(Coordinates *Coordinates)
{
    printf("(%f, %f)", Coordinates->x, Coordinates->y);
}

// Display Triangle 
void DisplayTriangle(Triangle *Triangle)
{
    printf("\n\n\t\t Coordinates of A: ");
    DisplayCoordinates(&Triangle->A);
    printf("\n\n\t\t Coordinates of B: ");
    DisplayCoordinates(&Triangle->B);
    printf("\n\n\t\t Coordinates of C: ");
    DisplayCoordinates(&Triangle->C);
}

float Length_of_size_of_triangle(Coordinates *A, Coordinates *B)
{
    return sqrt(pow((B->x - A->x), 2) + pow((B->y - A->y), 2));
}

int main()
{
    Triangle Triangle;
    EnterTriangle(&Triangle);
    DisplayTriangle(&Triangle);

    // Length of size of triangle
    
    printf("Length of size of triangle: \n");
    printf("\t\tAB: %f\n", Length_of_size_of_triangle(&Triangle.A, &Triangle.B));
    printf("\t\tAC: %f\n", Length_of_size_of_triangle(&Triangle.A, &Triangle.C));
    printf("\t\tBC: %f\n", Length_of_size_of_triangle(&Triangle.B, &Triangle.C));

    return 0;
}