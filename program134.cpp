/*
Enter the string:
Marvellous
After the copy string:arvellous


Enter the string:
AsdDs
After the copy string:sds
*/
#include<iostream>
using namespace std;

void StrcpySmall(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		if(*scr>='a' && *scr<='z')
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
	
	StrcpySmall(Arr,Brr);
	cout<<"After the copy string:"<<Brr<<endl;
	
	return 0;
}