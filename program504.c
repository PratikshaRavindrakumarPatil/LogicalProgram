/*

Enter the file name that you want to open:
LB5.txt
File is succesfully opened with fd:3

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>


void Display(char fname[])
{
	int fd=0;
	char Data[100];
	int iRet=0;
	
	fd=open(fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open file.\n");
		return;
	}
	
	printf("File is succesfully opened with fd:%d\n",fd);
		
	printf("Enter the data that you want to write : \n");
    scanf(" %[^'\n']s",Data);

	iRet=write(fd,Data,strlen(Data));
	printf("%d bytes data is succesfully writen in file\n",iRet);
	
}

int main()
{
	char fname[30];
	
	printf("Enter the file name that you want to open:\n");
	scanf("%s",fname);
	
	Display(fname);
	
	return 0;
}