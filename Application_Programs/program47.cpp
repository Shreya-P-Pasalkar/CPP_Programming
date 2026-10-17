#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : CountFactors
//  Description :   Used to count of iNo
//  Input :         Integer
//  Output :        Nothing
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iFact = 0, iNonFact = 0;

    // Using iteration ~ for loop
    // Time Complexity ~ O(N)
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFact++;
        }
        else
        {
            iNonFact++;
        }
    }
    
    cout<<"Total Number of factors : "<<iFact<<"\n";
    cout<<"Total Number of Non-Factors : "<<iNonFact<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;

    cout<<"Enter Number : \n";
    cin>>iNo;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    CountFactorsNonFactors(iNo);

    return 0;
}

