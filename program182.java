/*
OUTPUT:

Enter the number:
4
Given number is:4
-4      -3      -2      -1      0       1       2       3       4
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
		
	
		for(iCnt=-iNo;iCnt<=iNo;iCnt++)
		{
			System.out.print(iCnt+"\t");
		}
		
	}
	
}

class program182
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
