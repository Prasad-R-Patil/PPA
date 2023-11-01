#include<stdio.h>

int main()
{
    int no = 0;
    int *p = &no;

    printf("Enter the number :");
    scanf("%d",&no);

    printf("%d\n",no);
    printf("%d\n",&no);
   printf("%d\n",sizeof(no));
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p);
    printf("%d\n",sizeof(p));

    return 0;
}
