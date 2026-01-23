// write a program which accpets one number and print count the digits of that number
// I/P :- 3145
// O/P :- 4

#include<iostream>
using namespace std;

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iVal = 0;
    int iRet = 0;

    cout<<"Enter the number :- ";
    cin>>iVal;

    iRet = CountDigit(iVal);

    cout<<"Number of digits are : "<<iRet<<"\n";

    return 0;
}