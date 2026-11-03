#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : CountDigits
//  Description :   Used to count digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountDigits(int iNo)
{
    // Without taking digits

    int iCount = 0;

    while(iNo != 0)
    {
        iNo = iNo / 10;

        iCount++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    cout<<"\n-------------------------------------------------------------\n";
    cout<<"Original Number is : "<<iNo<<"\n";

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iRet = CountDigits(iNo);

    cout<<"Total Number of Digits is : "<<iRet<<"\n";
    cout<<"-------------------------------------------------------------\n";

    return 0;
}

