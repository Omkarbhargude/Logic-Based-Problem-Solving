/*  
    Problem Statement:
    Print "Yes" if any number appears more than once, else "No".

    Sample Input:
    4
    1 2 3 2

    Sample Output:
    Yes

*/

import java.util.*;

class ArrayOperations
{ 
    public boolean ContainsDuplicate(int Arr[])
    {   
        boolean bFlag = false;
        if(Arr.length <= 0)
        {
            return false;
        }

        int j = 0, i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = i+1; j < Arr.length; j++)
            {
                if(Arr[j] == Arr[i])
                {
                    bFlag = true;
                    break;
                }
            }
        }

        return bFlag;
    }
}

class checkduplicate
{
    public static void main(String A[])
    {
        int iLen = 0, i = 0;
        boolean bRet = false;

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

        bRet = aobj.ContainsDuplicate(Arr);

        if(bRet == true)
        {
            System.out.println("Array contains duplicate elements");
        }
        else
        {
            System.out.println("Array does not contain duplicate elements");
        }
    }   
}