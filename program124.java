/*
OUTPUT:
Enter the number:
35
Given number is:35
Given number is divisible by 5 and 7

Enter the number:
20
Given number is:20
Given number is not divisible by 5 and 7

Enter the number:
-70
Given number is:-70
Given number is divisible by 5 and 7

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
	
	public boolean CheckEven()
	{
		if(((iNo%5)==0) && ((iNo%7)==0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program124
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		
		boolean bRet=false;
		
		nobj.Accept();
		nobj.Display();
		bRet=nobj.CheckEven();
		
		if(bRet==true)
		{
			System.out.println("Given number is divisible by 5 and 7");
		}
		else
		{
			System.out.println("Given number is not divisible by 5 and 7");
		}
		
		
	}
}