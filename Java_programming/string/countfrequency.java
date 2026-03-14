/*
    Problem Statement:
    Accept a string and a character c.
    Count how many times c appears in the string (case-sensitive).

    Sample Input:
    banana
    a

    Calculation:
    a appears at positions 2,4,6 → 3 times

    Sample Output:
    3
*/
import java.util.Scanner;

class StringOperations
{
    public int CountOuccrence(String str, char cVal)
    {
        char Arr[] = str.toCharArray();

        int iCount = 0;
        for(char ch : Arr)
        {
            if(ch == cVal)
            {
                iCount++;
            }
        }

        return iCount;
    }
}
class countfrequency
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        System.out.println("Enter a character to find the frequency : ");
        char cvalue = sobj.next().charAt(0);

        StringOperations stobj = new StringOperations();

        int iRet = stobj.CountOuccrence(str,cvalue);

        System.out.println(cvalue+" appeared "+iRet+" time in string");
    }
}