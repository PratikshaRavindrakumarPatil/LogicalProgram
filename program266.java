/*
OUTPUT:

Enter the size of array:
5
Enter the number:
21
11
101
51
1

The number are:
21      11      101     51      1
Minimum number is:1

*/

import java.lang.*;
import java.util.*;

class N_Number
{
	private int Arr[];
	
	public N_Number(int iLength)
	{
		Arr=new int[iLength];
	}
	
	public void Accept()
	{
		int iCnt=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt=0;
		System.out.println("The number are:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
	}
	
	public int Minimum()
	{
		int iCnt=0;
		int iMin=0;
		iMin=Arr[0];
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(iMin>Arr[iCnt])
			{
				iMin=Arr[iCnt];
			}
		}
		
		return iMin;
	}
	
}

class program266
{
	public static void main(String arg[])
	{
		int iSize=0;
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		
		N_Number nobj=new N_Number(iSize);
		
		nobj.Accept();
		System.out.println();
		nobj.Display();
		System.out.println();
		iRet=nobj.Minimum();
		System.out.println("Minimum number is:"+iRet);
		
	}
}