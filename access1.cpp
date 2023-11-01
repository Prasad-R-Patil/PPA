#include<iostream>
using namespace std;

class Demo
{
        int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;

    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }
        void  Display()
        {
            cout<<" Value of  i is : "<<i<<"\n"; //A
            cout<<" Value of  j is : "<<j<<"\n"; //A
            cout<<" Value of  k is : "<<k<<"\n"; //A
            cout<<" Value of  a is : "<<a<<"\n"; //A
        }
};
class Hello : public Demo 
{
    public: 
        void HelloDisplay()
        {
            //cout<<" Value of  i is : "<<i<<"\n"; //NA
            cout<<" Value of  j is : "<<j<<"\n";  //A
            //cout<<" Value of  k is : "<<k<<"\n";  //NA
            cout<<" Value of  a is : "<<a<<"\n";  //A

        }
};


int main()
{
    Hello hobj;

        

        hobj.HelloDisplay();                                       

    return 0;
}