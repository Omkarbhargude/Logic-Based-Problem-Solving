// write a program which accpets one number and print reverse
// I/P :- 123
// O/P :- 321

#include<iostream>
using namespace std;

void DisplayReverse(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit;
        iNo = iNo / 10;
    }
    cout<<"\n";
}
int main()
{
    int iVal = 0;

    cout<<"Enter the number :- ";
    cin>>iVal;

    DisplayReverse(iVal);

    return 0;
}