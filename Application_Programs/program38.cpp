#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : DisplayEven
//  Description :   Used to check divisibility
//  Input :         Integer, Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckDivisibilty(int iNo1, int iNo2)
{
    // Flag
    bool bFlag = false;

    if(iNo1 % iNo2 == 0)
    {
        bFlag = true;
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // Dynammic Input
    int iNo1 = 0, iNo2 = 0;
    bool bRet = false;

    cout<<"Enter divident (Numerator): \n";
    cin>>iNo1;

    cout<<"Enter divisor (Denominator): \n";
    cin>>iNo2;

    bRet = CheckDivisibilty(iNo1, iNo2);

    if(bRet == false)
    {
        cout<<iNo1<<" is not divisible by "<<iNo2<<"\n";
    }
    else
    {
        cout<<iNo1<<" is divisible by "<<iNo2<<"\n";
    }

    return 0;
}

