/*
OUTPUT:

Enter number :
87234
Value is : 87234
Addition of even digit is:14

Enter number :
-200
Value is : -200
Addition of even digit is:2



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

    public int SumEvenDigit()
	{
		int iDigit=0;
		int iSum=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if(iDigit%2==0)
			{
				iSum=iSum+iDigit;
			}
			iNo=iNo/10;
		}
		return iSum;
	}
}

class program149
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
			
            nobj.Accept();
            nobj.Display();

            iRet=nobj.SumEvenDigit();
			System.out.println("Addition of even digit is:"+iRet);
    }
}