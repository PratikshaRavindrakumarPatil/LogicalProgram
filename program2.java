//print 1 to 10 number on screen

import java.lang.*;
import java.util.*;
class Number
{
	public void Display(int iNo)
	{
		System.out.println("Series are:");
		for(int iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.println(iCnt);
		}
	}
}
class program2
{
	public static void main(String arg[])
	{
		
		
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		int iValue=sobj.nextInt();
		
		Number nobj=new Number();
		
		nobj.Display(iValue);

	}
}