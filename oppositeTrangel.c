#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    int Cnt = 0;

    printf("Enter the value of row :-");
    scanf("%d",&Cnt);

    for(i=0;i<=Cnt;i++)
    {
        for(j=0;j<=Cnt;j++)
        {
            if((i+j)<=Cnt)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}