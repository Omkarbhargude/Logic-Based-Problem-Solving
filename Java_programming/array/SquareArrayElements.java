/*  
    Problem Statement:
    Create and print new array where each element is square of original.

    Sample Input:
    4
    1 2 3 4

    Sample Output:
    1 4 9 16

*/

import java.util.*;

class ArrayOperations
{ 
    public void SquareArray(int Arr[])
    {
        if(Arr.length <= 0)
        {
            return;
        }
        int iTemp = 0, i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] < 2)
            {
                continue;
            }
            else
            {
                Arr[i] = Arr[i] * Arr[i];
            }
        }

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class SquareArrayElements
{
    public static void main(String A[])
    {
        int iLen = 0, i = 0, iRet = 0;

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

        aobj.SquareArray(Arr);
    }   
}