/*
    Problem Statement:
    Accept a string and convert it into lower case

    input : INDIA
    otput : india
    
*/
import java.util.Scanner;

class StringOperations
{
    public char[] toLowerCase(String str)
    {
        char Arr[] = str.toCharArray();

        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                Arr[i] = (char)(Arr[i] + 32);
            }
        }
        return Arr;
    }
}
class strlwrX
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringOperations stobj = new StringOperations();

        char Arr[] = stobj.toLowerCase(str);

        System.out.println("Lower case conversion is : ");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]);
        }

        System.out.println();
    }
}