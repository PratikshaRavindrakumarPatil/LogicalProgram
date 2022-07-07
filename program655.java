import java.lang.*;
import java.util.*;

class StringProblem
{
	public void Display(String str)
	{
		String str1=str.replaceAll("\\s+"," ");
		
		String Arr[]=str1.split(" ");
		
		//int i=0;
		StringBuffer newstr=new StringBuffer();
		
		for(int i =0; i< Arr.length; i++)
		{
			
			StringBuffer sb=new StringBuffer(Arr[i]);
			newstr.append((sb.reverse()).append(" "));
		}
		
		String finalstr=new String(newstr);
		System.out.println(finalstr.trim());
		
		
	}
	
}

class program655
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