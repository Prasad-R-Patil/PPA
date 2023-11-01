#include<stdio.h>

int main()
{
    int Arr[5] = {11,21,51,101,111};

    int *p = Arr;  //int *p = &(Arr[0])

    int *q = &(Arr[1]);
    int *r = &(Arr[2]);
    int *s = &(Arr[3]);
    int *t = &(Arr[4]);
    
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",*r);
    printf("%d\n",*s);
    printf("%d\n",*t);


    return 0;
}