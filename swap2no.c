#include <stdio.h>

int Swap(int iNo1, int iNo2)
{
  int iRet=0;

    iNo1 = iNo1+iNo2;
    iNo2 = iNo1-iNo2;
    iNo1 = iNo1-iNo2;

 printf("number after swaping:-%d  %d",iNo1,iNo2);
  
}

int main()
{
  int num1 = 0;
  int num2 = 0;

  int Ans = 0;

 
      printf("enter first no:-");
      scanf("%d", &num1);

      printf("enter second no:-");
      scanf("%d", &num2);

      printf("number befor swaping:-%d  %d\n", num1, num2);

      Swap(num1, num2);

     

    return 0;

}