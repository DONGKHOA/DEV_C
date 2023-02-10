#include<stdio.h>
#include<math.h>

int check_reversible_number(int n)
{
    int b = n, a = 0;
    while (n!=0)
    {
        int i = n%10;
        a+=i;
        a*=10;
        n/=10;
    }
    a/=10;
    if (a==b)
    {
        return 1;
    }
    return 0;
}
int check_Prime_number(int n)
{
    int a=1;
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n%i==0)
            {
                a = 0;
                break;
            }
        }
        return a;
    }
}
int sum(int n)
{
    int sum = 0;
    while (n!=0)
    {
        int i = n%10;
        sum +=i;
        n/=10;
    }
    return sum;
}
void prime(int n)
{
    for (int i = 2; i <=n; i++)
    {
        int count=0;
        while (n%i==0)
        {
            ++count;
            n/=i;
        }
        if (count)
        {
            if (count>1)
            {
                printf("%d^%d",i,count);
            }
            else
            {
                printf("%d",i);
            }
            if (n>i)
            {
                printf("*");
            }
            
        }
        
    }
    
}
float number(int  n)
{
    float count = 0;
    while (n!=0)
    {
        count ++;
        n/=10;
    }
    return count;
}
void odd_number(int n)
{
    int count = 0;
    while (n!=0)
    {
        int i = n%10;
        if(i%2==1)
        {
            count ++;
        }
        n/=10;
    }
    printf("%d\n",count);
    
}
void average(int n)
{
    float average = sum(n) /number(n) ;
    printf("%f\n",average);
}
void check(int n)
{
    int count = 1;
    while (n!=0)
    {
        int i = n%10;
        n/=10;
        if (n%10>i)
        {
            printf("Sap xep khong tang dan\n");
            count--;
            break;
        }
    }
    if (count)
    {
        printf("Sap xep tang dan\n");
    }
    
}
int first(int n)
{
    int i;
    while (n!=0)
    {
        i = n%10;
        n/=10;
    }
    return i;
}
void repeat(int n)
{
    int count = 0;
    int m = n;
    while (n!=0)
    {
        int i = n%10;
        if(i==first(m))
        {
            count++;
        }
        n/=10;
    }
    printf("So lan lap chu so dau tien: %d\n",count-1);
}
void Uoc(int n)
{
    int count = 0;
    printf("Uoc \t Uoc nguyen to \n \n");
    for (int  i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            printf("%d",i);
            count++;
            if (check_Prime_number(i))
            {
               printf(" \t x"); 
            }
            
            if (i<n)
            {
                printf("\n");
            }
            
        }
        
    }
    printf("\n");
    printf("So Uoc: %d",count);
}
int fibonacci(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
}
void Perfect_Square(int n)
{
    int count = 0;
    int i = 1;
    while (count<=n)
    {
        printf("%d",i*i);
        if (count<n)
        {
            printf(",");
        }
        i++;
        count++;
    }
    
}
int C(int k, int n)
{
    if (k==0||k==n)
    {
        return 1;
    }
    if (k==1)
    {
        return n;
    }
    return C(k-1,n-1)+C(k,n-1);
}
int main()
{
    int operation;
    printf("Enter a number between 1 and 17: ");
    scanf("%d",&operation);
    switch (operation)
    {
    case 1:
    {
        int m, n;
        printf("Enter m,n: ");
        scanf("%d%d",&m,&n);
        for (int  i = 1; i <=m; i++)
        {
            for (int i = 1; i <=n; i++)
            {
                printf("%3d",i);
            }
            printf("\n");
        }
        
        break;
    }
    case 2:
    {
        int m, n;
        printf("Enter m, n: ");
        scanf("%d%d",&m,&n);
        for (int  i = 1; i <=m; i++)
        {
            for (int i = 1; i <=n; i++)
            {
                printf(" x ");
            }
            printf("\n");
        }
        break;
    }
    case 3:
    {
        int h, a = 1;
        printf("Enter h: ");
        scanf("%d",&h);
        for (int i = 1; i <=h; i++)
        {
            for (int i = 1; i <=a; i++)
            {
                printf(" * ");
            }
            a++;
            printf("\n");
        }
        break;
    }
    case 4:
    {
        int h;
        printf("Enter h: ");
        scanf("%d",&h);
        for (int i = 1; i <=h; i++)
        {
            int k =1;
            for (int j = 1; j < 2*h; j++)
            {
                if (abs(h-j)<=(i-1))
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
                
            }
            printf("\n");
            
        }
        break;
    }
    case 5:
    {
       int h;
        printf("Enter h: ");
        scanf("%d",&h);
        for (int i = 1; i <=h; i++)
        {
            int k =1;
            for (int j = 1; j < 2*h; j++)
            {
                if (abs(h-j)<=(i-1))
                {
                    printf(" %d ",k);
                    if ((h-j)>0)
                    {
                        k++;
                    }
                    else
                    {
                        k--;
                    }
                    
                }
                else
                {
                    printf("   ");
                }
                
            }
            printf("\n");
            
        }
        break; 
    }
    case 6:
    {
        printf("    *  *     *  *   \n");
        printf(" *  *  *  *  *  *  * \n");
        printf(" *  *  *  *  *  *  *\n");
        printf("    *  *  *  *  * \n");
        printf("       *  *  *  \n");
        printf("          *   \n");
        break;
    }
    case 7:
    {
        int k;
        printf("Enter k: ");
        scanf("%d",&k);
        for (int i = 100; i <=999; i++)
        {
            if (check_reversible_number(i))
            {
                if (i%k==0)
                {
                    printf("%d, ",i);
                }
                
            }
            
        }
        break;
    }
    case 8:
    {
        int a, b;
        printf("Enter a, b: ");
        scanf("%d%d",&a,&b);
        for (int i = a; i <=b; i++)
        {
            if (check_Prime_number(i))
            {
                printf("%d, ",i);
            }
        }
        break;
    }
    case 9:
    {
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        printf("tong cac chu so cua n: %d\n",sum(n));
        printf("Phan tich thanh thua so nguyen to: ");
        prime(n);
        break;
    }
    case 10:
    {
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        printf("%f\n",number(n));
        odd_number(n);
        average(n);
        printf("0");
        break;
    }
    case 11:
    {
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        check(n);
        printf("Chu so dau tien cua n: %d\n",first(n));
        repeat(n);
        break;
    }
    case 12:
    {
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        Uoc(n);
        break;
    }
    case 13:
    {
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        int count = 0;
        int a = 2;
        while (count<=n)
        {
            if (check_Prime_number(a))
            {
                printf("%d", a);
                count++;
                if (count<=n)
                {
                    printf(",");
                }
                
            }
            a++;
        }
        
        printf("\n");
        for (int i = 0; i <=n; i++)
        {
            printf("%d",fibonacci(i));
            if (i<n)
            {
                printf(",");
            }
            
        }
        printf("\n");
        Perfect_Square(n);
        break;
    }
    case 14:
    {
        printf("So nguyen to: ");
        for (int  i = 100; i <=999; i++)
        {
            if (check_Prime_number(i))
            {
                printf("%d,",i);
            }
            
        }
        printf("\n");
        printf("Chi chua chu so nguyen to: ");
        for (int i = 100; i <=999; i++)
        {
            int n = i;
            int count = 1;
            while (n!=0)
            {
                if (!check_Prime_number(n%10))
                {
                    count--;
                    break;
                }
                n/=10;
            }
            if (count)
            {
                printf("%d,",i);
            }
            
        }
        printf("\n");
        printf("Tong cac chu so la so nguyen to: ");
        for (int i = 0; i <=999; i++)
        {
            int n = i;
            int sum = 0;
            while (n!=0)
            {
                sum+=n%10;
                n/=10;
            }
            if (check_Prime_number(sum))
            {
                printf("%d, ",i);
            }
            
        }
        
        break;
    }
    case 15:
    {
        printf("So thuan nghich: ");
        for (int i = 100; i <=999; i++)
        {
            if (check_reversible_number(i))
            {
                printf("%d, ",i);
            }
            
        }
        printf("\n");
        printf("Khong chua chu so 6: ");
        for (int  i = 100; i <=999; i++)
        {
            int n = i;
            int a;
            while (n!=0)
            {
                a = i%10;
                n/=10;
                if (a==6)
                {
                    break;
                }
                
            }
            if (a!=6)
            {
                printf("%d,",i);
            }
            
        }
        printf("\n");
        printf("Tong cac chu so la so nguyen to: ");
        for (int i = 0; i <=999; i++)
        {
            int n = i;
            int sum = 0;
            while (n!=0)
            {
                sum+=n%10;
                n/=10;
            }
            if (check_Prime_number(sum))
            {
                printf("%d, ",i);
            }
            
        }
        break;
    }
    case 16:
    {
        int n;
        printf("Enter n: ");
        scanf("%d",&n);
        for (int  i = 0; i <=n; i++)
        {
            for (int j = n; j > i; j--)
            {
                printf("  ");
            }
            
            for (int j = 0; j <=i; j++)
            {
                printf(" %d ",C(j,i));
            }
            printf("\n");
        }
        break;
    }
    case 17:
    {
        printf("Cac so khong tang: ");
        for (int i = 100; i <=999; i++)
        {
            int n = i;
            int count = 1;
            while (n!=0)
            {
                int a = n%10;
                n/=10;
                if (a>n%10 && n!=0)
                {
                    count--;
                    break;
                }
                
            }
            if (count)
            {
                printf("%d, ",i);
            }
            
        }
        printf("\n");
        printf("Cac so khong giam: ");
        for (int i = 100; i <=999; i++)
        {
            int n = i;
            int count = 1;
            while (n!=0)
            {
                int a = n%10;
                n/=10;
                if (a<n%10 && n!=0)
                {
                    count--;
                    break;
                }
                
            }
            if (count)
            {
                printf("%d, ",i);
            }
            
        }
        printf("\n");
        printf("Cac so co tong chu so le bang tong chu so chan: ");
        for (int i = 100; i <=999; i++)
        {
            int nSum_odd = 0;
            int nSum_even = 0;
            int n = i;
            while (n!=0)
            {
                if ((n%10)%2==0)
                {
                    nSum_even+=(n%10);
                }
                else
                {
                    nSum_odd+=(n%10);
                }
                n/=10;
            }
            if (nSum_odd== nSum_even)
            {
                printf("%d, ",i);
            }
            
        }
        break;
    }
    default:
        printf("Re-enter another number: ");
    }
    return 0;
}