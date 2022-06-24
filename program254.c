#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

int FileLength(char Fname[])
{
	int fd=0;
	char Data[10]; //Mug aahe
	int iRet=0;
	int iSum=0;
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
			
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		iSum=iSum+iRet;
	}
	
	close(fd);
	return iSum;
}


int main()
{
	char Fname[20];
	int iRet=0;
	
	printf("Enter the file name to open:\n");
	scanf("%s",Fname);

	iRet=FileLength(Fname);
	printf("Length of file is:%d\n",iRet);
	
	
	return 0;
}




