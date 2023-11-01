#include<stdio.h>

int main()
{
    int Arr[5] = {11,21,51,101,111};

    int *p = Arr;  //int *p = &(Arr[0])

    int *q = &(Arr[4]);
    
    printf("%d\n",*p);
    printf("%d\n",*q);


    return 0;
}