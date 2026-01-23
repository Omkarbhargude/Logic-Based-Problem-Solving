// write a program which accpets one number and sum the digit of that number
// I/P :- 123
// O/P :- 6

#include<iostream>
using namespace std;

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}
int main()
{
    int iVal = 0;
    int iRet = 0;

    cout<<"Enter the number :- ";
    cin>>iVal;

    iRet = SumDigit(iVal);

   cout<<"Summation of digits are : "<<iRet<<"\n";

    return 0;
}