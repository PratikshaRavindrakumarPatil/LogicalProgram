/*

Enter the file name that you want to open:
Marvellous11.txt
File is succesfully created with fd:3
Jay Ganesh


*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024


int Display(char Fname[])
{
	int fd=0;
	int iRet=0;
	int iSum=0;
	char Data[FILESIZE];
	
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
	printf("File is succesfully created with fd:%d\n",fd);

	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		iSum=iSum+iRet;
	}
	
	close(fd);
	return iSum;
}


int main()
{
	char Fname[30];
	int iRet=0;
	
	printf("Enter the file name that you want to open:\n");
	scanf("%s",Fname);
	
	iRet=Display(Fname);
	printf("file size is %d byte.",iRet);
	
	return 0;
}