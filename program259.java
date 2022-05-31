/*
OUTPUT:

Enter the size of array:
5
Enter the number:
21
51
20
11
101

The number are:
21      51      20      11      101

11 is present
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
	
	public boolean CheckNumber()
	{
		int iCnt=0;
		boolean bFlag=false;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt]==11)
			{
				bFlag=true;
				break;
			}
		}
		if(bFlag==true)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
}

class program259
{
	public static void main(String arg[])
	{
		int iSize=0;
		boolean bRet=false;
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		
		N_Number nobj=new N_Number(iSize);
		
		nobj.Accept();
		System.out.println();
		nobj.Display();
		System.out.println();
		bRet=nobj.CheckNumber();
		System.out.println();
		if(bRet==true)
		{
			System.out.println("11 is present");
		}
		else
		{
			System.out.println("11 iss absent.");
		}
		
	}
}