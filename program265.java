/*
OUTPUT:

Enter the size of array:
6
Enter the number:
1
22
3
4
11
10

The number are:
1       22      3       4       11      10
Multiplication of odd number is:33

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
	
	public int MultiOdd()
	{
		int iCnt=0;
		int iMult=1;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]%2)!=0)
			{
				iMult=iMult*Arr[iCnt];
			}
		}
		
		return iMult;
	}
	
}

class program265
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
		iRet=nobj.MultiOdd();
		System.out.println("Multiplication of odd number is:"+iRet);
		
	}
}