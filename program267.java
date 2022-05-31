/*
OUTPUT:

Enter the size of array:
5
Enter the number:
11
37
2
101
121

The number are:
11      37      2       101     121
Differnce between maximum and minimum is:119


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
	
	public int Difference()
	{
		int iCnt=0;
		int iMin=0;
		iMin=Arr[0];
		int iMax=0;
		iMax=Arr[0];
		
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(iMax<Arr[iCnt])
			{
				iMax=Arr[iCnt];
			}
		}
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(iMin>Arr[iCnt])
			{
				iMin=Arr[iCnt];
			}
		}
		
		
		return(iMax-iMin);
	}
	
}

class program267
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
		iRet=nobj.Difference();
		System.out.println("Differnce between maximum and minimum is:"+iRet);
		
	}
}