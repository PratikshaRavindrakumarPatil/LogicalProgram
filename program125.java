/*
OUTPUT:

Enter the number:
12
Given number is:12
1       2       3       4       6




*/


import java.lang.*;
import java.util.*;

class Number
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
	
	public void DisplayFactor()
	{
		int iCnt=0;
		for(iCnt=1;iCnt<iNo;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				System.out.print(iCnt+"\t");
			}
		}
	}
}

class program125
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		nobj.Accept();
		nobj.Display();
		nobj.DisplayFactor();
	}
}