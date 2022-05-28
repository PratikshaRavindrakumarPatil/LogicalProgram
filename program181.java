/*
OUTPUT:

Enter the number:
3
Given number is:3
3       2       1       1       2       3
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
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		
		for(iCnt=iNo;iCnt>=1;iCnt--)
		{
			System.out.print(iCnt+"\t");
		}
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.print(iCnt+"\t");
		}
		
	}
	
}

class program181
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
