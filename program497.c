/*

Enter the file name to open file:
Marvellous5.txt
File is succesfully opened with fd:3
Enter the data that you want to enter:
Marvellous Infosystems
22 of byte gets succesfully write

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int main()
{
	char Fname[30];
	int fd=0;
	char Data[100];
	int iRet=0;
	
	printf("Enter the file name to open file:\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("File is succesfully opened with fd:%d\n",fd);
	
	printf("Enter the data that you want to enter:\n");
	scanf(" %[^'\n']s",Data);
	
	iRet=write(fd,Data,strlen(Data));
	printf("%d of byte gets succesfully write\n",iRet);
	
	return 0;
}