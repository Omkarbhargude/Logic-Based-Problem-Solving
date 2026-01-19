// write program which accepts one number and prints cube of that number 

#include<iostream>
using namespace std;

void DisplayCube(int iNo)
{
    cout<<"Cube of given number is : "<<(iNo * iNo * iNo)<<"\n";
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    DisplayCube(iValue);
    
    return 0;
}