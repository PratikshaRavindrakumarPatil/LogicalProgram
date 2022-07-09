import java.lang.*;
import java.util.*;

class Number
{
	public void Display(int iNo)
	{
		int rev=0;
		int digit=0;
		
		while(iNo!=0)
		{
			digit=iNo%10;
			rev=rev*10+digit;
			iNo=iNo/10;
		}
		
		
		System.out.println("Reverse number:"+rev);
		
	}
}

class program671
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		int no=sobj.nextInt();
		
		Number obj=new Number();
		obj.Display(no);
		
	}
}
