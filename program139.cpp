/*
OUTPUT:

Enter the first string:
MArVellous
After the copy string:marvellous
*/
#include<iostream>
using namespace std;

void StrCpySmall(char *scr,char *dest)
{
	while(*scr!='\0')
	{
		if((*scr>='A')&&(*scr<='Z'))
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
	
	
	StrCpySmall(Arr,Brr);
	cout<<"After the copy string:"<<Brr<<endl;
	
	return 0;
}