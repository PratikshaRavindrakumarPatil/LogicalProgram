/*
OUTPUT:

Enter the number:
5
Given number is:5
#       2       #       4       #

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
		
	
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if(iCnt%2==0)
			{
				System.out.print(iCnt+"\t");
			}
			else
			{
				System.out.print("#\t");
			}
		}
		
	}
	
}

class program184
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
