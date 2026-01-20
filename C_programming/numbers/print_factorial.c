// write a program which accepts one number and print the factorial of that numbers.
// input : 5
// output : 120

#include<stdio.h>

void Factorial(int iNo)
{
    if((iNo < 0) || (iNo == 0))
    {
        printf("Wrong input\n");
        return;
    }
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    printf("Factorial is : %d\n",iFact);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Factorial(iValue);

    return 0;
}