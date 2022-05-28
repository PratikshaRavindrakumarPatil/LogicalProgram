/*
OUTPUT:

Enter the size of array:
5

Enter the element:
23
12
11
80
342

Elements of array are:
23      12      11      80      342

Enter the number that you want to search:
11
Given number is present.

Enter the size of array:
4

Enter the element:
23
12
11
80

Elements of array are:
23      12      11      80

Enter the number that you want to search:
101
Given number is not present.

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
		
		System.out.println("Enter the element:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		
	}
	
	public void Display()
	{
		int iCnt=0;
		System.out.println("Elements of array are:");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
	}
	
	public boolean SearchNumber()
	{
		int iNo=0,iCnt=0;
		boolean Flag=false;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number that you want to search:");
		iNo=sobj.nextInt();
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt]==iNo)
			{
				break;
			}
		}
		if(iCnt==Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
}

class program166
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iSize=0;
		boolean bRet=false;
		
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		N_Number nobj=new N_Number(iSize);
		System.out.println();
		
		nobj.Accept();
		System.out.println();
		
		nobj.Display();
		System.out.println();
		System.out.println();
		
		bRet=nobj.SearchNumber();
		if(bRet==true)
		{
			System.out.println("Given number is present.");
		}
		else
		{
			System.out.println("Given number is not present.");
		}
	}
}