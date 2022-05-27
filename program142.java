/*
OUTPUT:

Enter the number:
20
Entered number is:20
1       2       4       5       10
Total factors are:5

Enter the number:
-10
Entered number is:-10
1       2       5
Total factors are:3

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
	
	public int CountFactor()
	{
		int iCnt=0;
		int iCount=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo/2;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				System.out.print(iCnt+"\t");
				iCount++;
			}
		}
		
		return iCount;
	}
}

class program142
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		int iRet=0;
		
		nobj.Accept();
		nobj.Display();
		iRet=nobj.CountFactor();
		System.out.println();
		System.out.println("Total factors are:"+iRet);
		
	}
}
