/*
OUTPUT:
Enter the size of array:
5

Enter the element:
11
21
51
101
111

Elements of array are:
11      21      51      101     111

Addition of all number is:295

*/
import java.lang.*;
import java.util.*;

class N_Number
{
	private int Arr[];
	
	public N_Number(int iLength)
	{
		Arr=new int[iLength];
	}
	
	public void Accept()
	{
		int iCnt=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the element:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		
	}
	
	public void Display()
	{
		int iCnt=0;
		System.out.println("Elements of array are:");
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
	}
	
	public int Summation()
	{
		int iCnt=0,iSum=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
				iSum=iSum+Arr[iCnt];
		}
		return iSum;
	}
}

class program162
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		int iSize=0,iRet=0;
		
		System.out.println("Enter the size of array:");
		iSize=sobj.nextInt();
		
		N_Number nobj=new N_Number(iSize);
		System.out.println();
		
		nobj.Accept();
		System.out.println();
		
		nobj.Display();
		System.out.println();
		System.out.println();
		
		iRet=nobj.Summation();
		System.out.println("Addition of all number is:"+iRet);
		System.out.println();
	}
}