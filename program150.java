/*
OUTPUT:

Enter number :
234
Value is : 234
Reverse number is:432

Enter number :
-1214
Value is : -1214
Reverse number is:4121

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

    public int Reverse()
	{
		int iDigit=0;
		int iRev=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
		}
		return iRev;
	}
}

class program150
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
			
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Reverse();
			System.out.println("Reverse number is:"+iRet);
    }
}