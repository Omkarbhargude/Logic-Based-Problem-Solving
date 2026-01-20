// write a program which accepts one number and print the sum of first N natural numbers.
// input : 5
// output : 15

#include<stdio.h>

void SumNatural(int iNo)
{
    if((iNo < 0) || (iNo == 0))
    {
        printf("Wrong input\n");
        return;
    }
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    printf("Summation is : %d\n",iSum);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    SumNatural(iValue);

    return 0;
}