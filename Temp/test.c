#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#if 0
void solution(int n)
{
    int cond = 0;
    int a, b, c;
    int m = n/(a+b+c);
    for (int  i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            a = i, b = j;
            float temp;
            temp = pow(a, 2) + pow(b, 2);
            temp = sqrt(temp);
            c = (int) sqrt(i*i + j*j);
            if ((a + b + c) <= n)
            {
                if (temp == c)
                {
                    printf("a = %d, b = %d, c = %d\n", i, j, c);
                    cond++;
                }
            }
        }
        
    }
    if (cond==0)
    {
        printf("NO");
    }
    
}
int main()
{
    int n;
    printf("Enter N: ");    scanf("%d",&n);
    solution(n);
    return 0;
}
#endif

#if 0
void delete_newline(char *str)
{
    size_t length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] ='\0';
    }
    
}
int check(char *str)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]) || isalpha(str[i]))
        {
            count++;
        }
        
    }
    if (count == strlen(str))
    {
        return 1;
    }
    return 0;
}
void sort(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = strlen(str) - 2; j >= i; j--)
        {
            if (str[j + 1] < str[j])
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
            
        }
        
    }
    
}
void delete_duplicate(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        char temp = str[i];
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (temp == str[j])
            {
                str[j] = '-';
            }
            
        }
        
    }
    int count=0;
    char a[1000];
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != '-')
        {
            a[count]=str[i];
            count++;
        }
        
    }
    
    a[count] = '\0';
    for (int i = 0; i <= count; i++)
    {
        str[i]= a[i];
    }
    
}
int main()
{
    char str[1000];
    do
    {
        fgets(str, sizeof(str), stdin);
        delete_newline(str);
    } while (check(str) == 0);
    sort(str);
    puts(str);
    delete_duplicate(str);
    puts(str);
    return 0;
}
#endif

#if 0
int main()
{
    int n;
    do
    {
        printf("Enter n: "); scanf("%d",&n);
    } while (n<=0||n>=65536);
    int count = 0;
    for (int i = 1; i <= 32768; i*=2)
    {
        if(n&i) {count++;}
    }
    printf("%d",16-count);
    return 0;
}
#endif

#if 0
// int arr1[10]={1,2,3,4,5};
// int a;
int main()
{
    // int arr[10]={1,2,3,4,5};
    // int n;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",arr1[i]);
    // }
    // printf("%d",n);
    // printf("%d",a);
    char a[10] = {'h', 'e', 'l', 'l', 'o'};
    char b[] = {'h', 'e', 'l', 'l', 'o'};
    char c[10] = "hello";
    char d[] = "hello";
    printf("%d %d\n",sizeof(a), strlen(a));
    printf("%d %d\n",sizeof(b), strlen(b));
    printf("%d %d\n",sizeof(c), strlen(c));
    printf("%d %d\n",sizeof(d), strlen(d));
    return 0;
}
#endif

#if 0
char a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char *pa;
int *pb;
int main()
{ 	pa = a;
 	pa++;
 	pb = pa;
 	pb++;
 	printf("%d",((char *)pb - a));
    return 0;
}

#endif

#if 1

int main()
{
   char str[80];

   sprintf(str, "Gia tri cua Pi = %lf", M_PI);
   puts(str);

   return(0);
}
#endif