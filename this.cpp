#include <iostream>

using namespace std;

class Demo
{
    public:
        int i;
        int j;
        int k;

       // Demo( Demo *this, int a = 10, int b = 20, int c = 30)
        Demo(int a = 10, int b = 20, int c = 30)
        {
            cout<<"Value of this is : "<<this<<"\n\n";
            i = a;
            j = b;
            k = c;
        }

        //void Fun(Demo *this No1, int No2)
        void Fun(int No1, int No2)
        {
            cout << "Inside fun\n";
            cout<<"value of i :"<<this->i<<"\n";
            cout<<"value of j :"<<this->j<<"\n";
            cout<<"value of k :"<<this->k<<"\n\n";
        }
    
        void Display()
        {
            //cout<<this<<"\n";
            cout << "Inside Display\n";
            cout<<"Value of this pointer is :"<<this<<"\n\n";
        }
    };

    int main()
    {
        Demo obj1;
        Demo obj2(11,21,51);

        obj1.Fun(5,6);    //Fun (&obj1,5,6);
                        //Fun(100,5,6);
        obj2.Fun(8,9);    //Fun (&obj2,8,9);
                        //Fun(200,8,9);
       cout<<"Address of obj1 is "<<&obj1<<"\n\n";

        obj1.Display();   //Display(&obj1);
                        //Display(100);
        obj2.Display();   //Display(&obj2);
                        //Display(200);

       cout<<"Address of obj2 is "<<&obj2<<"\n\n";
        return 0;
    }