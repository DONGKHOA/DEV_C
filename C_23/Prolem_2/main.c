#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("\nThe equation with infinite solution");
            }
            else
            {
                printf("\nThe equation has no solution");
            }
            
        }
        else
        {
            printf("\nThe equation solution: %f",-c/b);
        }
        
    }
    else
    {
        float delta = (b * b) - (4 * a * c);
        if (delta == 1)
        {
            printf("\nThe equation has double solution: %f",-b / (2 * a));
        }
        else if (delta < 0)
        {
            printf("\nThe equation has no solution");
        }
        else
        {
            printf("\nThe equation has 2 distinct solutions: ");
            printf("\nx1 = %f", (-b + sqrt(delta))/ (2 * a));
            printf("\nx2 = %f", (-b - sqrt(delta))/ (2 * a));
        }
        
    }
    
    return 0;
}