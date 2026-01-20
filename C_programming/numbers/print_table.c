// write a program which accepts one number and print multiplication table of that number
// input : 2
// output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}