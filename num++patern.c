#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    int num=1;

    for(i=1;i<=5;i++)
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