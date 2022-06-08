/*
OUTPUT:

Enter the first string:
Marvellous Infosystem
After the reverse and copy string:metsysofnI suollevraM 

Enter the first string:
Jay Ganesh
After the reverse and copy string:hsenaG yaJ


*/
#include<iostream>
using namespace std;

void StrCpyRev(char *scr,char *dest)
{
	
	char temp='\0';
	char *start=scr;
	char *end=scr;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
	
	
	while(*scr!='\0')
	{
		*dest=*scr;
		scr++;
		dest++;
	}
	dest='\0';
	
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	cout<<"Enter the first string:"<<endl;
	cin.getline(Arr,30);
	
	
	StrCpyRev(Arr,Brr);
	cout<<"After the reverse and copy string:"<<Brr<<endl;
	
	return 0;
}