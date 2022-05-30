/*
OUTPUT:

Enter number :
22431
Entered number is : 22431
The frequency of digits which are odd:2


Enter number :
120
Entered number is : 120
The frequency of digits which are odd:1

Enter number :
242
Entered number is : 242
The frequency of digits which are odd:0


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
			if((iDigit%2)!=0)
			{
				iCount++;
			}
			iNo=iNo/10;
		}
		
		
		return iCount;
	}
}

class program244
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Frequency();
			System.out.println("The frequency of digits which are odd:"+iRet);
			
    }
}