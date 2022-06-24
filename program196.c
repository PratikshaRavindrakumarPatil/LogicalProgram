/*

Enter the file name that you want to open:
Marvellous11.txt
File is succesfully created with fd:3


*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void Display(char Fname[])
{
	int fd=0;
	fd=open(Fname,O_RDONLY);
	
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return;
	}
	
	printf("File is succesfully created with fd:%d\n",fd);


}


int main()
{
	char Fname[30];
	printf("Enter the file name that you want to open:\n");
	scanf("%s",Fname);
	
	Display(Fname);
	
	return 0;
}