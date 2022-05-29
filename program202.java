/*
OUTPUT:
      
Enter the number:
5
Given number is:5
1       B       3       D       5

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
			if((iCnt%2)==0)
			{
				System.out.print(ch+"\t");
			}
			else
			{
				System.out.print(iCnt+"\t");
			}
		}
		
	}
	
}

class program202
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
