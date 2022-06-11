/*
OUTPUT:

Enter the string:
Marvellous Infosystem
Enter the number:
11
After copy :Marvellous

*/
#include<stdio.h>
#include<stdbool.h>
#include<String.h>

void strCpy(char *src,char *dest,int iNo)
{
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while((*src!='\0')&& (iCnt<iNo))
	{
		
		*dest=*src;
	
		iCnt++;
		dest++;
		src++;
	}
	*dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];
	int iValue=0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);

	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	strCpy(Arr,Brr,iValue);
	printf("After copy :%s\n",Brr);
	return 0;
}