#include<stdio.h>
#include<math.h>
int main ()
{
    int a, b, c;
    printf("Nhap a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==0){
        float x= (float)-c/b;
        printf("Phuong trinh co 1 nghiem: %f",x);
    }
    else{
        int delta = b^2-4*a*c;
        if (delta<0)
        {
            printf("Phuong trinh vo nghiem \n");
        }
        if (delta==0)
        {
            float x = (float) -b/(2*a);
            printf("Phuong trinh co nghiem kep: %d",x);
        }
        if (delta>0)
        {
            float x1= (float) (-b+sqrt(delta))/(2*a);
            float x2= (float) (-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co hai nghiem phan biet:\n x1 = %f \n x2 =%f",x1,x2);
        }
    }
    return 0;
}