/*
OUTPUT:

Enter the number:
10
Given number is:10
10      9       8       7       6       5       4       3       2       1


Enter the number:
-4
Given number is:-4
4       3       2       1
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
		
	}
	
}

class program175
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
