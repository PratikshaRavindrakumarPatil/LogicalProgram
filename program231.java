/*
OUTPUT:
Enter number :
10
Entered number is: 10
2

Enter number :
12
Entered number is: 12
2       4       6


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
        System.out.println("Entered number is: "+this.iNo);
    }

    public void EvenFactor()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		for(iCnt=1;iCnt<=iNo/2;iCnt++)
		{
			if((iNo%iCnt)==0)
			{
				if(iCnt%2==0)
				{
					System.out.print(iCnt+"\t");
				}
			}
		}
	}
}

class program231
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.EvenFactor();
    }
}