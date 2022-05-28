/*
OUTPUT:
Enter the size of array:
5

Enter the element:
111
21
61
80
121

Elements of array are:
111     21      61      80      121

Maximum number is:121

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
	
	public int Maximum()
	{
		int iCnt=0,iMax=0;
		iMax=Arr[0];
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(iMax<Arr[iCnt])
			{
				iMax=Arr[iCnt];
			}
		}
		return iMax;
	}
}

class program163
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
		
		iRet=nobj.Maximum();
		System.out.println("Maximum number is:"+iRet);
		System.out.println();
	}
}