#include<stdio.h>
#include<stdlib.h>  // Dynamic memory allcation

int main()
{
    int Arr[5];     //Static memory
    float fValue;   //Static memory
    double Brr[4];  //Static memory

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array  : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    ptr[3]=40;

        
     printf("%d\n",ptr[0]);
     printf("%d\n",ptr[1]);
     printf("%d\n",ptr[2]);
     printf("%d\n",ptr[3]);
    free(ptr);

    return 0;
}