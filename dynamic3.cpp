#include <iostream>
using namespace std;

class Demo
{
public:
    int i, j, k;
    Demo()

    {
        cout << "Inside constructor\n";
    }
    ~Demo()
    {
        cout << "inside destructor\n";
    }
    void Display()
    {
        cout << "Inside Display\n";
    }
};

int main()
{
   

    
    Demo *ptr = (Demo *)malloc(sizeof(Demo));

    ptr->Display();

     free(ptr);

    return 0;
}