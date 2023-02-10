#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    // printf("Rand-Max = %d",RAND_MAX);
    for (int i = 0; i <=10; i++)
    {
        int random = rand()%100;
        printf("%5d",random);
    }
    
    return 0;
}