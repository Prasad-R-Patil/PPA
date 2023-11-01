#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    int k=0;

    int Cnt=0;

    printf("Enter the row no:-");
    scanf("%d",&Cnt);
    
   
    for(i=1;i<=Cnt;i++)
    {
        for(j=1;j<=(Cnt-i);j++)
        {
            printf(" ");
            
        }
         for(k=1;k<=i;k++)
         {
            printf("* ");
         }

        printf("\n");
    }
    return 0;
}