#include<stdio.h>

int main()
{
    int i=0;
    int j=0;

    int Cnt = 0;

    printf("Enter value of Star:-");
    scanf("%d",&Cnt);

    for(i=0;i<=Cnt;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("*\n");
    }
}