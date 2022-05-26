/*
OUTPUT:

Enter the Number:
10
Number are:
1
2
3
4
5
6
7
8
9
10


Enter the Number:
-5
Number are:
1
2
3
4
5

*/
import java.lang.*;
import java.util.*;

class DisplayNumber
{
	private	int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the Number:");
		iNo=sobj.nextInt();
		
	}
	
	public void Display()
	{
		int iCnt=0;
		if(iNo<0)
		{
			iNo=-iNo;
		}
		
		System.out.println("Number are:");
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			System.out.println(iCnt);
		}
		
	}
}
class program120
{
	public static void main(String arg[])
	{
		DisplayNumber dobj=new DisplayNumber();
		dobj.Accept();
		dobj.Display();
		
	}
}