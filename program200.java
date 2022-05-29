/*
OUTPUT:
Enter the number:
6
Given number is:6
A       B       C       D       E       F

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
		char ch='\0';
		for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
		{
			System.out.print(ch+"\t");
		}
		
	}
	
}

class program200
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
