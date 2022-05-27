/*
OUTPUT:

Enter the number:
12
Entered number is:12
1       2       3       4       6
Addition of factor is:16


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
	
	public int SumFactor()
	{
		int iCnt=0;
		int iSum=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<iNo;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				System.out.print(iCnt+"\t");
				iSum=iSum+iCnt;
			}
		}
		
		return iSum;
	}
}

class program135
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		int iRet=0;
		
		nobj.Accept();
		nobj.Display();
		iRet=nobj.SumFactor();
		System.out.println("Addition of factor is:"+iRet);
		
	}
}
