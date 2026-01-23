// write a program which accpets one number and check whether it prime or not
// I/P :- 11
// O/P :- true

#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    bool bFlag = true;
    if(iNo <= 1)
    {
        return false;
    }

    int i = 0;
    for(i = 2; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            bFlag = false;
        }
    }
    return bFlag;
}

int main()
{
    int iVal = 0;
    bool bRet = false;

    cout<<"Enter the number :- ";
    cin>>iVal;

    bRet = CheckPrime(iVal);

    if(bRet == true)
    {
        cout<<iVal<<" is prime number\n";
    }
    else
    {
        cout<<iVal<<" is not prime number\n";
    }
    return 0;
}