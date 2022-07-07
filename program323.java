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


class program333
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
		
		Arrays.sort(Arr);
		Arrays.sort(Brr);
		
		if(Arrays.equals(Arr,Brr))
		{
			System.out.println("String are anagram");
		}
		else
		{
			System.out.println("String are not anagram");
		}
	
	}
	
}