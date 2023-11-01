#include<stdio.h>

int main()

{
    int i=0; 
    int j=0;
    int Cnt =0;

    printf("Enter the row size:-");
    scanf("%d",&Cnt);

    for(i=1;i<=Cnt;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}