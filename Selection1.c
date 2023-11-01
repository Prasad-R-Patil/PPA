#include <stdio.h>

int Selection(int iNo)
{
    int Ans = 0;
    {
        Ans = iNo % 2;
    }

    return Ans;
}
int main()
{
    int num = 0;
    int iRet = 0;
    {
        printf("Enter The Number: ");
        scanf("%d", &num);
    }
    iRet = Selection(num);
    {
        if (iRet == 0)
        {
            printf("%d number is even", num);
        }
        else
        {
            printf("%d number is odd", num);
        }
    }
    return 0;
}