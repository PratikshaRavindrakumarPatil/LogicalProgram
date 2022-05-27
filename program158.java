/*
OUTPUT:

Enter the size of array:
5

Enter the element:
11
20
42
101
111

Elements of array are:
11      20      42      101     111

Odd number are:
11      101     111



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
	
	public void DisplayOdd()
	{
		int iCnt=0;
		System.out.println("Odd number are:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]%2)!=0)
			{
				System.out.print(Arr[iCnt]+"\t");
			}
		}
	}
}

class program158
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iSize=0;
		
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		N_Number nobj=new N_Number(iSize);
		System.out.println();
		nobj.Accept();
		System.out.println();
		nobj.Display();
		System.out.println();
		System.out.println();
		nobj.DisplayOdd();
		System.out.println();
	}
}