/*

Enter the file name to open:
LB20.txt
Count of white space is:2




*/

//Maximum Thruoghput in minimum hardware movement
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>
#define FILESIZE 1024


int Count(char Fname[])
{
	int fd=0;
	char Data[FILESIZE]; //Mug aahe
	int iRet=0;
	int iCnt=0;
	int iCount=0;
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
			
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		for(iCnt=0;iCnt<iRet;iCnt++)
		{
			if(Data[iCnt]==' ' )
			{
				iCount++;
			}
		}
	}
	
	close(fd);
	return iCount;
}


int main()
{
	char Fname[20];
	int iRet=0;
	
	printf("Enter the file name to open:\n");
	scanf("%s",Fname);

	iRet=Count(Fname);
	printf("Count of white space is:%d\n",iRet);
	
	
	return 0;
}




