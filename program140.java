/*
OUTPUT:

Enter the number:
11
Entered number is:11
Given number is prime

Enter the number:
21
Entered number is:21
Given number is not prime

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
		this.iNo=sobj.nextInt();
		
	}
	
	public void Display()
	{
		System.out.println("Entered number is:"+this.iNo);
	}
	
	public boolean CheckPrime()
	{
		int iCnt=0;
		int iCount=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				iCount++;
			}
		}
		
		if(iCount==2)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}

class program140
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		
		boolean bRet=false;
		nobj.Accept();
		nobj.Display();
		bRet=nobj.CheckPrime();
		
		if(bRet==true)
		{
			System.out.println("Given number is prime");
		}
		else
		{
			System.out.println("Given number is not prime");
		}
		
	}
}
