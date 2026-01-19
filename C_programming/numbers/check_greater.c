// write a function which accepts two number and print the greater number 

#include<stdio.h>

void ChkGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d\n",iNo1);
    }
    else
    {
        printf("%d\n",iNo2);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);

    ChkGreater(iValue1,iValue2);

    return 0;
}