

#include<stdio.h>

int main()
{

    int Cnt=0;

    printf("Enter the no:-");
    scanf("%d",&Cnt);

        for(int i=1;i<=Cnt;i++)
            {
                for(int j=1;j<=(Cnt-i);j++)
                {
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
 

        for(int i=Cnt-1;i>=1;i--)
            {
                for(int j=1;j<=(Cnt-i);j++)
                {
                    printf(" ");
                }
                for(int k=1;k<=2*i-1;k++)
                {
                    printf("*");
                }
                printf("\n");
            }
        
        return 0;
}
            