#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<String.h>


int main()
{
	char Fname[20];
	int fd=0;
	char Data[100];
	
	printf("Enter the file name for create:\n");
	scanf("%s",Fname);
	
	printf("Enter the data:\n");
	scanf(" %[^'\n']s",Data);
	
	fd=creat(Fname,0777);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	printf("file is succesfully created with fd:%d\n");
	
	
	
	write(fd,Data,strlen(Data));

	
	return 0;
}