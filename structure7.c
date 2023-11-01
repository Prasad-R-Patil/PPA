#include<stdio.h>

 struct Hello
    {
        int no;
        float d;
    };

struct Demo
{
    int i;
    float f;
   
   struct Hello hobj;
 
}dobj;
int main()
{
    struct Demo dobj;

        printf("Size of objuct is:- %d\n",sizeof(dobj));
        
        

    return 0;
}