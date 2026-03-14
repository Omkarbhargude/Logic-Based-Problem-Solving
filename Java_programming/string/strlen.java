/*
    Problem Statement:
    Accept a string from user.
    Print the number of characters in the string (length).

    Sample Input:
    hello world

    Sample Output:
    11
*/
import java.util.Scanner;

class StringOperations
{
    public int StrlenX(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0;
        for(char ch : Arr)
        {
            iCount++;
        }

        return iCount;
    }
}
class strlen
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringOperations stobj = new StringOperations();

        int iRet = stobj.StrlenX(str);

        System.out.println("Length of string is : "+iRet);
    }
}