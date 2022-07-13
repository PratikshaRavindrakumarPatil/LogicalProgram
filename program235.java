import java.lang.*;
import java.util.*;

class StringX
{
	public String str;
	
	public StringX(String a)
	{
		this.str=a;
	}
	
	public void Reverse()
	{
		String Arr[]=str.split(" ");
		
		StringBuffer str1=new StringBuffer();
		
		for(int i=0;i<Arr.length;i++)
		{
			StringBuffer sb=new StringBuffer(Arr[i]);
			str1.append(sb.reverse());
			
		}
		
		String str2=new String(str1);
		System.out.println(str2);
	}
	
}

class program235
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX(str);
		obj.Reverse();
		
	}
}