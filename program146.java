/*
OUTPUT:

Enter number :
2134
Value is : 2134
Addition of digits are:10

Enter number :
-45
Value is : -45
Addition of digits are:9
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

    public int SumDigit()
	{
		int iDigit=0;
		int iSum=0;
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
		}
		return iSum;
	}
}

class program146
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
			
            nobj.Accept();
            nobj.Display();

            iRet=nobj.SumDigit();
			System.out.println("Addition of digits are:"+iRet);
    }
}