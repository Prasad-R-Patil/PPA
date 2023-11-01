#include <stdio.h>

int Addition(int No1, int No2)
{
    int sum = 0;
    sum = No1 + No2;
    return sum;
}

int Substraction(int No1, int No2)
{
    int sum = 0;
    sum = No1 - No2;
    return sum;
}

int Multiplaction(int No1, int No2)
{
    int sum = 0;
    sum = No1 * No2;
    return sum;
}

int Division(int No1, int No2)
{
    int sum = 0;
    sum = No1 / No2;
    return sum;
}


int main()
{
    int Value1 = 20;
    int Value2 = 10;
    int Ans = 0;

    Ans = Addition(Value1, Value2);
    printf("Addition is  : %d\n", Ans);

    Ans = Substraction(Value1, Value2);
    printf("Substraction is  : %d\n", Ans);

    Ans = Multiplaction(Value1, Value2);
    printf("multiplaction is  : %d\n", Ans);

    Ans = Division(Value1, Value2);
    printf("Division  is  : %d\n", Ans);
    return 0;
}
