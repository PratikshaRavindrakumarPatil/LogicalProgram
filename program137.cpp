/*
OUTPUT:

Enter the first string:
Ma rve llou s
After the copy string:Marvellous


*/
#include<iostream>
using namespace std;

void StrCpy(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		if(*scr==' ')
		{
			scr=scr+1;
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
	
	
	StrCpy(Arr,Brr);
	cout<<"After the copy string:"<<Brr<<endl;
	
	return 0;
}