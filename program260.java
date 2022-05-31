/*
OUTPUT:

Enter the size of array:
5
Enter the number:
11
21
51
101
11

The number are:
11      21      51      101     11

 frequency of 11 is:2

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
	
	public int Frequency()
	{
		int iCnt=0;
		int iCount=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt]==11)
			{
				iCount++;
			}
		}
		return iCount;
	}
	
}

class program260
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
		iRet=nobj.Frequency();
		
		System.out.println("\n frequency of 11 is:"+iRet);
		
		
	}
}