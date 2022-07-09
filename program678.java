/*

Enter the first string:
care
Enter the second string:
racee
String are not angram due to diffrernt length

*/

import java.lang.*;
import java.util.*;

class StringProblem
{
	public void Display(String str,String str1)
	{
		
		str=str.toLowerCase();
		str1=str1.toLowerCase();
		
		
		char Arr[]=str.toCharArray();
		char Brr[]=str1.toCharArray();
		
		Arrays.sort(Arr);
		Arrays.sort(Brr);
		
		if(Arrays.equals(Arr,Brr))
		{
			System.out.println("String are anagram");
		}
		else
		{
			System.out.println("String not are anagram");
		}
		
		
	}
}


class program678
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