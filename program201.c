/*

Enter the file name that you want to open:
LB.txt
Number of capital character is:5



*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024


int CountCapital(char Fname[])
{
	int fd=0;
	int iRet=0;
	int iCnt=0,iCount=0;
	char Data[FILESIZE];
	
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	
	

	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		for(iCnt=0;iCnt<iRet;iCnt++)
		{
			if((Data[iCnt]>='A')&&(Data[iCnt]<='Z'))
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
	char Fname[30];
	int iRet=0;
	
	printf("Enter the file name that you want to open:\n");
	scanf("%s",Fname);
	
	iRet=CountCapital(Fname);
	printf("Number of capital character is:%d\n",iRet);
	
	return 0;
}