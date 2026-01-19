// write program which accepts number and checks whether it is divisible by 3 and 5 

#include<stdio.h>
#include<stdbool.h>

bool ChkDivisible(int iNo)
{
    bool bFlag = false;

    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = ChkDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 and 5\n",iValue);
    }
    return 0;
}