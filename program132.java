/*
OUTPUT:

Enter the number:
222435
Entered number is:222435
4       2       2       2

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
	
	public void EvenDigit()
	{
		int iDigit=0;
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit%2==0)
			{
				System.out.print(iDigit+"\t");
			}
			iNo=iNo/10;
		}
	}
}

class program132
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		nobj.Accept();
		nobj.Display();
		nobj.EvenDigit();
		
	}
}