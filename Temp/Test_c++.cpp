#include <stdio.h>
#include <string.h>

// void func(int a, int b)
// {
//     if (a!=0)
//     {
//         func(a/b,b);
//         printf("%d",a%b);
//     }
//     else
//     {
//         printf("%d",0);
//     }
    
// }
struct test
{
    int a[10], b;
};
typedef struct test TEST;

char* fun(char a, char* p)
    { static char temp;
    temp=(a+ *p)%2?(a++):((*p)--);
    return (&temp);
}
char func1(char a)
{
char b,s;
for(b=1,s=0;b;b<<=1)
if(a&b)
s++;
return s;
}
int reverse(int no)
{
if(no == 0)
return 0;
else
printf("%d,", no);
reverse (--no);
}
int main()
{
    // static int b;
    // int c;
    // c++;
    // b++;
    // printf("%d %d",b,c);
    // char c = 2.5;
    // float b = 3.7;
    // b+=2*c;
    // int a = 'a',b;
    // b = (0,a%2)?a-32:a;
    // char x=4, y= 7,*p;
    // p=fun(x,&y);
    // printf("\n*p=%d",*p);
    // int x = 3;
    // float y = 3.0;
    // if(x == y)
    // printf("x and y are equal");
    // else
    // printf("x and y are not equal");
    // int a = 10, b;
    // a >=5 ? b=100: b=200;
    // printf("%d\n", b);
    // unsigned int i = 65536;
    // while(i != 0)
    // printf("%d",++i);
    // printf("\n");
// int P = 10;
// switch(P)
// {
// case 10:
// printf("Case 1");
// case 20:
// printf("Case 2");
// break;
// case P=1:
// printf("Case 2");
// break;
// }
// printf("%d %d\n", 32<<1, 32<<0);
// printf("%d %d\n", 32<<-1, 32<<-0);
// printf("%d %d\n", 32>>1, 32>>0);
    // printf("%d %d\n", 32>>-1, 32>>-0);
// int no=5;
// reverse(no);
// return 0;
// int a=0x2812;
// char *pchar;
// pchar=(char*)&a;
// a>>=2;
// printf("\n %d\n",*pchar);
// int a=3;
// double c =7.5;
// c+=a;
// a*=float(c+=a);
// printf("\n%d %5.3lf",a,c);
// char a=1,b=15,c;
// while(c=0,a<b)
// { a*=2.5;
// if(a%2==0) continue;
// c+=a*b;
// b--; }
// int c, a, b, i;
// for (c= 0, a =2,b=1, i = 0; i < 10; i++)
// {
//     c+=a;
//     a++;
//     b--;
// }
int a=0x2812;
char *pchar;
pchar=(char*)&a;
a>>=2;
printf("\n %d\n",*pchar);
    return 0;
}
