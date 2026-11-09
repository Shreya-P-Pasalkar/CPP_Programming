#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : Factorial
//  Description :   Used to calculate factorial of a number
//  Input :         Integer
//  Output :        Long
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
long Factorial(int iNo)
{
    int iCnt = 0;
    long iFact = 0;

    iFact = 1;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;
    long lRet = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    // Negative Value Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    lRet = Factorial(iNo);

    cout<<"Factorial of "<<iNo<<" is : "<<lRet<<"\n";
    
    return 0;
}

