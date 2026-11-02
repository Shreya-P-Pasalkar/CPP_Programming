#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // Display Digits - static

    int iNo = 23452;
    int iDigit = 0;

    cout<<"iNo is : "<<iNo<<"\n";
    iDigit = iNo % 10;
    cout<<"Digit is : "<<iDigit<<"\n\n";
    iNo = iNo / 10;

    cout<<"iNo is : "<<iNo<<"\n";
    iDigit = iNo % 10;
    cout<<"Digit is : "<<iDigit<<"\n\n";
    iNo = iNo / 10;

    cout<<"iNo is : "<<iNo<<"\n";
    iDigit = iNo % 10;
    cout<<"Digit is : "<<iDigit<<"\n\n";
    iNo = iNo / 10;

    cout<<"iNo is : "<<iNo<<"\n";
    iDigit = iNo % 10;
    cout<<"Digit is : "<<iDigit<<"\n\n";
    iNo = iNo / 10;

    cout<<"iNo is : "<<iNo<<"\n";
    iDigit = iNo % 10;
    cout<<"Digit is : "<<iDigit<<"\n\n";
    iNo = iNo / 10;

    return 0;
}

