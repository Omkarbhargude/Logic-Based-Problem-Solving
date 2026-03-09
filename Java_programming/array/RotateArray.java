/*  
    Problem Statement:
    Move first element to the end.

    Sample Input:
    5
    1 2 3 4 5

    Sample Output:
    2 3 4 5 1
*/

import java.util.Scanner;

class ArrayOperations
{

    public void RotateArray(int Arr[])
    {
        if(Arr.length <= 0)
        {
            return;
        }
        
        int i = 0, temp = Arr[0];
        for(i = 0; i < Arr.length-1; i++)
        {
            Arr[i] = Arr[i+1];
        }
        Arr[i] = temp;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i]+" ");
        }

    }
}

class RotateArray
{
    public static void main(String A[])
    {
        int iLen = 0, i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the length of array : ");
        iLen = sobj.nextInt();

        int Arr[] = new int[iLen];
        
        System.out.println("Enter "+iLen+" elements in array : ");
        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayOperations aobj = new ArrayOperations();

        aobj.RotateArray(Arr);

    }
}