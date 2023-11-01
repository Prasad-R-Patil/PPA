#include<stdio.h>

int main()
{
   int Arr[5],i;
   int Sum=0;
   

      printf("Enter element of Array:-\n");
      for(i=0;i<5;i++)
      {
            scanf("%d",&Arr[i]);
      }

      printf("Addtion of Array element:-");
      for(i=0;i<5;i++)
      {
            Sum = Sum+Arr[i];
      }
      printf("%d",Arr[i]);

   return 0;
}