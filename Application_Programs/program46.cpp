#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : CountFactors
//  Description :   Used to count of iNo
//  Input :         Integer
//  Output :        Integer
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountFactors(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    // Using iteration ~ for loop
    // Time Complexity ~ O(N/2)
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact++;
        }
    }
    
    // for the number itself
    iFact++;
    return iFact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter Number : \n";
    cin>>iNo;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iRet = CountFactors(iNo);

    cout<<"Total Factors of "<<iNo<<" : "<<iRet;

    return 0;
}

