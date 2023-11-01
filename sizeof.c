#include<stdio.h>

int main()
{
    char ch = 'a';
    int i  = 21;
    float f =12.31;
    double d=89.90;

    printf("Size of character is : %d bytes\n",sizeof(ch));  //1
    printf("Size of integer is : %d bytes\n",sizeof(i));     //4
    printf("Size of float is : %d bytes\n",sizeof(f));      //4
    printf("Size of double is : %d bytes\n",sizeof(d));     //8

    printf("Base Address of character is : %d\n",&ch);
    printf("Base Address of integer is : %d\n",&i);
    printf("Base Address of float is : %d\n",&f);
    printf("Base Address of double is : %d\n",&d);

    return 0;
}