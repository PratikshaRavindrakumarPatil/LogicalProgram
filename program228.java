/*
OUTPUT:

Enter number :
10
Entered number is: 10
Given number is even.

Enter number :
-1
Entered number is: -1
Given number is odd.

Enter number :
21
Entered number is: 21
Given number is odd.


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

    public boolean CheckEven()
	{
		if(iNo%2==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program228
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			boolean bRet=false;
			
            nobj.Accept();
            nobj.Display();

            bRet=nobj.CheckEven();
			if(bRet==true)
			{
				System.out.println("Given number is even.");
			}
			else
			{
				System.out.println("Given number is odd.");
			}
			
    }
}