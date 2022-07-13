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
	
	public int Difference()
	{
		int i=0;
		int iSumE=0,iSumO=0;
		
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]%2==0)
			{
				iSumE=iSumE+Arr[i];
			}
			else
			{
				iSumO=iSumO+Arr[i];
			}
		}
		
		return (iSumE-iSumO);
	}
	
}

class program236
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int iSize=sobj.nextInt();
		
		ArrayX obj=new ArrayX(iSize);
		obj.Accept();
		int iRet=obj.Difference();
		System.out.println("Difference between additon of even and odd number is:"+iRet);
		
	}
}