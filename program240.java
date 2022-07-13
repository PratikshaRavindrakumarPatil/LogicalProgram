import java.lang.*;
import java.util.*;

class ArrayX
{
	public int iLength;
	public int Arr[];
	
	public ArrayX(int a)
	{
		this.iLength=a;
		Arr=new int[iLength];
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
		int iSum=0;
		
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]%11==0)
			{
				System.out.print(Arr[i]+"\t");
			}
		}
		
		
	}
	
}

class program240
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int iSize=sobj.nextInt();
		
		ArrayX obj=new ArrayX(iSize);
		obj.Accept();
		obj.Display();
		
		
	}
}