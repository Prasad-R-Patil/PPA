#include<stdio.h>

void Swap(int iNo1, int iNo2 ,int iNo3)
{
  iNo3 =iNo1;
  iNo1=iNo2;
  iNo2=iNo3;
  
  printf("number after swaping:-%d  %d",iNo1,iNo2);

}

int main()
{
  int num1=0;
  int num2=0;
  int num3=0;
  
    {
        printf("enter first no:-");
        scanf("%d",&num1);
        printf("enter second no:-");
        scanf("%d",&num2);
       
        printf("number befor swaping:-%d  %d\n",num1,num2);

       Swap(num1,num2 ,num3);

       

        return 0;

    }
} 