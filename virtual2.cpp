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
        Base *bp1 = new Base;        //No-Casting...
        Derived *dp1 = new Derived;  //No-Casting...
        Base *bp2 = new Derived;     //Upcasting...
        Derived *dp2 = new Base;     //Downcasing...
    
    return 0;
}