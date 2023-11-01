#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    int Cnt = 0;

    printf("Enter the row Value:-");
    scanf("%d",&Cnt);
    for(i=1;i<=Cnt;i++)
    {
        for(j=1;j<=Cnt;j++)
        {
            if(i==1||i==Cnt||j==1||j==Cnt)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}