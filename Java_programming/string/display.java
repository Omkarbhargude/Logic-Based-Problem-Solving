/*  
    Problem Statement:
    Accept a string Print its first character and last character separated by space.
    Sample Input:
    mountain
    Sample Output:
    m n
*/
import java.util.Scanner;

class StringOperations
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();

        System.out.println(Arr[0]+" "+Arr[Arr.length-1]);
    }
}
class display
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        StringOperations stobj = new StringOperations();

        stobj.Display(str);

    }
}