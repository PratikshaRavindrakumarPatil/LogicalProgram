/*
OUTPUT:

Enter number :
2344
Entered number is : 2344
The frequency of digits which are lies between 3 to 7:2

Enter number :
1212
Entered number is : 1212
The frequency of digits which are lies between 3 to 7:0


Enter number :
98776
Entered number is : 98776
The frequency of digits which are lies between 3 to 7:1

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
			if((iDigit>3)&&(iDigit<7))
			{
				iCount++;
			}
			iNo=iNo/10;
		}
		
		
		return iCount;
	}
}

class program245
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Frequency();
			System.out.println("The frequency of digits which are lies between 3 to 7:"+iRet);
			
    }
}