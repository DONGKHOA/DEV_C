#include "..\header\My_library.h"

int main()
{
    
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int cond = CheckPrimeNumber(n);
    if (cond)
    {
        printf("n is the prime number");
    }
    else
    {
        printf("n isn't the prime number");
    }
    
    return 0;
}