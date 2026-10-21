#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : CheckPrime
//  Description :   Used to check if number is prime 
//  Input :         Integer
//  Output :        Boolean
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    
    // Complexity : O(N/2)
    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;
    bool bRet = 0;

    cout<<"Enter Number : ";
    cin>>iNo;

    bRet = CheckPrime(iNo);

    if(bRet == true)
    {
        cout<<iNo<<" is Prime Number\n";
    }
    else
    {
        cout<<iNo<<" is not Prime Number\n";
    }
    
    return 0;
}

