#include <stdio.h>

int main()
{
    int Standerd = 0;

    printf("Z P M P M School Advihir......\n");

    printf(" Enter your division: \n");
    scanf("%d", &Standerd);

    if (Standerd == 1)
    {
        printf("Your exam is at 1 PM \n");
    }
    else if (Standerd == 2)
    {
        printf("Your exam is at 2 PM \n");
    }
    else if (Standerd == 3)
    {
        printf("Your exam is at 3 PM \n");
    }
    else if (Standerd == 4)
    {
        printf("Your exam is at 4 PM \n");
    }
    else
    {
        printf("inValide Standerd...Please check");
    }

    return 0;
}