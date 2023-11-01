#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans = iNo1 + iNo2;
    return Ans;
}
int main()
{
   int Value1 = 0;
   int Value2 = 0;
   int iRet = 0;

   printf(" Enter First number: ");
   scanf("%d",&Value1);

   printf(" Enter Scound  number: ");
   scanf("%d",&Value2);

   iRet = Addition(Value1,Value2);
   printf("Addition of two no is %d\n",iRet);
   
       return 0;
}