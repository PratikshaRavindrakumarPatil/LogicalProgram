/*
OUTPUT:
Enter number :
12233
Entered number is : 12233
The Difference between summation of even and odd is:-3

Enter number :
8765
Entered number is : 8765
The Difference between summation of even and odd is:2

Enter number :
6450
Entered number is : 6450
The Difference between summation of even and odd is:5

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

    public int SumDiffrence()
	{
		int iDigit=0;
		int SumEven=0,SumOdd=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit%2)==0)
			{
				SumEven=SumEven+iDigit;
			}
			else
			{
				SumOdd=SumOdd+iDigit;
			}
			iNo=iNo/10;
		}
		
		return(SumEven-SumOdd);
	}
}

class program247
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.SumDiffrence();
			System.out.println("The Difference between summation of even and odd is:"+iRet);
			
    }
}