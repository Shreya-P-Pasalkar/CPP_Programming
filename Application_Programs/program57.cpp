#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // Display Digits - Dynammic
    // Using iteration - while loop

    int iNo = 0;
    int iDigit = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    cout<<"\nOriginal Number is : "<<iNo<<"\n";
    cout<<"-------------------------------------------------------------\n";

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        
        cout<<"Digit is : "<<iDigit<<"\n";
        cout<<"Number is : "<<iNo<<"\n";
        cout<<"-------------------------------------------------------------\n";
    }
    return 0;
}

