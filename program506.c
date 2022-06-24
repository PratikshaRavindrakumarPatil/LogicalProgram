/*

Enter the file name what you want to create:
LB8.txt
Enter the data:
Jay Ganesh
data are succesfully writen in file


*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>

void Display(char fname[])
{
	int fd=0;
	int fd1=0;
	char Data[100];
	
	
	fd=creat(fname,0777);
	
	if(fd==-1)
	{
		printf("unable to create file");
		return;
	}
	
	open(fname,O_RDWR);
	
	printf("Enter the data:\n");
	scanf(" %[^'\n']s",Data);
	
	write(fd,Data,strlen(Data));
	printf("data are succesfully writen in file");
	
}

int main()
{
	char fname[30];
	printf("Enter the file name what you want to create:\n");
	scanf("%s",fname);
	
	
	Display(fname);
	return 0;
}