/*

Enter the file name that you want to open:
Marvellous11.txt
Enter the data that you want to write :
Hello
5 bytes data is succesfully writen in file



*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>


void Display(char Fname[])
{
	int fd=0;
	char Data[100];
	int iRet=0;
	
	fd=open(Fname,O_RDWR|O_APPEND);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return;
	}
	
	printf("Enter the data that you want to write : \n");
    scanf(" %[^'\n']s",Data);

	iRet=write(fd,Data,strlen(Data));
	printf("%d bytes data is succesfully writen in file\n",iRet);
	
	close(fd);
	
}


int main()
{
	char Fname[30];
	printf("Enter the file name that you want to open:\n");
	scanf("%s",Fname);
	
	Display(Fname);
	
	return 0;
}