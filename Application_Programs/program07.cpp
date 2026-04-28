#include<iostream>
using namespace std;

class Arithmetic
{
    public :
        float iNo1 = 0;
        float iNo2 = 0;

        Arithmetic(float A, float B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }

        float Addition()
        {
            float iSum = 0;
            iSum = this->iNo1 + this->iNo2;

            return iSum;
        }
};

int main()
{
    float iRet = 0;
    float iNo1 = 0, iNo2 = 0;

    cout<<"Enter first number : ";
    cin>>iNo1;

    cout<<"Enter second number : ";
    cin>>iNo2;

    // Updater for negative Values

    if(iNo1 < 0)
    {
        iNo1 = -iNo2;
    }

    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    Arithmetic aobj(iNo1, iNo2);

    iRet = aobj.Addition();

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}