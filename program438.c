/*


Enter the string:
Jay Ganesh
Count of white spaces are:1

Enter the string:
Aas kl  s a
Count of white spaces are:6

Enter the string:
Marvellous
Count of white spaces are:0
*/
#include<stdio.h>
#include<String.h>

int Count(char *str)
{
	int Count=0;
	while(*str!='\0')
	{
		if((*str==' '))
		{
			Count++;
		}
		str++;
	}
	return Count;
}

int main()
{
	char Arr[30];
	int iRet=0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Count(Arr);
	printf("Count of white spaces are:%d\n",iRet);
	return 0;
}