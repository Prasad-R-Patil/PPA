#include<stdio.h>

int main()
{
    int i=5;
    int j=0;

    //int Cnt = 0;

    //printf("Enter value of Star");
   // scanf("%d",&Cnt);

    for(i=0;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("*\n");
    }
}