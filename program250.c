#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>
#define FILESIZE 1024


void CpoyFile(char Fname[],char FnameC[])
{
	int fd=0,fd1=0;
	char Buffer[FILESIZE];
	int iRet=0;
	
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	fd1=creat(FnameC,0777);
	if(fd1==-1)
	{
		printf("Unable to create file\n");
		return;
	}
	
	while((iRet=read(fd,Buffer,FILESIZE))!=0)
	{
		write(fd1,Buffer,iRet);
		
	}
	
	close(fd);
	close(fd1);
	
}


int main()
{
	char Fname[30];
	char FnameC[30];
	
	printf("Enter the file name that you want to create:");
	scanf("%s",Fname);
	
	printf("Enter the file name that you want to copy:");
	scanf("%s",FnameC);
	
	CopyFile(Fname,FnameC);
	
	return 0;
}