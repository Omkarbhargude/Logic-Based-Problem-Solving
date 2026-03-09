/*  
    Problem Statement:
    Find the second biggest number.

    Sample Input:
    5
    8 3 12 1 9

    Calculation:
    Largest=12, second=9

    Sample Output:
    9
*/

import java.util.*;

class ArrayOperations
{ 
    public int SecondLargest(int Arr[])
    {
        if(Arr.length <= 0)
        {
            return 0;
        }
        int iTemp = 0, i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(int j = i+1; j < Arr.length; j++)
            {
                if(Arr[j] < Arr[i])
                {
                    iTemp = Arr[j];
                    Arr[j] = Arr[i];
                    Arr[i] = iTemp;
                }
            }
        }
        int iSecond = Arr[Arr.length-2];
        return iSecond;
    }
}

class FindSecondLargest
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

        iRet = aobj.SecondLargest(Arr);

        System.out.println("Second Largest element is : "+iRet);
    }   
}