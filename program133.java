/*
OUTPUT:

Enter the number:
222435
Entered number is:222435
4       2       2       2


Enter the number:
-12456
Entered number is:-12456
6       4       2

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
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
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

class program133
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		nobj.Accept();
		nobj.Display();
		nobj.EvenDigit();
		
	}
}
