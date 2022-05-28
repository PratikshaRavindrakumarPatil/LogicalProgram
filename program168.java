/*
OUTPUT:

Enter the size of array:
5

Enter the element:
10
1
70
10
40

Elements of array are:
10      1       70      10      40

Enter the number that you want to search:
10
The number is first occured at index:0

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
	
	public int FirstOccurence()
	{
		int iNo=0,iCnt=0;
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number that you want to search:");
		iNo=sobj.nextInt();
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt]==iNo)
			{
				break;
			}
		}
		return iCnt;
	}
	
}

class program168
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
		
		iRet=nobj.FirstOccurence();
		System.out.println("The number is first occured at index:"+iRet);
		
	}
}