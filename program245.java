import java.lang.*;
import java.util.*;


class Number
{
	public int iNo;
	
	public Number(int a)
	{
		this.iNo=a;
	}
	
	public int Difference()
	{
		int iSumE=0;
		int iSumO=0;
		
		while(iNo!=0)
		{
			if((iNo%10)%2==0)
			{
				iSumE=iSumE+(iNo%10);
			}
			else
			{
				iSumO=iSumO+(iNo%10);
			}
			iNo=iNo/10;
		}
		
		return iSumE-iSumO;
	}
	
}


class program245
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int no=sobj.nextInt();
		
		Number nobj=new Number(no); 
		int iRet=nobj.Difference();
		System.out.println("Difference between summation of even and odd digit is:"+iRet);
	}
}