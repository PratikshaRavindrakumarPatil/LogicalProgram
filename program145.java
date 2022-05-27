/*
OUTPUT:

Enter number :
98345
Value is : 98345
Total digits are:5


Enter number :
37
Value is : 37
Total digits are:2

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

    public int CountDigit()
	{
		
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			
			iCnt++;
			iNo=iNo/10;
		}
		return iCnt;
	}
}

class program145
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
			
            nobj.Accept();
            nobj.Display();

            iRet=nobj.CountDigit();
			System.out.println("Total digits are:"+iRet);
    }
}