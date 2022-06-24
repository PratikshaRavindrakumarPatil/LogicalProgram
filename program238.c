#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int main()
{
	char fname[20];
	int fd=0;
	char Data[100];
	int iRet=0;
	
	printf("Enter the file name to open:\n");
	scanf("%s",fname);


	fd=open(fname,O_RDWR|O_APPEND);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("file is succesfully opened with FD:%d\n",fd);
	
	printf("Enter the data that you want write:\n");
	scanf(" %[^'\n']s",Data);	
		
	iRet=write(fd,Data,strlen(Data));
	printf("%d bytes gets succesfully written in the file.\n",iRet);
	
	
	return 0;
}




