/*
OUTPUT:
Enter the number:
8
Given number is:8
1       2       3       4       5       6       7       8

*/

import java.lang.*;
import java.util.*;

class Pattern
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		iNo=sobj.nextInt();
		
		
	}
	
	public void Display()
	{
		System.out.println("Given number is:"+iNo);
		
	}
	
	public void DisplayPattern()
	{
		int iCnt=0;
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.print(iCnt+"\t");
		}
		
	}
	
}

class program173
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
