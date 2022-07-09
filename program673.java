import java.lang.*;
import java.util.*;

class StringProblem
{
	public void Display(String str,String str1)
	{
		
		char Arr[]=str.toCharArray();
		char Brr[]=str1.toCharArray();
		
		int frequency[]=new int[26];
		int frequency1[]=new int[26];
		
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			frequency[Arr[i]-'a']++;
		}
		
		
		for(i=0;i<Brr.length;i++)
		{
			frequency1[Brr[i]-'a']++;
		}
		
		for(i=0;i<frequency.length;i++)
		{
			if(frequency[i]!=frequency1[i])
			{
				break;
			}
		}
		
		if(i==26)
		{
			System.out.println("String are angram");
		}
		else
		{
			System.out.println("String are not Not angram");
		}
		
		
	}
}


class program673
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the first string:");
		String str=sobj.nextLine();
		
		System.out.println("Enter the second string:");
		String str1=sobj.nextLine();
		
		StringProblem obj=new StringProblem();
		obj.Display(str,str1);
		
	}
}