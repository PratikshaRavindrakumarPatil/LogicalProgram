/*

Enter the file name to open file:
Marvellous5.txt
File is succesfully opened with fd:3
Data from file is:Marvellousα↓@


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
	
	fd=open(Fname,O_RDWR|O_APPEND);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("File is succesfully opened with fd:%d\n",fd);
	
	read(fd,Data,10);
	printf("Data from file is:%s\n",Data);
	
	return 0;
}