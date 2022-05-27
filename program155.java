/*
OUTPUT:

Enter number :
153
Value is : 153
Given number is amstrong number.

Enter number :
1634
Value is : 1634
Given number is amstrong number.


Enter number :
111
Value is : 111
Given number is not amstrong number.


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

    public boolean CheckAmstrong()
	{
		int iCount=0,iCnt=0;
		int Temp=0,iDigit=0,iPow=1,iSum=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		Temp=iNo;
		
		while(iNo!=0)
		{	
			iCount++;
			iNo=iNo/10;
		}
		
		iNo=Temp;
		
		while(iNo!=0)
		{
			iPow=1;
			iDigit=iNo%10;
			for(iCnt=1;iCnt<=iCount;iCnt++)
			{
				iPow=iPow*iDigit;
			}
			iSum=iSum+iPow;
			iNo=iNo/10;
		}
		
		if(iSum==Temp)
		{
			return true;
		}
		else
		{
			return false;
		}
		
		
	}
}

class program155
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			boolean bRet=false;
			
            nobj.Accept();
            nobj.Display();

            bRet=nobj.CheckAmstrong();
			if(bRet==true)
			{
				System.out.println("Given number is amstrong number.");
			}
			else
			{
				System.out.println("Given number is not amstrong number.");
			}
    }
}