import java.lang.*;
import java.util.*;


class Number
{
	public int iNo;
	
	public Number(int a)
	{
		this.iNo=a;
	}
	
	public int Multiplication()
	{
		int iMult=1;
		
		while(iNo!=0)
		{
			iMult=iMult*(iNo%10);
			iNo=iNo/10;
		}
		
		return iMult;
	}
	
}


class program244
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int no=sobj.nextInt();
		
		Number nobj=new Number(no); 
		int iRet=nobj.Multiplication();
		System.out.println("Multiplication of all digit is:"+iRet);
	}
}