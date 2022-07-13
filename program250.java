import java.lang.*;
import java.util.*;

class ArrayX
{
	public int iLength;
	public int Arr[];
	
	
	public ArrayX(int a)
	{
		this.iLength=a;
		this.Arr=new int[iLength];
		
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
	
	public long Multiplication()
	{
		int i=0;
		long iMult=1;
		
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]%2!=0)
			{
				iMult=iMult*Arr[i];
			}
		}
		
		return iMult;	
	}
	
}

class program250
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int iSize=sobj.nextInt();
		
		ArrayX obj=new ArrayX(iSize);
		obj.Accept();
		long iRet=obj.Multiplication();
		System.out.println("Multiplication of off number is:"+iRet);
		
	}
}