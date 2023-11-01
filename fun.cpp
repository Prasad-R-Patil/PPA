#include <iostream>
using namespace std;
int Addition(int num1, int num2)
{
      int Add = 0;
      Add = num1 + num2;

      return Add;
}
int Substraction(int num1, int num2)
{
      int Sub = 0;
      Sub = num1 - num2;

      return Sub;
}
int Multiplaction(int num1, int num2)
{
      int Multi = 0;
      Multi = num1 * num2;

      return Multi;
}
int Division(int num1, int num2)
{
      int Div = 0;
      Div = num1 / num2;

      return Div;
}

int main()
{
      int No1 = 0;
      int No2 = 0;

      int Sum1 = 0;
      int Sum2 = 0;
      int Sum3 = 0;
      int Sum4 = 0;

      cout<<"Enter the 1st No : ";
      cin>> No1;
      cout<<"Enter the 2nd No : ";
      cin>> No2;

      Sum1 = Addition(No1, No2);
      Sum2 = Substraction(No1, No2);
      Sum3 = Multiplaction(No1, No2);
      Sum4 = Division(No1, No2);

      cout<<"the two number of Addition is :" << Sum1<< "\n";
      cout<<"the two number of  Substraction is : " <<Sum2<<"\n";
      cout<<"the two number of Multiplaction is : " <<Sum3<<"\n";
      cout<<"the two number of Division is : " <<Sum4<<"\n";

      return 0;
}