/*
OUTPUT:

Enter number :
2344
Entered number is : 2344
The frequency of digits which are even:3


Enter number :
8433
Entered number is : 8433
The frequency of digits which are even:2

Enter number :
9353
Entered number is : 9353
The frequency of digits which are even:0

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
			if((iDigit%2)==0)
			{
				iCount++;
			}
			iNo=iNo/10;
		}
		
		
		return iCount;
	}
}

class program243
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Frequency();
			System.out.println("The frequency of digits which are even:"+iRet);
			
    }
}