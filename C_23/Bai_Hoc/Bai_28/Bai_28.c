//          POINTER AND ARRAY

#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int *ptr=arr;
    printf("Dia chi cua mang: %x\n",arr);
    printf("Gia tri cua con tro: %x\n",ptr);
    printf("Dia chi cua arr[0]: %x\n",&arr[0]);
    

    for (int  i = 0; i < 5; i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");

    for (int  i = 0; i < 5; i++)
    {
        printf("%5d",*(ptr+i));
    }
    
    printf("\n");
    for ( ; ptr<=&arr[4]; ptr++)
    {
        printf("%5d",*ptr);
    }

    // ptr = 3000;
    // ptr++;  //address not a value 
    // printf("%5d",*ptr);
    
    return 0;
}