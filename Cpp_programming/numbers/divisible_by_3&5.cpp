// write a program which accepts a number and check whether it is divisible by 3 and 5

#include<iostream>
using namespace std;

bool ChkDivisible(int iNo)
{
    bool bFlag = false;

    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    bRet = ChkDivisible(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is divisible by 3 and 5\n";
    }
    else
    {
        cout<<iValue<<" is not divisible by 3 and 5\n";
    }

    return 0;
}