/*
OUTPUT:

Enter the first string:
MarVellOUs
After the copy string:mARvELLouS

*/
#include<iostream>
using namespace std;

void StrCpyToggle(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		if((*scr>='a')&&(*scr<='z'))
		{
			*scr=*scr-32;
		}
		else if((*scr>='A')&&(*scr<='Z'))
		{
			*scr=*scr+32;
		}
		*dest=*scr;
		scr++;
		dest++;
	}
	
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	cout<<"Enter the first string:"<<endl;
	cin.getline(Arr,30);
	
	
	StrCpyToggle(Arr,Brr);
	cout<<"After the copy string:"<<Brr<<endl;
	
	return 0;
}