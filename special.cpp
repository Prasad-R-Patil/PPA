#include <iostream>
using namespace std;

class Demo                 //class Defination
{
            public:        //Access Sprcifire

                int i;
                int j;      // class che charecterstic

                Demo() // default constructor
                {
                    cout<<"Inside default Constructor\n";
                    i = 0;
                    j = 0;
                }

                Demo(int A, int B) // paramrtetised constructor
                {
                    cout<<"Inside paramrtetised Constructor\n";
                    i = A;
                    j = B;
                }

                //Demo &ref = obj2;
                Demo(Demo &ref)      //Copy Constructor
                {
                    cout<<"Inside Copy Constructor\n";
                    i  = ref.i;
                    j  = ref.j;
                }

                ~Demo()
                {
                    cout<<"Inside Destructor\n";
                }

};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}