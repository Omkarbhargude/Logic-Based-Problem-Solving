// write a program which accepts one number and print all the odd number till that number
// input : 10
// output : 1 3 5 7 9

#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0;
}