import java.lang.*;
import java.util.*;


class Number
{
	public int iNo;
	
	public Number(int a)
	{
		this.iNo=a;
	}
	
	public int Count()
	{
		int Count=0;
		int iDigit=0;
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit>3)&&(iDigit<7))
			{
				Count++;
			}
			iNo=iNo/10;
		}
		
		return Count;
	}
	
}


class program243
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int no=sobj.nextInt();
		
		Number nobj=new Number(no); 
		int iRet=nobj.Count();
		System.out.println("Count of digit which is lies between 3 to 7:"+iRet);
	}
}