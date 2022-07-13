import java.lang.*;
import java.util.*;

class StringX
{
	public String str;
	
	public StringX(String a)
	{
		this.str=a;
	}
	
	public int CountSmall()
	{
		char Arr[]=str.toCharArray();
		int Count=0;
		
		
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='a')&&(Arr[i]<='z'))
			{
				Count++;
			}
		}
		
		return Count;
	}
	
}

class program232
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX(str);
		int iRet=obj.CountSmall();
		System.out.println("Count of small letter is:"+iRet);
		
	}
}