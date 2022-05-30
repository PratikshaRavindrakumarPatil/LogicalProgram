/*
OUTPUT:

Enter the size of array:
6
Enter the number:
12
20
21
1
4
40

The number are:
12      20      21      1       4       40
Addition of Even number is:76

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
	
	public int SumEven()
	{
		int iCnt=0,iSum=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]%2)==0)
			{
				iSum=iSum+Arr[iCnt];
			}
		}
		return iSum;
	}
	
}

class program250
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
		iRet=nobj.SumEven();
		System.out.println("Addition of Even number is:"+iRet);
		
	}
}