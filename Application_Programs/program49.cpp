#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : CheckDivisibility
//  Description :   Used to check if number is divisible by other number
//  Input :         Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckDivisibility(int iNo1, int iNo2)
{
    bool bFlag = false;

    if(iNo1 % iNo2 == 0)
    {
        bFlag = true;;
    }
    else
    {
        bFlag = false;;
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo1 = 0, iNo2 = 0;
    bool bRet = false;

    cout<<"Enter Divident (Integer) :";
    cin>>iNo1;

    cout<<"Enter Divisor (Integer) : ";
    cin>>iNo2;

    bRet = CheckDivisibility(iNo1, iNo2);

    if(bRet == true)
    {
        cout<<iNo1<<" is divisible by "<<iNo2<<"\n";
    }
    else
    {
        cout<<iNo1<<" is not divisible by "<<iNo2<<"\n";
    }
    
    return 0;
}

