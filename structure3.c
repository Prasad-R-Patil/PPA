#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo Arr[3];

    Arr[0].i = 10;
    Arr[0].f = 10.5;

    Arr[1].i = 20;
    Arr[1].f = 20.5;

    Arr[2].i = 30;
    Arr[2].f = 30.5;

    printf("%d\n",Arr[0].i);
    printf("%f\n",Arr[0].f);

    printf("%d\n",Arr[1].i);
    printf("%f\n",Arr[1].f);

    printf("%d\n",Arr[2].i);
    printf("%f\n",Arr[2].f);

    
    return 0;    
}
