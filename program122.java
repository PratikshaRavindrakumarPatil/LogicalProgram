/*
OUTPUT:
Enter the number:
5
Numbers are:
1
2
3
4
5

Addition of all number is:15


Enter the number:
-4
Numbers are:
1
2
3
4

Addition of all number is:10

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
		iNo=sobj.nextInt();
	}
	
	public void Display()
	{
		int iCnt=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		System.out.println("Numbers are:");
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.println(iCnt);
		}
		System.out.println();
	}
	
	public int Addition()
	{
		int iCnt=0;
		int iSum=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iSum=iSum+iCnt;
		}
		
		return iSum;
	}
}

class program122
{
	public static void main(String arg[])
	{
		Number nobj=new Number();
		
		int iRet=0;
		
		nobj.Accept();
		nobj.Display();
		iRet=nobj.Addition();
		System.out.println("Addition of all number is:"+iRet);
		
		
	}
}