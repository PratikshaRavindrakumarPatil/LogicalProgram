/*
Enter the string:
Marvellous Multi OS
After the copy string:MMOS


*/
#include<iostream>
using namespace std;

void StrcpyCap(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		if(*scr>='A' && *scr<='Z')
		{
			*dest=*scr;
			dest++;
		}
		scr++;
	}
	dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	
	cout<<"Enter the string:"<<endl;
	cin.getline(Arr,30);
	
	StrcpyCap(Arr,Brr);
	cout<<"After the copy string:"<<Brr<<endl;
	
	return 0;
}