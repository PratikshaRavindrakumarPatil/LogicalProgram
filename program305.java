import java.lang.*;
import java.util.*;

class program305
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the string:");
		String str=sobj.nextLine();
		
		char Arr[]=str.toCharArray();
		
		int iCnt=0;
		int Count=0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt]>='a') && (Arr[iCnt]<='z'))
			{
				Count++;
			}
		}
		
		System.out.println("Number of small letter are:"+Count);
	
	}
}