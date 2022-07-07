/*

Enter the first string:
care
Enter the  second string:
race
Strings are anagram


Enter the first string:
Hello
Enter the  second string:
Demo
Strings are not anagram


*/

import java.io.*;
import java.util.*;


class program321
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the first string:");
		String str1=sobj.nextLine();
		
		str1=str1.toLowerCase();
		char Arr[]=str1.toCharArray();
		int frequency1[]=new int[26];
		
		System.out.println("Enter the  second string:");
		String str2=sobj.nextLine();
		
		str2=str2.toLowerCase();
		char Brr[]=str2.toCharArray();
		int frequency2[]=new int[26];
		
		
		if((str1.length())!=(str2.length()))
		{
			System.out.println("Strings are not anagram because length are different");
			return;
		}
	
		int i=0;
		int iMax=0;
		int ipos=0;
		
		for(i=0;i<Arr.length;i++)
		{
			frequency1[Arr[i]-'a']++;
			frequency2[Brr[i]-'a']++;
		}
		
		for(i=0;i<frequency1.length;i++)
		{
			if(frequency1[i]!=frequency2[i])
			{
				break;
			}
		}
		
		if(i==26)
		{
			System.out.println("Strings are anagram");
		}
		else
		{
			System.out.println("Strings are not anagram");
		}
	}
	
}