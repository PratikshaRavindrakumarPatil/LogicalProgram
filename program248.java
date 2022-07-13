import java.lang.*;
import java.util.*;

class ArrayX
{
	public int iLength;
	public int Arr[];
	public int iNo;
	
	public ArrayX(int a,int b)
	{
		this.iLength=a;
		this.Arr=new int[iLength];
		this.iNo=b;
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
	
	public int FrequencyLast()
	{
		int i=0;
		
		
		for(i=Arr.length-1;i>=0;i--)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		
		return i;	
	}
	
}

class program248
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array:");
		int iSize=sobj.nextInt();
		
		System.out.println("Enter the number that you want to search:");
		int iValue=sobj.nextInt();
		
		
		ArrayX obj=new ArrayX(iSize,iValue);
		obj.Accept();
		int iRet=obj.FrequencyLast();
		System.out.println(iValue+" last occured at index:"+iRet);
		
	}
}