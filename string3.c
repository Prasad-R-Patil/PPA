#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter your Name ==>> ");
    scanf("%[^'\n']s",Arr);
   // getc(Arr);

    printf("Your name is : %s",Arr);

    return 0;
}