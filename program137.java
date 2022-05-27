/*
OUTPUT:

Enter the number:
6
Entered number is:6
Given number is perfect number.

Enter the number:
12
Entered number is:12
Given number is not perfect number.

Enter the number:
28
Entered number is:28
Given number is perfect number.

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
	
	public boolean SumFactor()
	{
		int iCnt=0;
		int iSum=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=(iNo/2);iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				
				iSum=iSum+iCnt;
			}
			if(iSum>iNo)
			{
				break;
			}
		}
		
		if(iSum==iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program137
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		boolean bRet=false;
		
		nobj.Accept();
		nobj.Display();
		bRet=nobj.SumFactor();
		
		if(bRet==true)
		{
			System.out.println("Given number is perfect number.");
		}
		else
		{
			System.out.println("Given number is not perfect number.");
		}
	}
}
