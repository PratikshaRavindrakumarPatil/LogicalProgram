/*
OUTPUT:

Enter the size of array:
5
Enter the number:
11
20
22
40
21
The number are:
11      20      22      40      21
Even number are:
20      22      40

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
	
	public void EvenNumber()
	{
		int iCnt=0;
		System.out.println("\nEven number are:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]%2)==0)
			{
				System.out.print(Arr[iCnt]+"\t");
			}
		}
	}
	
}

class program249
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
		nobj.EvenNumber();
		
	}
}