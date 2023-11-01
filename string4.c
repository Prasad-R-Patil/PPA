#include<stdio.h>

int CalculateLength(char *str)
{
    int iCnt = 0;

    while(*str !='\0')
    {
        iCnt++;
        str++;
    }
 /*   for(int i=0;i[str]!='\0';i++)
        {
            iCnt++;
        }
*/
    return iCnt; 
}

int main()
{
    char Arr[40];
    int iRet = 0;

    printf("Enter your Name ==>> ");
    scanf("%[^'\n']s",Arr);
   // getc(Arr);

    printf("Your name is : %s\n",Arr);

    iRet = CalculateLength(Arr);

    printf("Length of string is %d : \n",iRet);

    return 0;
}