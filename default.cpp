#include<iostream>
using namespace std;

float Calaculate(float Mark, float Outof =100)
{
    float Percentage = ((Mark / Outof)*100);
    return Percentage;
}

int main()
{
    float Ans = 0.0f;

    Ans = Calaculate(86,100);
    cout<<"Percentsge: "<<Ans<<"\n";

     Ans = Calaculate(86);
    cout<<"Percentsge: "<<Ans<<"\n";

     Ans = Calaculate(320,400);
    cout<<"Percentsge: "<<Ans<<"\n";

    return 0;
}