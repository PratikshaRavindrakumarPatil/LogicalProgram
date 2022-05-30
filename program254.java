/*
OUTPUT:

Enter the size of array:
6
Enter the number:
10
35
40
55
105
100
The number are:
10      35      40      55      105     100
Number divisible by 5 and even are:
10      40      100

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
	
	public void DisplayNumber()
	{
		int iCnt=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(((Arr[iCnt]%5)==0) && ((Arr[iCnt]%2)==0))
			{
				System.out.print(Arr[iCnt]+"\t");
			}
		}
	}
	
}

class program254
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
		System.out.println("\nNumber divisible by 5 and even are:");
		nobj.DisplayNumber();
		
	}
}