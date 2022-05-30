//Addition of two number

import java.lang.*;
import java.util.*;
class Number
{
	public int Addition(int iNo1,int iNo2)
	{
		if(iNo1<0)
		{
			iNo1=-iNo1;
			
		}
			
		if(iNo2<0)
		{
			iNo2=-iNo2;
		}
			
		return iNo1+iNo2;
		
	}
}
class program1
{
	public static void main(String arg[])
	{
		int iRet=0;
		
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the first number:");
		int iValue1=sobj.nextInt();
		
		System.out.println("Enter the first number:");
		int iValue2=sobj.nextInt();
		
		Number aobj=new Number();
		
		iRet=aobj.Addition(iValue1,iValue2);
		System.out.println("Addition of two number:"+iRet);
	}
}