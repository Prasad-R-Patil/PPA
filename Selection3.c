#include <stdio.h>

int main()
{
    int Standerd = 0;
    {
        printf("Z P M P M School Advihir......\n");

        printf(" Enter your division: \n");
        scanf("%d", &Standerd);
    }
    switch(Standerd)
    {
        case 1:
                printf("Your exam is at 1 PM \n");
                break;
   
        case 2:
                printf("Your exam is at 2 PM \n");
                break;
    
        case 3:
                printf("Your exam is at 3 PM \n");
                break;
    
        case 4:
                printf("Your exam is at 4 PM \n");
                break;

        default:
                printf("Invalid Standerd\n");
                break;
    }

    return 0;
}