/*

OUTPUT:

Enter number :
5
Value is : 5
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous


Enter number :
-10
Value is : -10
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
Marvellous
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

    public void DisplayName()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.println("Marvellous");
		}
	}
}

class program222
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayName();
    }
}