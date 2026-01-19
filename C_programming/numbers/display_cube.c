// write program which accepts one number and prints cube of that number 

#include<stdio.h>

void DisplayCube(int iNo)
{
    printf("Cube of given number is : %d\n",(iNo * iNo * iNo));
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayCube(iValue);
    
    return 0;
}