#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : DigitSum
//  Description :   Used to perform addition of digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DigitSum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iSum += iDigit;
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // With Updater

    int iNo = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    cout<<"\n-------------------------------------------------------------\n";
    cout<<"Original Number is : "<<iNo<<"\n";

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iRet = DigitSum(iNo);

    cout<<"Sum of Digits is : "<<iRet<<"\n";
    cout<<"-------------------------------------------------------------\n";

    return 0;
}

