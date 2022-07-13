import java.lang.*;
import java.util.*;

class ArrayX
{
	public int iLength;
	public int Arr[];
	public int iStart;
	public int iEnd;
	
	
	public ArrayX(int a,int b,int c)
	{
		this.iLength=a;
		this.Arr=new int[iLength];
		this.iStart=b;
		this.iEnd=c;
	}
	
	public void Accept()
	{
		int i=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number:");
		for(i=0;i<Arr.length;i++)
		{
			Arr[i]=sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int i=0;
		
		
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]>iStart && Arr[i]<iEnd)
			{
				System.out.print(Arr[i]+"\t");
			}
		}	
	}
	
}

class program249
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int iSize=sobj.nextInt();
		
		System.out.println("Enter the starting point:");
		int iValue1=sobj.nextInt();
		
		System.out.println("Enter the ending point:");
		int iValue2=sobj.nextInt();
		
		ArrayX obj=new ArrayX(iSize,iValue1,iValue2);
		obj.Accept();
		obj.Display();
		
	}
}