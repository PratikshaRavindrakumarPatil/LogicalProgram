/*
OUTPUT:

Enter the size of array:
4
Enter the number:
11
20
21
40

The number are:
11      20      21      40
the differnce between addition of Even and odd number is:28


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
	
	public int SumDifference()
	{
		int iCnt=0,iSumE=0,iSumO=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]%2)==0)
			{
				iSumE=iSumE+Arr[iCnt];
			}
			else
			{
				iSumO=iSumO+Arr[iCnt];
			}
		}
		return(iSumE-iSumO);
	}
	
}

class program252
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
		iRet=nobj.SumDifference();
		System.out.println("the differnce between addition of Even and odd number is:"+iRet);
		
	}
}