import java.lang.*;
import java.util.*;

class StringX
{
	public String str;
	
	public StringX(String a)
	{
		this.str=a;
	}
	
	public int CountCap()
	{
		char Arr[]=str.toCharArray();
		int Count=0;
		
		
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i]>='A')&&(Arr[i]<='Z'))
			{
				Count++;
			}
		}
		
		return Count;
	}
	
}

class program231
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX(str);
		int iRet=obj.CountCap();
		System.out.println("Count of capital letter is:"+iRet);
		
	}
}