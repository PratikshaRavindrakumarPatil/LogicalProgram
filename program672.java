/*

Enter the string:
ssssppppppssaaapppp
More occured letter:p:10 times


*/

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
		
		int iMax=0;
		int ipos=0;
		
		for(i=0;i<frequency.length;i++)
		{
			if(iMax < frequency[i])
			{
				iMax=frequency[i];
				ipos=i;
			}
		}
		
		System.out.println("More occured letter:"+(char)(ipos+'a')+":"+iMax+" times");
	}
}


class program672
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