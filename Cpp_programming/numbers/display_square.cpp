// write program which accepts one number and prints square of that number 

#include<iostream>
using namespace std;

void DisplaySqr(int iNo)
{
    cout<<"Square of given number is : "<<(iNo * iNo)<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    DisplaySqr(iValue);
    
    return 0;
}