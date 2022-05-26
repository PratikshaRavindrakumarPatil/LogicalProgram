/*
OUTPUT:
Enter the number:
12
Given number is:12
Given number is even

Enter the number:
-10
Given number is:-10
Given number is even


Enter the number:
21
Given number is:21
Given number is odd

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
		if((iNo%2)==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program123
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
			System.out.println("Given number is even");
		}
		else
		{
			System.out.println("Given number is odd");
		}
		
		
	}
}