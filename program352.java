/*

Enter the Number:
79959
39
12
3

*/


import java.lang.*;
import java.util.*;

class program352
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		int iNo=sobj.nextInt();
		
		int iDigit=0;
		int iSum=0;
		
		while(iNo>=9)
		{
			
			while(iNo!=0)
			{
				iDigit=iNo%10;
				iSum=iSum+iDigit;
				iNo=iNo/10;
			}
			iNo=iSum;
			iSum=0;
			System.out.println(iNo);
		}
	}
}