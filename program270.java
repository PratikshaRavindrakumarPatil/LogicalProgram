/*

OUTPUT:
Enter the number:
5
Entered number is:5
A       B       C       D       E

Enter the number:
-5
Entered number is:-5
A       B       C       D       E

*/
import java.lang.*;
import java.util.*;

class Pattern 
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the number:");
		this.iNo=sobj.nextInt();
		
	}
	
	public void Display()
	{
		
		System.out.println("Entered number is:"+this.iNo);
	}
	
	public void DisplayPattern()
	{
		int iCnt=0;
		char ch='\0';
		if(iNo<0)
		{
			iNo=-iNo;
		}
		for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
		{
			System.out.print(ch+"\t");
		}
			
	}
}

class program270
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}