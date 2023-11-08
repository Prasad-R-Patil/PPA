#include<stdio.h>

int main()
{
    //first type
    int Arr[5] = {10,20,30,40,50}; 

    //secound type
    int Brr[] = {10,20,30,40,50};

    //third type
    int Crr[7] = {10,20,30};

    //fourth type
    int Drr[5];
    Drr[0]=10;
    Drr[1]=20;
    Drr[2]=30;
    Drr[3]=40;
    Drr[4]=50;




    int Arr[4] = {10,20,30};

    const int Brr[4] = {1,2,3,4};

    Arr[1]=21; 
    Brr[1]=21;     //NA

    Arr[2]++;
    Brr[2]--;     //NA

    //double Arr[7] Arr is one dimenshionl array which conten 7 element in data type double in it...


    return 0;
}

/*
    #include<stdio.h>

int main()
{
    //first type
    int Arr[5] = {10,20,30,40,50}; 

    //secound type
    int Brr[] = {10,20,30,40,50};

    //third type
    int Crr[7] = {10,20,30};

    //fourth type
    int Drr[5];
    Drr[0]=10;
    Drr[1]=20;
    Drr[2]=30;
    Drr[3]=40;
    Drr[4]=50;




    int Arr[4] = {10,20,30};

    const int Brr[4] = {1,2,3,4};

    Arr[1]=21; 
    Brr[1]=21;     //NA

    Arr[2]++;
    Brr[2]--;     //NA

    //double Arr[7] Arr is one dimenshionl array which conten 7 element in data type double in it...


    return 0;
}
*/