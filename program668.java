import java.lang.*;
import java.util.*;

class StringProblem
{
	public void Display(String str)
	{
		String str1=str.replaceAll("\\s"," ");
		
		char Arr[]=str1.toCharArray();
		int frequency[]=new int[26];
		
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			frequency[Arr[i]-'a']++;
		}
		
		for(i=0;i<frequency.length;i++)
		{
			System.out.print(frequency[i]);
		}
		
	}
}


class program668
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