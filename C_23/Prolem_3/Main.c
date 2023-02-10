#include <stdio.h>

int main()
{
    int money_val, count = 0;
    printf("Enter amount: ");   scanf("%d", &money_val);
    while (1)
    {
        if (money_val - 10 > 0)
        {
            money_val-=10;
            count++;
        }
        else if (money_val - 5 > 0)
        {
            money_val-=5;
            count++;
        }
        else if (money_val - 2 > 0)
        {
            money_val-=2;
            count++;
        }
        else if (money_val - 1 >= 0)
        {
            money_val--;
            count++;
        }
        else
        {
            break;
        }
        
    }
    printf("They want %d coins", count);
    return 0;
}