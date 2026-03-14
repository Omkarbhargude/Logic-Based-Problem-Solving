/*
    Problem Statement:
    Accept a string and convert it into upper case

    input : india
    otput : INDIA
    
*/
import java.util.Scanner;

class StringOperations
{
    public char[] toUpperCase(String str)
    {
        char Arr[] = str.toCharArray();

        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                Arr[i] = (char)(Arr[i] - 32);
            }
        }
        return Arr;
    }
}
class struprX
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringOperations stobj = new StringOperations();

        char Arr[] = stobj.toUpperCase(str);

        System.out.println("Upper case conversion is : ");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]);
        }

        System.out.println();
    }
}