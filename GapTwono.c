#include<stdio.h>

int Display(int iNo1, int iNo2)
{
      int Sum = 0;

      if(iNo1>iNo2)
          Sum=iNo1-iNo2;
      else
           Sum=iNo2-iNo1;

      printf("this number %d to this number %d gyap is: %d",iNo1,iNo2,Sum);
      
   
}

int main()
{
      int num1 = 0;
      int num2 = 0;

      printf("Enter the 1st number: ");
      scanf("%d",&num1);
      printf("Enter the 2st number: ");
      scanf("%d",&num2);

      Display(num1,num2);

      return 0;
}