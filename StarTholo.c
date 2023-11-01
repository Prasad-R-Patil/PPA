#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    int k=0;


    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(5-i);j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");

        }
        printf("\n");
    }

    return 0;
}