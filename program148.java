/*
OUTPUT:

Enter number :
34522
Value is : 34522
5       3

Enter number :
-1211
Value is : -1211
1       1       1


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

    public void OddDigit()
	{
		int iDigit=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		while(iNo!=0)
		{
			iDigit=iNo%10;
			if((iDigit%2)!=0)
			{
				System.out.print(iDigit+"\t");
			}
			iNo=iNo/10;
		}
	}
}

class program148
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.OddDigit();
    }
}