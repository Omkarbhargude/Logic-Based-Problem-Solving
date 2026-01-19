// write a function which accepts two number and print the greater number 

#include<iostream>
using namespace std;

void ChkGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        cout<<iNo1<<"\n";
    }
    else
    {
        cout<<iNo2<<"\n";
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number : \n";
    cin>>iValue1;
    cin>>iValue2;

    ChkGreater(iValue1,iValue2);

    return 0;
}