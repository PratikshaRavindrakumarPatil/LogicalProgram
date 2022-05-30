/*
OUTPUT:

Enter number :
202
Entered number is : 202
There is zero

Enter number :
12345
Entered number is : 12345
There is no zero


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
        System.out.println("Entered number is : "+this.iNo);
    }

    public boolean CheckDigit()
	{
		int iDigit=0;
		boolean Flag=false;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit==0)
			{
				Flag=true;
				break;
			}
			iNo=iNo/10;
		}
		
		if(Flag==true)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
}

class program239
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			boolean bRet=false;
            nobj.Accept();
            nobj.Display();

            bRet=nobj.CheckDigit();
			if(bRet==true)
			{
				System.out.println("There is zero");
			}
			else
			{
				System.out.println("There is no zero");
			}
    }
}