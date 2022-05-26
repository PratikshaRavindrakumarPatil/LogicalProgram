/*
OUTPUT:
Enter count of number:
5

Enter the number:
11
21
51
101
121

The numbers are:
11      21      51      101     121


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
		System.out.println("Enter the number:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		
	}
	
	public void Display()
	{
		int iCnt=0;
		
		System.out.println("The numbers are:");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+"\t");
		}
	}
}


class program131
{
	public static void main(String arg[])
	{
		
		int iSize=0;
		
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter count of number:");
		iSize=sobj.nextInt();
		
		N_Number nobj=new N_Number(iSize);
		
		nobj.Accept();
		nobj.Display();
		
		
	}
}