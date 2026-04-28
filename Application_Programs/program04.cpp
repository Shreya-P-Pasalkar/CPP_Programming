#include<iostream>
using namespace std;

class Arithmetic
{
    public :
        int iNo1 = 0;
        int iNo2 = 0;

        Arithmetic(int A, int B)
        {
            this->iNo1 = A;
            this->iNo2 = B;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = this->iNo1 + this->iNo2;

            return Ans;
        }
};

int main()
{
    int iRet = 0;
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter first number : ";
    cin>>iNo1;

    cout<<"Enter second number : ";
    cin>>iNo2;

    Arithmetic aobj(iNo1, iNo2);

    iRet = aobj.Addition();

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}