/*
OUTPUT:
Enter number :
12
Entered number is: 12
Summation of factor:16
Summation of no factor:50
Difference between sumation of factor and no factor:-34



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

    public int Difference()
	{
		int iCnt=0;
		int iSumF=0;
		int iSumN=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		
		
		for(iCnt=1;iCnt<=iNo/2;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				iSumF=iSumF+iCnt;
			}
			
		}
		System.out.println("Summation of factor:"+iSumF);
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			if((iNo%iCnt)!=0)
			{
				iSumN=iSumN+iCnt;
			}
		}
		System.out.println("Summation of no factor:"+iSumN);
		
		return(iSumF-iSumN);
	}
}

class program237
{
    public static void main(String b[])
    {
            Number nobj = new Number();
	
			int iRet=0;

            nobj.Accept();
            nobj.Display();

            iRet=nobj.Difference();
			System.out.println("Difference between sumation of factor and no factor:"+iRet);
    }
}