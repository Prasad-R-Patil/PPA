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
            cout<<" Value of  i is : "<<i<<"\n";
            cout<<" Value of  j is : "<<j<<"\n";
            cout<<" Value of  k is : "<<k<<"\n";
            cout<<" Value of  a is : "<<a<<"\n";
        }
};


int main()
{
    Demo obj;

        //cout<<" Value of  i is : "<<obj.i<<"\n";  //NA
        cout<<" Value of  j is : "<<obj.j<<"\n";  //A
        //cout<<" Value of  k is : "<<obj.kk<<"\n";  //NA
        //cout<<" Value of  a is : "<<obj.a<<"\n";  //NA
        

        obj.Display();  //

    return 0;
}