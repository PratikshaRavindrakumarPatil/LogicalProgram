import java.lang.*;
import java.util.*;

class StringX
{
	public String str;
	
	public StringX(String a)
	{
		this.str=a;
	}
	
	public boolean CheckVowel()
	{
		char Arr[]=str.toCharArray();
		int CountS=0,CountC=0;
		
		int i=0;
		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u')||(Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U'))
			{
				break;
			}
		}
		
		if(i==Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
}

class program234
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		StringX obj=new StringX(str);
		boolean bRet=obj.CheckVowel();
		
		if(bRet==true)
		{
			System.out.println("Vowels are present");
		}
		else
		{
			System.out.println("Vowels are not present");
		}
		
		
	}
}