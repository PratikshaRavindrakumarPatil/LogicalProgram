/*
OUTPUT:

Enter first number:
10
Enter Second number:
11
Value is : 10
Value is : 11
Addition is:21


Enter first number:
-12
Enter Second number:
1
Value is : -12
Value is : 1
Addition is:13

*/
import java.lang.*;
import java.util.*;

class Number
{
    private int iNo1,iNo2;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first number: ");
        this.iNo1 = sobj.nextInt();
		
		System.out.println("Enter Second number: ");
        this.iNo2 = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo1);
		System.out.println("Value is : "+this.iNo2);
   }

    public int Addition()
	{
		if(iNo1<0)
		{
			iNo1=-iNo1;
		}
		if(iNo2<0)
		{
			iNo2=-iNo2;
		}
		
		int iAns=0;
		iAns=iNo1+iNo2;
		return iAns;
	}
}

class program221
{
    public static void main(String b[])
    {
            Number nobj = new Number();
		
			int iRet=0;
			
            nobj.Accept();
            nobj.Display();

            iRet=nobj.Addition();
			System.out.println("Addition is:"+iRet);
			
    }
}