/*
OUTPUT:

Enter the size of array:
5
Enter the number:
343
33
23
56
5

The number are:
343     33      23      56      5
The addition of digit of each number is:
10      6       5       11      5

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
	
	public void SumDigit()
	{
		int iCnt=0;
		int iSum=0;
		int iDigit=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			
			iSum=0;
			while(Arr[iCnt]!=0)
			{
				iDigit=Arr[iCnt]%10;
				iSum=iSum+iDigit;
				Arr[iCnt]=Arr[iCnt]/10;
			}
			System.out.print(iSum+"\t");
			
		}
		
	}
	
}

class program269
{
	public static void main(String arg[])
	{
		int iSize=0;
		
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		
		N_Number nobj=new N_Number(iSize);
		
		nobj.Accept();
		System.out.println();
		nobj.Display();
		System.out.println();
		System.out.println("The addition of digit of each number is:");
		nobj.SumDigit();
		
		
		
	}
}