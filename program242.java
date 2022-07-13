import java.lang.*;
import java.util.*;


class Number
{
	public int iNo;
	
	public Number(int a)
	{
		this.iNo=a;
	}
	
	public int CountOdd()
	{
		int Count=0;
		
		while(iNo!=0)
		{
			if((iNo%10)%2!=0)
			{
				Count++;
			}
			iNo=iNo/10;
		}
		
		return Count;
	}
	
}


class program242
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int no=sobj.nextInt();
		
		Number nobj=new Number(no); 
		int iRet=nobj.CountOdd();
		System.out.println("Count of odd digit is:"+iRet);
	}
}