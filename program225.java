/*
OUTPUT:

Enter number :
200
Entered number is: 200
Given number is divisible by 5.

Enter number :
-10
Entered number is: -10
Given number is divisible by 5.

Enter number :
212
Entered number is: 212
Given number is not divisible by 5.


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
        System.out.println("Entered number is: "+this.iNo);
    }

    public boolean CheckDivisible()
	{
		if(iNo%5==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program225
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			boolean bRet=false;
			
            nobj.Accept();
            nobj.Display();

            bRet=nobj.CheckDivisible();
			if(bRet==true)
			{
				System.out.println("Given number is divisible by 5.");
			}
			else
			{
				System.out.println("Given number is not divisible by 5.");
			}
			
    }
}