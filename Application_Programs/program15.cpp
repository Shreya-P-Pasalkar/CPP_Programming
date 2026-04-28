#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Class Name :    Test
//  Description :   Used to perform Mathematical Test operations
//  Date :          28/04/26
//  Author :        Shreya Pramod Pasalkar
///////////////////////////////////////////////////////////////////////////////////////////////////////
class Test
{
    public :
        int iNo = 0;

        Test(int A)
        {
            this->iNo = A;
        }
        
        //////////////////////////////////////////////////////////////////////////////////////////////
        //  Function Name : CheckEvenOdd
        //  Description :   Used to check if number is even or odd
        //  Input :         int
        //  Output :        boolean
        //  Date :          28/04/26
        //  Author :        Shreya Pramod Pasalkar
        //////////////////////////////////////////////////////////////////////////////////////////////
        bool CheckEvenOdd(int iNo)
        {
            return ((iNo % 2) == 0);
        }
        };

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry Point Function
///////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter Number : ";
    cin>>iNo;

    Test tobj(iNo);

    bRet = tobj.CheckEvenOdd(iNo);

    if(bRet == true)
    {
        cout<<iNo<<" is Even number\n";
    }
    else 
    {
        cout<<iNo<<" is Odd number\n";
    }

    return 0;
}