/*
OUTPUT:
Enter the first number:
10
Enter the second number:
11
First number is:10
Second number is:11
Addition is:21

*/
import java.lang.*;
import java.util.*;

class Addition
{
	private	int iNo1;
	private int iNo2;
	private int iSum;
	
	
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the first number:");
		iNo1=sobj.nextInt();
	
		System.out.println("Enter the second number:");
		iNo2=sobj.nextInt();
		
		
		
	}
	
	public void Display()
	{
		System.out.print("First number is:"+iNo1+"\n");
		System.out.print("Second number is:"+iNo2+"\n");
		
	}
	
	
	public int Add()
	{
		iSum=iNo1+iNo2;
		return iSum;
	}
	
}
class program116
{
	public static void main(String arg[])
	{
		int iRet=0;
		Addition aobj=new Addition();
		
		aobj.Accept();
		aobj.Display();
		iRet=aobj.Add();
		
		
		System.out.println("Addition is:"+iRet);
	}
}