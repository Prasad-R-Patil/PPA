#include<stdio.h>


int main()
{
    int i=0;
    int j=0;

    int Cnt =0;

    printf("Enter the Value of star:-");
    scanf("%d",&Cnt);
    for(i=0;i<=Cnt;i++)
    {
        for(j=0;j<=Cnt;j++)
        {
            printf("*");
        }

        printf("*\n");
    }

}