/*


*/

import java.io.*;
import java.util.*;


class StringX
{
	public void Display(String str)
	{
		char Arr[]=str.toCharArray();
		int frequency[]=new int[26];
		
		int i=0;
		
		for(i=0;i<Arr.length;i++)
		{
			frequency[Arr[i]-'a']++;
			
		}
		
		for(i=0;i<frequency.length;i++)
		{
			System.out.println(frequency[i]);
		}
	}
}


class program661
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();

		StringX obj=new StringX();
		obj.Display(str);
		
	}
}