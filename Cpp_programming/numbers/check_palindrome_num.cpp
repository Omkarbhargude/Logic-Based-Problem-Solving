// write a program which accpets one number and check whether it is palindrome or not
// I/P :- 121
// O/P :- palindrome

#include<iostream>
using namespace std;

bool ChkPalindrome(int iNo)
{
    bool bFlag = false;
    if(iNo < 0) return bFlag;

    int iDigit = 0, iNew = 0, iOld = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNew = (iNew * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iNew == iOld)
    {
        bFlag = true;
    }

    return bFlag;
}
int main()
{
    int iVal = 0;
    bool bRet = true;

    cout<<"Enter the number :- ";
    cin>>iVal;

    bRet = ChkPalindrome(iVal);

    if(bRet == true)
    {
        cout<<"It is palindrome\n";
    }
    else
    {   
        cout<<"It is not palindrome\n";
    }
    return 0;
}