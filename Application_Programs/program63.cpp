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

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }

    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
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

