import java.lang.*;
import java.util.*;

class StringX
{
	public String str;
	
	public StringX(String a)
	{
		this.str=a;
	}
	
	public int Difference()
	{
		char Arr[]=str.toCharArray();
		int CountS=0,CountC=0;
		
		
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='a')&&(Arr[i]<='z'))
			{
				CountS++;
			}
			else if((Arr[i]>='A')&&(Arr[i]<='Z'))
			{
				CountC++;
			}
		}
		
		return (CountS-CountC);
	}
	
}

class program233
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX(str);
		int iRet=obj.Difference();
		System.out.println("Difference between frequency of small and capital letter is:"+iRet);
		
	}
}