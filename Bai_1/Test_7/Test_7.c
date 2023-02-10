#include<stdio.h>
int main ()
{
    double const Pi=3.14;
    int r;
    printf("Nhap ban kinh cua duong tron: ");
    scanf("%d",&r);
    double c= (double)2*Pi*r;
    double s= (double)Pi*r*r;
    printf("Chu vi cua duong tron la: %lf \n",c);
    printf("Dien tich cua hinh tron la: %lf \n",s);
    return 0;
}