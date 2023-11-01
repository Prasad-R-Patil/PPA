#include<stdio.h>

int main()
{
    int X = 11;
    const int Y = 11;
    
     X++;
  //  Y++;
  X--;
  Y--; //not
  Y=21;  //Not alloud
   printf("%d\n%d",X,Y);
    return 0;
}
