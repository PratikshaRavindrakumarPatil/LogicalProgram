/*
OUTPUT:

Enter the size of array:
5
Enter the number:
11
30
22
46
78
Enter the number that you want to search:
46

The number are:
11      30      22      46      78

Last occurence index of entered number is:3


*/

import java.lang.*;
import java.util.*;

class N_Number
{
	private int Arr[];
	private int iNo;
	
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
		
		System.out.println("Enter the number that you want to search:");
		iNo=sobj.nextInt();
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
	
	public int LastOccurence()
	{
		int iCnt=0;
		
		boolean bFlag=false;
		
		for(iCnt=(Arr.length-1);iCnt>=0;iCnt--)
		{
			if(Arr[iCnt]==iNo)
			{
				bFlag=true;
				break;
			}
		}
		return iCnt;
	}
	
}

class program263

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
		iRet=nobj.LastOccurence();
		
		System.out.println("\n Last occurence index of entered number is:"+iRet);
		
		
	}
}