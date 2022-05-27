/*
OUTPUT:

Enter number :
121
Value is : 121
Given number is palindrome

Enter number :
-1200
Value is : -1200
Given number is not palindrome


Enter number :
0022
Value is : 22
Given number is palindrome

*/
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo);
    }

    public boolean CheckPalindrome()
	{
		int iDigit=0;
		int iRev=0,Temp=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		Temp=iNo;
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
		}
		
		if(iRev==Temp)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program151
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			boolean bRet=false;
			
            nobj.Accept();
            nobj.Display();

            bRet=nobj.CheckPalindrome();
			if(bRet==true)
			{
				System.out.println("Given number is palindrome");
			}
			else
			{
				System.out.println("Given number is not palindrome");
			}
    }
}