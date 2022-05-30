/*
OUTPUT:
Enter number :

Enter number :
12
Entered number is: 12
Multiplication of factor is:144


Enter number :
4
Entered number is: 4
Multiplication of factor is:2

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

    public int SumNonFactor()
	{
		int iCnt=0;
		int iSum=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo/2;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}
		return iSum;
	}
}

class program236
{
    public static void main(String b[])
    {
            Number nobj = new Number();
	
			int iRet=0;

            nobj.Accept();
            nobj.Display();

            iRet=nobj.SumNonFactor();
			System.out.println("Addition of non factor is:"+iRet);
    }
}