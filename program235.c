#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int main()
{
	char fname[20];
	char Data[100];
	int fd=0; 
	int iRet=0;
	
	printf("Enter the file name to create:\n");
	scanf("%s",fname);
	
	
	printf("Enter the data that you want to write:\n");
	scanf(" %[^'\n']s",Data);
	
	
	fd=creat(fname,0777);
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
	printf("file is created with FD:%d\n",fd);
	
	iRet=write(fd,Data,strlen(Data));
	printf("%d bytes succesfully written in the file\n",iRet);
	return 0;
}




