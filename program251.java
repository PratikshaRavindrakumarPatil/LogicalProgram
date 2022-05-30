/*
OUTPUT:
Enter the size of array:
5
Enter the number:
11
6
21
28
40
The number are:
11      6       21      28      40
The perfect number are:
6       28


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
	
	public void Perfect()
	{
		int iCnt=0;
		int iCnt1=0,iSum=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			iSum=0;
			for(iCnt1=1;iCnt1<=(Arr[iCnt]/2);iCnt1++)
			{
				
				
				if(Arr[iCnt]%iCnt1==0)
				{
					iSum=iSum+iCnt1;
				}
			}
			if(Arr[iCnt]==iSum)
			{
				System.out.print(Arr[iCnt]+"\t");
			}
		}
		
		
	}
	
}

class program251
{
	public static void main(String arg[])
	{
		int iSize=0;
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		
		N_Number nobj=new N_Number(iSize);
		
		nobj.Accept();
		nobj.Display();
		System.out.println("\nThe perfect number are:");
		nobj.Perfect();
	}
}