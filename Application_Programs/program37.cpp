#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : DisplayEven
//  Description :   Used to check divisibility by 2
//  Input :         Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckDivisibilty(int iNo)
{
    // Flag
    bool bFlag = false;

    if(iNo % 2 == 0)
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
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iNo;

    bRet = CheckDivisibilty(iNo);

    if(bRet == false)
    {
        cout<<iNo<<" is not divisible by 2\n";
    }
    else
    {
        cout<<iNo<<" is divisible by 2\n";
    }

    return 0;
}

