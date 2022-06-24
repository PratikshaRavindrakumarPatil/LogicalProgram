/*

Enter the file name that you want to open:
LB.txt
Enter the character that you want to search:
a
a occure at:2 time


*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024


int Search(char Fname[],char ch)
{
	int fd=0;
	int iRet=0;
	int iCnt=0,iCount=0;
	char Data[FILESIZE];
	
	
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
			if(Data[iCnt]==ch)
			{
				iCount++;
			}
		}
	}
	
	
	return iCount;
}


int main()
{
	char Fname[30];
	int iRet=0;
	char ch='\0';
	
	printf("Enter the file name that you want to open:\n");
	scanf("%s",Fname);
	
	printf("Enter the character that you want to search:\n");
	scanf(" %c",&ch);
	
	
	iRet=Search(Fname,ch);
	printf("%c occure at:%d time\n",ch,iRet);
	
	return 0;
}