#include "..\header\My_library.h"

// define function check prime number
bool CheckPrimeNumber(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        if (n == 2)
        {
            return true;
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (n % 2 == 0)
                {
                    return false;
                }
                
            }
            
        }
        
    }
    return true;
}


// define function check perfect number
bool CheckPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i == 0)
        {
            sum+=i;
        }
        
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}


// define function solve quadratic equation
void SolveQuadraticEquation(float a, float b, float c)
{
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
    
}