import java.lang.*;
import java.util.*;

class StringProblem
{
	public void Display(String str)
	{
		String str1=str.replaceAll("\\s+"," ");
		String str2=str1.trim();
		
		String Arr[]=str2.split(" ");
		
		StringBuffer str3=new StringBuffer();
		int i=0;
		
		for(i=0;i<Arr.length;i++)
		{
			StringBuffer sb=new StringBuffer(Arr[i]);
			str3.append((sb.reverse())+" ");
		}
		
		String str4=new String(str3);
		System.out.println(str3);
		
	}
}


class program667
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringProblem obj=new StringProblem();
		obj.Display(str);
		
	}
}