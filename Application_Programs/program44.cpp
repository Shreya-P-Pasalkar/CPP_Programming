#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name : DisplayFactors
//  Description :   Used to display factors of iNo
//  Input :         Integer
//  Output :        None
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Using iteration ~ for loop
    // Time Complexity ~ O(N/2)
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\t";
        }
    }

    cout<<iNo;
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry-point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;

    cout<<"Enter Number : \n";
    cin>>iNo;

    DisplayFactors(iNo);

    return 0;
}

