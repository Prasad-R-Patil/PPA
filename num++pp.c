#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    int Cnt=0;
    int num=11;

    printf("Enter the row value:-");
    scanf("%d",&Cnt);

    for(i=1;i<=Cnt;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }

        printf("\n");
    }
    return 0;
}