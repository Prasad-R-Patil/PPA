#include<iostream>

using namespace std ;

class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Demo constructor \n\n";
            x=10;
            y=20;
        }
        ~Demo()
        {
             cout<<"Inside Demo destructor \n\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo \n\n";
        }

};


class Hello 
{
    public:
        int a,b;
        Hello()
        {
             cout<<"Inside Hello constructor \n\n";   
             a=30;
             b=40;
             
        }
        ~Hello()
        {
             cout<<"Inside Hello destructor \n\n";
        }
        void gun()
        {
             cout<<"Inside gun of Hello \n\n";
        }

};


//class  Marvellous : public Demo , public Hello
class  Marvellous : public Hello , public Demo  
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside Marvellous constructor \n\n"; 
            p = 60;
        }
        ~Marvellous()
        {
            cout<<"Inside Marvellous destructor \n\n"; 
        }
        void sun()
        {
            cout<<"Inside sun of Marvellous \n\n";
        }

};

int main()
{
   Marvellous mobj;

    cout<<"Size of Marvellous : "<<sizeof(mobj)<<"\n\n";   //20

    mobj.fun();
    mobj.gun();
    mobj.sun();

    return 0;
}