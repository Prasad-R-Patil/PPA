#include<stdio.h>

//#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int x;
    float d;
    //double d;
};
int main()
{
    struct Demo obj1;  //Structure Objuct...
    struct Demo obj2;

    obj1.no = 11;
    obj1.f = 10.5f;
    obj1.x = 21;
    obj1.d = 20.50f;

    obj2.no = 51;
    obj2.f = 50.5f;
    obj2.x = 101;
    obj2.d = 60.5f;

    printf("Size of structure id %d\n",sizeof(obj1));
    printf("Size of structure id %d\n",sizeof(obj2));
    

    return 0;
}