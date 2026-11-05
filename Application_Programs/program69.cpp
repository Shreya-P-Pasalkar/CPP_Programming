#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : CheckPerfect
//  Description :   Used to check perfect
//  Input :         Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // Forward loop with 2 conditions
    // Time complexity : O(N/2)
    for(iCnt = iNo/2; iCnt >= 1 && (iNo % iCnt == 0); iCnt--) // IMP - Failed condition
    {
        iSum += iCnt;
    }

    return iNo == iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter Number : \n";
    cin>>iNo;

    // Negative value updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    bRet = CheckPerfect(iNo);

    if(bRet == true)
    {
        cout<<iNo<<" is perfect number\n";
    }
    else
    {
        cout<<iNo<<" is not perfect number\n";
    }

    return 0;
}

