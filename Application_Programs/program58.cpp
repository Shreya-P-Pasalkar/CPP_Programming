#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : DisplayDigits
//  Description :   Used to display digits
//  Input :         Integer
//  Output :        Nothing
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    
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
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    DisplayDigits(iNo);

    return 0;
}

