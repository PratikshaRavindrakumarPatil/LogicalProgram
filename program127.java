/*
OUTPUT:

Enter the number:
1234
Given number is:1234
4       3       2       1




*/

import java.lang.*;
import java.util.*;

class Digits
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
	
	public void DisplayDigit()
	{
		int iDigit=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			System.out.print(iDigit+"\t");
			iNo=iNo/10;
		}
	}
}

class program127
{
	public static void main(String arg[])
	{
		Digits dobj=new Digits();
		dobj.Accept();
		dobj.Display();
		dobj.DisplayDigit();
	}
}