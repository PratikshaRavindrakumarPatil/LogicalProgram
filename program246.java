/*
OUTPUT:
Enter number :
123
Entered number is : 123
The multiplication of digit is:6

Enter number :
2374
Entered number is : 2374
The multiplication of digit is:168


Enter number :
1002
Entered number is : 1002
The multiplication of digit is:0

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

    public int MultiDigit()
	{
		int iDigit=0;
		int iMult=1;
		
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iMult=iMult*iDigit;
			iNo=iNo/10;
		}
		
		
		return iMult;
	}
}

class program246
{
    public static void main(String b[])
    {
            Number nobj = new Number();

			int iRet=0;
            nobj.Accept();
            nobj.Display();

            iRet=nobj.MultiDigit();
			System.out.println("The multiplication of digit is:"+iRet);
			
    }
}