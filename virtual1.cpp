#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void fun()
        {
            cout<<"Inside fun\n"; 
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void gun()
        {
            cout<<"Inside gun \n";
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<"\n";  //12
    cout<<sizeof(dobj)<<"\n";  //20

    bobj.fun();
    

    dobj.fun();
    dobj.gun();


   
    return 0;
}