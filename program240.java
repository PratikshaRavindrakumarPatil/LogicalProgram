/*
OUTPUT:

Enter number :
1232
Entered number is : 1232
The frequency of 2 is:2

Enter number :
111
Entered number is : 111
The frequency of 2 is:0


Enter number :
0000
Entered number is : 0
The frequency of 2 is:0
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
			if(iDigit==2)
			{
				iCount++;
			}
			iNo=iNo/10;
		}
		
		
		return iCount;
	}
}

class program240
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Frequency();
			System.out.println("The frequency of 2 is:"+iRet);
			
    }
}