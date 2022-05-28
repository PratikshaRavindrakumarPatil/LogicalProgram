/*
OUTPUT:

Enter the size of array:
5

Enter the element:
11
21
20
50
21

Elements of array are:
11      21      20      50      21

Enter the number that you want to search:
21
The number is Last occured at index:4


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
	
	public int LastOccurence()
	{
		int iNo=0,iCnt=0;
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number that you want to search:");
		iNo=sobj.nextInt();
		
		for(iCnt=(Arr.length-1);iCnt>=0;iCnt--)
		{
			if(Arr[iCnt]==iNo)
			{
				break;
			}
		}
		return iCnt;
	}
	
}

class program169
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
		
		iRet=nobj.LastOccurence();
		System.out.println("The number is Last occured at index:"+iRet);
		
	}
}