// write program which accepts one number and prints square of that number 

#include<stdio.h>

void DisplaySqr(int iNo)
{
    printf("Square of given number is : %d\n",(iNo * iNo));
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplaySqr(iValue);
    
    return 0;
}