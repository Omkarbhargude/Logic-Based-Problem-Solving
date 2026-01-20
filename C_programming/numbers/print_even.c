// write a program which accepts one number and print all the even number till that number
// input : 10
// output : 2 4 6 8 10

#include<stdio.h>

void DisplayEven(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
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

    DisplayEven(iValue);

    return 0;
}