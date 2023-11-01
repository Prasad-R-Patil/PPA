#include<stdio.h>
void Display()
{
    register int no =11;
    register int  i;
  


    printf("Valueof no :%d\n",no);
    printf("Valueof i :%d\n",i);
}
int main()
{
    Display();

    // printf("%d",no);  undeclared statement

    return 0;
}