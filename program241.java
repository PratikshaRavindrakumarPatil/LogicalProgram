/*
OUTPUT:

Enter number :
23444
Entered number is : 23444
The frequency of 4 is:3

Enter number :
977
Entered number is : 977
The frequency of 4 is:0

Enter number :
34355
Entered number is : 34355
The frequency of 4 is:1

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

    public int Frequency()
	{
		int iDigit=0;
		int iCount=0;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit%4)==0)
			{
				iCount++;
			}
			iNo=iNo/10;
		}
		
		
		return iCount;
	}
}

class program241
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Frequency();
			System.out.println("The frequency of 4 is:"+iRet);
			
    }
}